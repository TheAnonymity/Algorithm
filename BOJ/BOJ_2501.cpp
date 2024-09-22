#include <iostream>
using namespace std;
int arr[10001];
int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	int j = 1;
	cin >> n >> k;


	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			arr[j] = i;
			j++;
		}
	}

	cout << arr[k] << '\n';
}