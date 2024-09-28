#include <iostream>
using namespace std;

int arr[5];
int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);

	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	int max = arr[0];
	int tmp;
	for (int i = 0; i < 5; i++) {

		for (int j = i + 1; j < 5; j++) {

			if (arr[i] > arr[j]) {
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}

		}
	}


	cout << sum / 5 << '\n';
	cout << arr[2];
}