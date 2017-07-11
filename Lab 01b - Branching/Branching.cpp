#include <iostream>
using namespace std;
#include <string>   // use strings

int main()
{
	cout << "What is your hometown? " << endl;
    string hometown;
	cin >> hometown;
	
	if (hometown.size() > 6)
	{
		cout << " That's a long name! " << endl;
		cout << "What is your name? " << endl;
		string name;
		cin >> name;
		cout << "hello " << name << " from " << hometown;
	}
	else
	{
		cout << "What is your name? " << endl;
		string name;
		cin >> name;
		cout << "hello" << name << "from" << hometown << endl;
	}
	
	return 0;
	
}