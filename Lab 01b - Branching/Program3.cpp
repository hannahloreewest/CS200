#include <iostream>
using namespace std;
#include <string>

int main()
{
	float battery;

	cout << "What is your battery charge? %" ;
	cin >> battery; 

	if (battery >= 75)
	{
		cout << "[****]" << endl;
	}
	if (battery >= 50)
	{
		cout << "[*** ]" << endl;
	}
	if (battery >= 25)
	{
		cout << "[**  ]" << endl;
	}
	else
	{
		cout << "[*   ]" << endl;
	}
	return 0;
}