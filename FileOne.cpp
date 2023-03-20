#include <iostream>
#include <string>
using namespace std;

// function calculate takes 2 numbers and the desired operation +,-,*,/ and returns the result.
float calculate(float num1, float num2, char sign)
{
	if (sign == '+')
	{
		return num1 + num2;
	}
	else if (sign == '-')
	{
		return num1 - num2;
	}
	else if (sign == '*')
	{
		return num1 * num2;
	}
	else if (sign == '/')
	{
		if (num2 == 0)
		{
			cout << "Can not divide by ";
			return 0;
		}
		else
		{
			return num1 / num2;
		}
	}
	return 0;
}

// function game prompts the user to enter the 2 numbers and the operation, then sends them as arguments to "calculate" function.
void game()
{
	float x;
	float y;
	int choice;

	cout << "Enter num1: ";
	cin >> x;
	cout << "Enter num2: ";
	cin >> y;
	cout << "Enter desired operation: ";
	char operation;
	cin >> operation;
	cout << calculate(x, y, operation) << endl;
}

// function playAgain prompts the user to enter 1 to play again, or 0 to stop the game.
bool playAgain()
{
	int x;
	cout << "play again ? 0 > no, 1 > yes.";
	cin >> x;

	if (x == 1)
	{
		game();
		return true;
	}
	else
		return false;
}

int main()
{
	bool myChoice;
	bool isPlaying = true;
	game();

	// if the output of playAgain() to myChoice is true, then the "do while" loop will contine, if  myChoice is false, then the loop breaks and program ends.
	do
	{
		myChoice = playAgain();
		if (myChoice)
			isPlaying = true;
		else
			isPlaying = false;

	} while (isPlaying);

	return 0;
}
