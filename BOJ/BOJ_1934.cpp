#include <iostream>
using namespace std;

int main()
{
	int n;

	int a, b;
	int m;
	int min;
	cin >> n;

	

	for (int i = 0; i < n; i++) {

		cin >> a >> b;
		
		if (a >= b)
			m = b;
		else
			m = a;
		for (int i = 1; i <= m; i++) {
			
			if (a % i == 0 && b % i == 0) {
				
				min = i * (a / i) * (b / i);
			}
			
		}

		cout << min << '\n';
	}


}