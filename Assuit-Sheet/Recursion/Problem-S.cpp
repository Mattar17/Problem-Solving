
#include <iostream>
#include <iomanip>
 
using namespace std;
 
 
double arrAvg(long arr[], int size,int n, double sum = 0)
{
	if (size <= 0)
		return sum / n;
 
	return arrAvg(arr, size - 1,n, sum+arr[size-1]);
}
 
int main()
{
	int n; cin >> n;
	long* arr = new long[n];
 
	for (int i = 0;i < n;i++)
		cin >> arr[i];
 
	cout << std::fixed <<std::setprecision(6)<<arrAvg(arr, n,n);
	delete[] arr;
	
}
