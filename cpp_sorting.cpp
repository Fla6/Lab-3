#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include "Sort.h"

using namespace std;


int main()
{
	ofstream Outfile("Output.txt");
	InsertionSort obj_insort;
	GnomeSort obj_gnome;
	int Arrptr[] = {5,3,4,2,1};
	int arrsize = sizeof(Arrptr) / sizeof(Arrptr[0]);
	int nc = 0;
	int nswp = 0;
	int ntime = 0;		
	if (&obj_insort || &obj_gnome)
	{
		obj_insort.Sorting(Arrptr, arrsize, nc, nswp, ntime);
		for (int i = 0; i < arrsize; i++)
		{
			Outfile << Arrptr[i] << " ";
		}
		Outfile << "NC = " << nc << " NSWP = " << nswp << " Time = " << ntime << endl;
		obj_gnome.Sorting(Arrptr, arrsize, nc, nswp, ntime);
			for (int i = 0; i < arrsize; i++)
			{
				Outfile << Arrptr[i] << " ";
			}
		Outfile << "NC = " << nc << " NSWP = " << nswp << " Time = " << ntime << endl;
	}
	Outfile.close();
	return 0;
}

