#include <iostream>
#include <ctime>
#include <cstdlib>


int main(){
  std::srand(std::time(0));

  std::cout << "Welcome to the greatest calculator on Earth!" << std::endl;
  const size_t rand_num_max = 200;
  char operation[] = {'+', '-', '*'};
  
  bool end{false};
  while (!end){
    size_t rand_num1 = static_cast<size_t>(rand() % rand_num_max);
    size_t rand_num2 = static_cast<size_t>(rand() % rand_num_max);
    size_t rand_operation = static_cast<size_t>(rand() % std::size(operation));

    std::cout << "What is the result of " << rand_num1 
    << " " << operation[rand_operation] << " " << rand_num2 << " : ";

    int proper_answ;
    switch (operation[rand_operation])
    {
    case '+':{
      proper_answ = rand_num1 + rand_num2;
    }
      break;
      case '-':{
      proper_answ = rand_num1 - rand_num2;
    }
      break;
      case '*':{
      proper_answ = rand_num1 * rand_num2;
    }
      break;    
    default:
      break;
    }

    int users_answ;
    std::cin >> users_answ;
    if (users_answ == (proper_answ)){
      std::cout << "Congratulations! You got the result " << users_answ << " right!" << std::endl;
    } else {
      std::cout << "Naah! The correct result is: " << proper_answ << std::endl;
    }

    std::cout << "Do you want me to try again? (Y | N) : ";
    char go_on;
    std::cin >> go_on;
    end = (go_on == 'Y')? false : true;
  }

  std::cout << "See you later!";
  



  return 0;
}