
#include<iostream>    
#include<array> 
using namespace std;

void main()
{
	int size;
	float min, max;
	float sum = 0;
	string highest, lowest;
	cout << "Enter the number of movies: ";
	cin >> size;

	float* arrRatings = new float[size];

	string* arrNames = new string[size];

	for (int i = 0; i < size; i++)
	{
		string name;
		cout << "Enter movie name: ";
		cin >> name;
		float rating;
		cout << "Enter movie rating: ";
		cin >> rating;
		arrRatings[i] = rating;
		arrNames[i] = name;
		sum += rating;
	}

	min = 10;
	max = arrRatings[0];
	
	for (int i = 0; i < size; i++)
	{
		cout << arrNames[i] << " ";
	}

	for (int i = 0; i < size; i++)
	{
		if (min > arrRatings[i])
		{
			min = arrRatings[i];
			lowest = arrNames[i];
		}
		else if (max < arrRatings[i])
		{
			max = arrRatings[i];
			highest = arrNames[i];
		}
	}

	cout << "Highest rating movie is: " << highest << " rating: " << max << endl;
	cout << "Lowest rating movie is: " << lowest << " rating: " << min << endl;
	cout << "Avg rating: " << sum / size;

	delete[] arrRatings;
	delete[] arrNames;

}