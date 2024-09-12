#include <iostream>
#include <stack> 
using namespace std;

int arr[100001];
int main()
{

	int k;
	int num;
	int sum = 0;
	cin >> k;

	stack <int> s;

	for (int i = 0; i < k; i++) {

		cin >> num;
		if (num == 0) {
			s.pop();
			continue;
		}

		s.push(num);



	}


	while (!s.empty()) {

		sum += s.top();
		s.pop();
	}

	cout << sum;
}