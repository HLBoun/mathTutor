
/*
 * main.cpp
 * Math Tutor that allows you to add two random numbers together and check to see if youre correct
 * Huthsady Legend Boun
 * 14 Sept. 2024
 * Program 1 
 * 
 * Params: 
 *  2 Random numbers outputted in addition format
 *  wait for user input
*/
#include <random>
#include <iostream>
#include <string>
#include <ctime>

bool stopProg  = false;
std::string userInput = "noTexture";

void probCreation()
{
  std::cout << "Hello! Welcome to your math tutor :-)\n";

  while (stopProg == false)
  {
    srand(time(NULL));
    int topNum = rand() % 1000; // range of 0 to 999
    int botNum = rand() % 1000; // ^^^^^^^^^^^^^^^^^
    
    std::cout << "Input your answer and hit enter to check if you're correct. When you want to exit the program, enter 'leave'\n";

    std::cout << "  " << topNum << "\n +" << botNum << "\n" << "------ Your Answer: ";
    
    std::cin >> userInput;

    std::cout << topNum + botNum << "\n";
    if (userInput == "leave")
    {
      stopProg = true;
    }
  }
}






int main()
{
  probCreation();
}

