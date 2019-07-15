// Computer, Guess My Number


#include<iostream>
#include<cstdlib>
#include<ctime>

int main()
{
	srand(static_cast<unsigned int>(time(0))); //seed random number generator

	int computerNumber = rand() % 100 + 1;//random number between 1-100
	int tries = 0;
	int myNumber;

	std::cout << "\tWelcome to, Computer, Guess My Number!\n\n";

	//player input to get number
	std::cout << "Enter a number (1-100): ";
	std::cin >> myNumber;

	do
	{
		if (computerNumber >= 101 || computerNumber <= 0)
		{
			computerNumber = rand() % 100 + 1;
		}
		
		std::cout << "\nThe computer guesses: " << computerNumber << "!";
		++tries;

		if (computerNumber > myNumber)
		{
			std::cout << "\nToo high!\n\n";
			computerNumber = computerNumber - (rand() % computerNumber + 1);
			continue;
			
		}
		else if (computerNumber < myNumber)
		{
			std::cout << "\nToo low!\n\n";
			computerNumber = computerNumber + (rand() % computerNumber + 1);
			continue;
		}
		else
		{
			std::cout << "\nThat's it! You got it in " << tries << " guesses!\n\n";
			break;
		}
		
	} while (true);

	return 0;
}