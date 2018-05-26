#include "stdafx.h"
#include "Sort.h"
#include <iostream>
#include <ctime>
using namespace std;



void GnomeSort::Sorting(int* Arrtpr, int ArrLenght, int &NumComparsions, int &NumSwaps, int &Time)
{
	Time = clock();
	int i = 1;
	while (i < ArrLenght)
	{
		NumComparsions++;
		if (i==0 || Arrtpr[i-1] <= Arrtpr[i])
		{
			++i;
		}
		else
		{
			swap(Arrtpr[i], Arrtpr[i - 1]);
			--i;
			NumSwaps++;
		}
	}
	Time = clock() - Time;
}