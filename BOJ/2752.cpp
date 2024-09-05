#include <iostream>

using namespace std;

int arr[3];
int main()
{


	int min;
	for (int i = 0; i < 3; i++) {
		cin >> arr[i];



	}

	min = arr[0];
	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {

			if (i == j)
				continue;
			if (arr[i] <= arr[j]) {
				min = arr[j];
				arr[j] = arr[i];
				arr[i] = min;
			}
		}

	}
	for (int i = 0; i < 3; i++) {
		cout << arr[i] << ' ';
	}
}