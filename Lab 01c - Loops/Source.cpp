#include <iostream>
using namespace std;




// Function 1
void F1_CountingUp()
{
	int counter = 0;
	cout << "WHILE LOOP" << endl;
	cout << "F1_CountingUp" << endl;
	while (counter < 10)
	{
		cout << ++counter;
	}
	int counter = 0;
	cout << "FOR LOOP" << endl;
	for (counter < 10);
	{
		cout << counter;
	}

}
    
	

// Function 2
void F2_MultiplyUp()
{
	int counter = 1;
	cout << "WHILE LOOP" << endl;
	cout << "F2_MultiplyUp" << endl;
	while (counter < 200)
	{
		cout << counter;
		cout << (counter *= 2);
	}
	int counter = 1;
	cout << "FOR LOOP" << endl;
	for (counter < 200);
	{
		cout << counter;
	}
}

// Function 3
void F3_NumberGuesser()
{
	cout << "F3_NumberGuesser" << endl;
	int secretNumber = 18;
	int playerGuess;
	do
	{
		cout << "Enter a number guess: ";
		cin >> playerGuess;

		while (playerGuess != secretNumber)
		{
			if (playerGuess < secretNumber)
			{
				cout << "TOO LOW" << endl;
			}
			if (playerGuess > secretNumber)
			{
				cout << "TOO HIGH" << endl;
			}
		}
	} while (playerGuess != secretNumber);
	cout << "YOU WIN" << endl;
}

// Function 4
void F4_InputValidator()
{
	cout << "please enter a number between 0 and 5";
	int choice;
	cin >> choice;
	cout << "F4_InputValidator" << endl;
	while (choice < 0 || choice > 5)
	{
		cout << "invalid entry, try again: ";
		cin >> choice;
	}
	cout << "Thank you";
}

// Function 5
void F5_GettingARaise()
{
	float startingWage;
	float percentRaisePerYear;
	float adjustedWage = (adjustedWage * percentRaisePerYear) + adjustedWage;
	int yearsWorked;
	adjustedWage = startingWage;
	cout << "F5_GettingARaise" << endl;
	cout << "Enter your starting wage, percent per year, and years worked: ";
	for (int years = 1; years < yearsWorked; years++)
	{
		(adjustedWage * 0.5);
	}
}

// Function 6
void F6_Summation()
{
	float sum;
	cout << "F6_Summation" << endl;
	for (float sum = 1, 1 - 10, sum++)
	{
		cout << "Sum: " << endl;
	}
}

/* Don't modify the code below! ****************************************/

int main()
{
	F1_CountingUp();
	cout << endl << endl;

	F2_MultiplyUp();
	cout << endl << endl;

	F3_NumberGuesser();
	cout << endl << endl;

	F4_InputValidator();
	cout << endl << endl;

	F5_GettingARaise();
	cout << endl << endl;

	F6_Summation();
	cout << endl << endl;


	cout << endl << endl;
	while (true);
	return 0;
}