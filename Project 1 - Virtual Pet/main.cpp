#include "pa_virtual_pet.hpp"

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string petName;
    int hungerPercent = 0;
    int happinessPercent = 100;
    int healthPercent = 100;

    // 1. Initialize hungerPercent to 0, happinessPercent to 100,
    // and healthPercent to 100.

    cout << "Enter your pet's name: ";
	cin >> petName;
    // 2. Get the user's input and store it in petName.
    

    bool quit = false;
    while ( !quit ) // game loop
    {
        cout << endl << endl;
        cout << "---------------------------" << endl;

        UpdatePet( hungerPercent, happinessPercent, healthPercent );
        DrawPet( healthPercent );
        DisplayPetStats( petName, hungerPercent, happinessPercent, healthPercent );

        // 3. Check if pet's health is less than or equal to 0.
        // if so, break out of the while loop.
		if (healthPercent == 0)
		{
			break;
		}

        DisplayMainMenu();
        int choice = GetChoice( 1, 4 );

        // 4. Choose which function to call based on the user's choice

		if (choice == 1)
		{
			Feed( hungerPercent );
		}

		if (choice == 2)
		{
			Play( happinessPercent );
		}

		if (choice == 3)
		{
			Heal( healthPercent );
		}

		if (choice == 4)
		{
			bool quit = true;
		}
    }

    return 0;
}
