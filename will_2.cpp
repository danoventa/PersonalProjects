// Test File
#include <iostream>

const std::string hello = "Hey Judy! You know, I can't get enough of it!";
const std::string will = "I love it when you say yes. :D";
const std::string instruct = "So, will you go out with me?";

int main(int argc, char *argv[])
{
    for (int i = 0; i < 3; ++i){
      for (int j = 0; j < 80; ++j){
        std::cout << "*";
      }
      std::cout << std::endl;
    }
    int number = 240;

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
              answer == "Yes"||
              answer == "yea"||
              answer == "yeah"||
              answer == "Yea"||
              answer == "Yeah"){
                std::cout << "太好了!!" << std::endl;
                for (int h = 0; h < number; ++ h){
                  std::cout << "**";
                }
                break;
                std::cout << std::endl;
              }

      else if (answer == "si"||
                answer == "Si"||
                answer == "definitivamente"){
                std::cout << "Que buenisimo! Estoy muy feliz :D" << std::endl;
                for (int h = 0; h < number; ++ h){
                  std::cout << "++";
                }
                std::cout << std::endl;
                break;
              }

      else if (answer == "n" ||
              answer == "N" ||
              answer == "no"||
              answer == "No"){
                std::cout << "Oooooh... so sorry. No take backs！Try again!" << std::endl;
                for (int h = 0; h < number; ++ h){
                  std::cout << "--";
                }
                std::cout << std::endl;
              }
              for (int i = 0; i < 1; ++i){
                for (int j = 0; j < 80; ++j){
                  std::cout << "*";
                }
                std::cout << std::endl;
            }
        }

    std::cout << std::endl << "She said " << answer << "!!" << std::endl;

    for (int i = 0; i < 3; ++i){
      for (int j = 0; j < 80; ++j){
        std::cout << "*";
      }
      std::cout << std::endl;
    }
}
