// Test File
#include <iostream>

const std::string hello = "Hey Judy!";
const std::string will = "Will you go out with me?";
const std::string instruct = "si o si?";

int main(int argc, char *argv[])
{
    for (int i = 0; i < 3; ++i){
      for (int j = 0; j < 80; ++j){
        std::cout << "*";
      }
      std::cout << std::endl;
    }
    int number = 0;
    std::cout << "Enter A Number from 1 - 10" << std::endl;
    std::cin >> number;

    std::string answer = "";

    for (int k; k <= number; ++k)
    {
      std::cout << hello << std::endl;
      std::cout << will << std::endl;
      std::cout << instruct << std::endl;
      std::cin >> answer;
      if (answer == "y" ||
              answer == "Y" ||
              answer == "yes"||
              answer == "Yes"){
                std::cout << "Awesome!!" << std::endl;
                for (int h = 0; h < number; ++ h){
                  std::cout << ":D";
                }
                std::cout << std::endl;
              }
      else if (answer == "si"||
                answer == "Si"){
                std::cout << "Que Buenisimo!!" << std::endl;
                for (int h = 0; h < number; ++ h){
                  std::cout << ":D";
                }
                std::cout << std::endl;
              }
      else if (answer == "n" ||
              answer == "N" ||
              answer == "no"||
              answer == "No"){
                std::cout << "So sad.. Que triste" << std::endl;
                for (int h = 0; h < number; ++ h){
                  std::cout << "D:";
                }
                std::cout << std::endl;
        }
    }

    std::cout << answer << std::endl;

    for (int i = 0; i < 3; ++i){
      for (int j = 0; j < 80; ++j){
        std::cout << "*";
      }
      std::cout << std::endl;
    }
}
