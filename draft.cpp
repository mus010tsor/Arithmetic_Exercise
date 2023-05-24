#include <iostream>
#include <ctime>
#include <string>




int main(){
  std::srand(time(0));
  
  char sentence1 [] = "You are a tall guy.";
  char sentence2 [] = "You have been through a lot trouble.";
  char sentence3 [] = "You prefer eating healthy food to junk food.";
  char sentence4 [] = "You have great ambitions.";
  char sentence5 [] = "I have no idea what to say to be honest.";

  bool go_on = true;

  std::cout << "What is your name, darling?" << std::endl;
  std::string name;
  std::getline(std::cin, name);
  std::cout << name << ", ";

  while(go_on == true){
    int sentence = std::rand() % 5 + 1; 
    switch (sentence)
    {
    case 1:{
      std::cout << sentence1 << std::endl;
    }
      break;
    case 2:{
      std::cout << sentence2 << std::endl;
    }
      break;  
    case 3:{
      std::cout << sentence3 << std::endl;
    }
      break;
    case 4:{
      std::cout << sentence4 << std::endl;
    }
      break;  
    default:
    std::cout << sentence5 << std::endl;
      break;
    }


  std::cout << "Do you want me to continue?" << std::endl;
  char answer;
  std::cin >> answer; 

  bool is_correct = false;
  while (!is_correct){
    if ((answer == 'Y') || (answer == 'y')) {
      break;
    } else if ((answer == 'N') || (answer == 'n')){
      go_on = false;
      break;
    } else {
      std::cout << "Please give a correct answer: ";
      std::cin >> answer;
    }
  }

  }
  std::cout << "Ok, I'm done here, see you!" << std::endl;


  





  return 0;
}