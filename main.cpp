
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
 *
 *
 * Flowchart:
 * begin-> output welcome text-> generate & output two random nums-> wait for input: if input != "leave"-> output correct answer-
 *                                                  ^                                 |->if input = "leave"-> exit program;      |
 *                                                  |----------------------------------------------------------------------------|
*/
#include <random>
#include <iostream>
#include <string>
#include <ctime>

bool stopProg           = false;
float userInput;
std::string stringInput   = "noTexture";
float equationSolution;


void probCreation()
{
  std::cout << "Hello! Welcome to your math tutor :-)\n";

  while (stopProg == false)
  {
    std::cout << "Would you like [Addition], [Subtraction], [Multiplication], or [Division]?\n"
"You can also leave by typing [Leave]\n";
    std::cin  >> stringInput;

    srand(time(NULL));
    float topNum = rand() % 1000; // range of 0 to 999
    float botNum = rand() % 1000; // ^^^^^^^^^^^^^^^^^
    
    if (stringInput == "Addition" ||
        stringInput =="addition")
    {
      equationSolution = topNum + botNum;
      std::cout << "Input your answer and hit enter to check if you're correct.\n";

      std::cout << "  " << topNum << "\n +" << botNum << "\n" << "------ Your Answer: ";
      std::cin >> userInput;

      std::cout << equationSolution << "\n"; 
    }
    else if (stringInput == "Subtraction"||
        stringInput == "subtraction")
    {
      equationSolution = topNum - botNum;

      std::cout << "Input your answer and hit enter to check if you're correct.\n";
      std::cout << "  " << topNum << "\n -" << botNum << "\n" << "------ Your Answer: ";
      std::cin >> userInput;

      std::cout << equationSolution << "\n";
    }
    else if (stringInput == "Multiplication"||
        stringInput == "multiplication")
    {
      equationSolution = topNum * botNum;

      std::cout << "Input your answer and hit enter to check if you're correct.\n";
      std::cout << "  " << topNum << "\n *" << botNum << "\n" << "------ Your Answer: ";
      std::cin >> userInput;

      std::cout << equationSolution << "\n";

    }
    else if (stringInput == "Division"||
        stringInput =="division")
    {
      equationSolution = topNum / botNum;

      std::cout << "Input your answer (round two decimal places) and hit enter to check if you're correct.\n";
      std::cout << "  " << topNum << "\n /" << botNum << "\n" << "------ Your Answer: ";
      std::cin >> userInput;

      // Mathematically rounds to the second decimal place.
      equationSolution = std::round(equationSolution * 100) / 100;
      std::cout << equationSolution << "\n";
    }
    else if (stringInput == "Leave" ||
             stringInput =="leave")
    {
      stopProg = true;
    }
    else 
    {
      std::cout << "Error: Please input from only the menu."; 
    }

  

    // Checks if the answer is correct.
    if (userInput == equationSolution)
    {
      std::cout << "You are correct!\n\n\n";
    } 
    else 
    {
      std::cout << "That is incorrect...\n\n\n";  
    }

  }
}



// Main Funciton. Every cpp program needs it. 
int main()
{
  probCreation();
}

