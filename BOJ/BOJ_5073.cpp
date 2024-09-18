#include <iostream>
#include <algorithm>
using namespace std;

int main() {


	int a, b, c;



	int mx;
	while (true) {

		cin >> a >> b >> c;

		if (a == 0 && b == 0 && c == 0)
			break;
		int arr[3] = { a,b,c };
		sort(arr, arr + 3);




		if (a == b && b == c && c == a)
			cout << "Equilateral" << '\n';

		else if ((arr[2] < arr[0] + arr[1]) &&(a == b || b == c || c == a))
			cout << "Isosceles" << '\n';
		else if (arr[2] < arr[0] + arr[1])
			cout << "Scalene" << '\n'; 

			
		else
			cout << "Invalid" << '\n';
		





	}

}