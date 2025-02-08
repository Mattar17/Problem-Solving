#include <iostream>

using namespace std;



int main()
{
	long long seatNumber; cin >> seatNumber;

	long long row, column;

	row = seatNumber / 4;
	
	if (row % 2 == 0)
	{
		column = seatNumber % 4;
	}

	else if (row % 2 != 0)
	{
		column = 3 - (seatNumber % 4);
	}

	cout << row << " " << column;
}

