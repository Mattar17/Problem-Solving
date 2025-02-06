#include <iostream>
#include <cmath>

using namespace std;



int main()
{
	long T; cin >> T;

	while (T--)
	{
		long long start, end; cin >> start >> end;

		long long mi, ma;
		mi = min(start, end);
		ma = max(start, end);
		mi--;

		long long result1 = mi * (mi + 1) / 2;
		long long result2 = ma * (ma + 1) / 2;

		cout << result2 - result1 << endl;
	}
}

