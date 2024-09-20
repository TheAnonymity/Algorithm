#include <iostream>
using namespace std;

int main()
{

	int n;
	int sum = 2;
	cin >> n;
	int total;

	//ex 2)
	// 0. 2
	// 1. 3 (2+2^0)
	// 2. 5 sum+(sum+2)
	// 3. 9 (sum+4)
	// 4. 17 sum+8
	// 5. 33
	int j = 1;
	for (int i = 1; i <= n; i++) {
	
		sum +=j;
		

		j *= 2;
	}
	cout << sum*sum;
}