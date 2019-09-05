#include <iostream>
#include<ctime>
#include<iomanip>

using namespace std; 

int value1, value2, max, min, var1, var2, randValue; 

double sum; 

int main()
{
	//This will work with any case, if #s are pos or neg, 
	cout << "Enter Value 1: ";
	cin >> value1; 
	cout << "Enter Value 2: ";
	cin >> value2; 

	srand(time(NULL)); 

	if (value1 > value2)
	{
		max = value2;
		min = value1; 
	}
	else
	{
		max = value1;
		min = value2;
	}

	var1 = min;
	var2 = max; 

	for (int i = 0; i < 1000; ++i)
	{
		randValue = var2 + rand() % ((var1 + 1) - var2); 
		sum = sum + randValue; 

		cout << randValue << "\n"; 

		if (min > randValue)
		{
			min = randValue;
		}
		if (max < randValue)
		{
			max = randValue; 
		}
	}

	cout << "Sum: " << sum << "\n"
		 << "Average: " << fixed << setprecision(2) << (sum / 1000) << "\n"
		 << "Maximum: " << max << "\n"
		 << "Minimum: " << min << endl; 
}

