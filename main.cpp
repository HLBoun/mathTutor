
/*
  Huthsady Legend Boun 
  Professor Edwards
  CISP1010 O81
  14 Sept. 2024
  
  Assignment = Math Tutor
  Params = 2 Random numbers
    added together
    user wait for solution
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

