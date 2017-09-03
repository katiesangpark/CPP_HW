// Assignments1Q1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

//Write a C++ program to find the sum and average of one dimensional integer array.
//bool safe_car(double tire_pressures[4]);
int main()
{

	
	/*int array[5] = { 3,4,5,6,7 };

	int sum = 0;
		for (int i = 0; i < 5; i++) {
		sum = array[i] + sum;
	}
		double ave = sum / 5;

	printf("%d \n", sum);
	std::cout  << "average: " << ave << std::endl ;
    return 0;*/

	const int MAX_ITEMS = 8;
	float x[MAX_ITEMS];
	float average;
	float sum;

	std::cout << "Enter " << MAX_ITEMS << " numbers: ";
	for (int i = 0; i < MAX_ITEMS; i++)
		std::cin >> x[i];

	sum = 0.0;
	for (int i = 0; i < MAX_ITEMS; i++)
		sum +=x[i];

	average = sum / MAX_ITEMS;

	std::cout << "sum: " << sum << std::endl;
	std::cout << "average: " << average << std::endl;


	return 0;
}

