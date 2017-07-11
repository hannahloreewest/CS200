#include <iostream>
using namespace std;
#include <string>

int main()
{
	float studentPoints, totalPoints;
	

	cout << "Enter points earned: " ;
	cin >> studentPoints;

	cout << "Enter total points:  ";
	cin >> totalPoints;

	float percent = ((studentPoints / totalPoints) * 100);
	cout << "Score: " << percent << "%" ;

	if (percent > 70)
	{
		cout << "	Pass" << endl;
	}
	else
	{
		cout << "	Fail" << endl;
	}
	
	
	return 0;
}