#include <iostream>
#include <string>
using namespace std;

int main()
{
	string students[3] = { "Hannah", "Alexa", "Ethan" };
	string *ptrStudent = nullptr;

	cout << "Enter a student ID: 0, 1, or 2 " << endl;
	int id;
	cin >> id;

	ptrStudent = &students[id];

	cout << "Enter new name of student: ";
	cin >> *ptrStudent;

	for (int i = 0; i < 3; i++)
	{
		cout << students[id] << endl;
	}

	return 0;
}