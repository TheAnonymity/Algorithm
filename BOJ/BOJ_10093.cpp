#include <iostream>

using namespace std;

int main()
{

	long long  a, b;

	cin >> a >> b;

	if (a == b)
		cout << 0 << '\n';
	else
		cout << abs(b - a) - 1 << '\n';

	if (b > a) {
		for (long long i = a + 1; i < b; i++) {
			cout << i << ' ';
		}
	}

	else {
		for (long long i = b + 1; i < a; i++) {
			cout << i << ' ';
		}
	}




}