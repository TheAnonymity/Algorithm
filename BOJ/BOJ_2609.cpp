#include <iostream>
using namespace std;

int main()
{

	int a, b;
	cin >> a >> b;
	int min;
	if (a >= b)
		min = a;
	else
		min = b;

	int max_i;
	for (int i = 1; i <= min; i++) {
		if (a % i == 0 && b % i == 0)
			max_i = i;
	}

	int min_i;
	
	for (int i = 1; i <= min; i++) {
		if (a % i == 0 && b % i == 0)
			min_i = i * (a / i) * (b / i);
	}

	cout << max_i << '\n';
	cout << min_i;
}