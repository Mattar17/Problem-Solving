#include <iostream>

using namespace std;


bool Func(int arr[],int n,int i=0)
{
	

	if (n<0 || i>=n)
		return true;
	
	if (arr[i] != arr[n - 1])
		return false;
	
	return Func(arr, n - 1, i + 1);

}


int main()
{
	int n; cin >> n;
	int* arr = new int[n];

	for (int i = 0;i < n;i++)
		cin >> arr[i];

	if (Func(arr, n))
		cout << "YES";

	else
		cout << "NO";

	
}

