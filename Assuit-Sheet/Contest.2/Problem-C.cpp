#include <iostream>

using namespace std;



int main()
{
	int n,k; cin >> n >> k;
	int* arr = new int[n];
	int counter = 1;
	int min = INT_MAX;

	for (int i = 0;i < n;i++)
	{
		cin >> arr[i];

		if (arr[i] < min)
			min = arr[i];

		if (counter == k || i==n-1)
		{
			cout << min << " ";
			counter = 1;
			min = INT_MAX;
		}

		else
			counter++;
	}
}

