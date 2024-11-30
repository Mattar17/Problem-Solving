#include <iostream>

using namespace std;

int counter = 0;
void Func(int n)
{
	counter++;

	if (n==1)
		return;
	
	if (n % 2 == 0)
		Func(n / 2);
	else
		Func(3 * n + 1);

}


int main()
{
	int n; cin >> n;
	
	Func(n);
	cout << counter;
	
}

