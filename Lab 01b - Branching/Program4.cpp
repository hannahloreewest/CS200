#include <iostream>
using namespace std;
#include <string>


int main()
{
	cout << "What is your favorite fruit?" << endl;
	cout << "1. Apple " << endl;
	cout << "2. Banana " << endl;
	cout << "3. Pear " << endl;
	cout << "4. Strawberry " << endl;

	cout << endl;

	cout << "Your selection:  ";
	int choice;
	cin >> choice;

	if (choice == 1||2||3||4)
	{
		cout << "Good choice!" << endl;
	}
	else
	{
		cout << "Invalid Choice!" << endl;
	}

	return 0;
}