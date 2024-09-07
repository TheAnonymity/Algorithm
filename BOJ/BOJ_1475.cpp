#include <iostream>
using namespace std;

int arr[10];
int main()
{

	string n;
	int max = 0;
	cin >> n;

	int set = 0;
	for (auto a : n) {
		

		if (a == '6' && arr[a - '0'] <= arr['9' - '0']) {
			arr[a - '0']++;
			continue;
		}
		else if (a == '6' && arr[a - '0'] > arr['9' - '0']) {
			arr['9' - '0']++;
			continue;
		}

		if (a == '9' && arr[a - '0'] <= arr['6' - '0']) {
			arr[a - '0']++;
			continue;
		}
		else if (a == '9' && arr[a - '0'] > arr['6' - '0']) {
			arr['6' - '0']++;
			continue;
		}

		arr[a - '0']++;
	}

	for (int i = 0; i < 10; i++) {


		if (arr[i] >= max)
			max = arr[i];
		
	}

	cout << max;
}