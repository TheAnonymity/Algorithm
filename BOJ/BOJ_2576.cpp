#include <iostream>
using namespace std;

int main()
{
	int a;
	int min = 100;
	int sum = 0; 
	for (int i = 0; i < 7; i++) {

		cin >> a;

		if (a % 2 != 0) {
			if (a <= min)
				min = a;

			sum += a;
		}

	}


	if (sum == 0)
		cout << -1;
	else {
		cout << sum << '\n';
		cout << min;
	}
}