#include <iostream>

using namespace std;

int main()
{
	double points = 0, pointsPossible = 0, percent = 0;
	char grade = 'A';
	
	cout << "How many points do you have? " << endl;
	cin >> points;
	cout << "How many points are possible?" << endl;
	cin >> pointsPossible;

	percent = (points / pointsPossible) * 100;
	cout << percent << "%" << endl;

	if (percent >= 90)
	{
		grade = 'A';
	}
	else if (percent >= 80 && percent < 90 )
	{
		grade = 'B';
	}
	else if (percent >= 70 && percent < 80)
	{
		grade = 'C';
	}
	else if (percent >= 59 && percent < 70)
	{
		grade = 'D';
	}
	else if (percent <= 50)
	{
		grade = 'F';
	}


	cout << "You got a " << grade << endl;

	switch (grade)
	{
	case 'A':
		cout << "You did great!" << endl;
		break;
	case 'B':
		cout << "You could have done better." << endl;
		break;
	case 'C':
		cout << "You just barely made it." << endl;
		break;
	case 'D':
		cout << "Try again." << endl;
		break;
	case 'F':
		cout << "Turn in your badge." << endl;
		break;
	}

	cout << 2 * acos(0.0) << endl;

	system("Pause");
	return 0;
}