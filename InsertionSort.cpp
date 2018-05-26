#include "stdafx.h"
#include "Sort.h"
#include <iostream>
#include <ctime>
using namespace std;


//swp = 6 comp = 12

void InsertionSort::Sorting(int* Arrtpr, int ArrLenght, int &NumComparsions, int &NumSwaps, int &Time)
{
	Time = clock();
	int key, j;
	for (int i = 0; i < ArrLenght; i++)
	{
		key = Arrtpr[i];
		j = i - 1;
		NumComparsions++;
		while (j >= 0 && Arrtpr[j] > key)
		{
			NumComparsions++;
			Arrtpr[j + 1] = Arrtpr[j];
			NumSwaps++;
			j = j - 1;
		}
		Arrtpr[j + 1] = key;
	}
	Time = clock() - Time;
}