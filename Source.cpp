#include <iostream>

using namespace std;

int main()
{

	int total = 0;

	int grade_counter = 1;

	double grade, average;

	while (grade_counter <= 10)
	{
		cout << "Enter grade : ";
		cin >> grade;

		total = total + grade;

		grade_counter = grade_counter + 1;
	
	
	}

	average = total / 10;

		cout << "\nClass average is : " << average << endl;









	cin.get(); cin.get();

	return 0;
}