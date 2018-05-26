#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include "Sort.h"

using namespace std;

int main()
{
	srand(time(NULL));
	ofstream Outfile("Output.txt");
	InsertionSort obj_insort;
//	GnomeSort obj_gnome;
//	int size = 1;
//	int size = 2;
//	int size = 3;
//	int size = 4;
//	int size = 5;
//	int size = 10;
//	int size = 15;
//	int size = 20;
//	int size = 25;
	int size = 30;
//	int size = 50;
//	int size = 75;
//	int size = 100;
//	int size = 250;
//	int size = 500;
	int *Arrptr = new int[size];
	for (int i = 0; i <= 100; i++)
	{
		int nc = 0;
		int nswp = 0;
		int ntime = 0;
		for (int j = 0; j < size; j++)
		{
			Arrptr[j] = 1 + rand() % 1000000;
		}
		obj_insort.Sorting(Arrptr, size, nc, nswp, ntime);
//		obj_gnome.Sorting(Arrptr, size, nc, nswp, ntime);
		for (int j = 0; j < size; j++)
		{
			Outfile << Arrptr[j] << " ";
		}
		Outfile << "NC = " << nc << " NSWP = " << nswp << " Time = " << ntime << endl;
	}
	Outfile.close();
	delete[] Arrptr;
	return 0;
}

