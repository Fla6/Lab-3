
class Sort
{
public:
	virtual void Sorting(int* Arrptr, int ArrLenght, int &NumComparsions, int & NumSwaps, int & Time) = 0;
};

class InsertionSort: public Sort 
{
public:
	void Sorting(int* Arrptr, int ArrLenght, int &NumComparsions, int & NumSwaps, int & Time);
};

class GnomeSort : public Sort
{
public:
	void Sorting(int* Arrptr, int ArrLenght, int &NumComparsions, int & NumSwaps, int & Time);
};