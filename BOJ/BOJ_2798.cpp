#include <iostream>
using namespace std;


int arr[101];
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	int sum = 0;
	int totalsum=0;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];

		
	}

	for (int i = 0; i < n; i++) {
		for (int a = i + 1; a < n; a++) {
			
			for (int b = 0; b < n; b++) {
				sum = 0;
				sum += arr[i];
				if (b != i && b != a) sum += arr[a] + arr[b];

				if ((m>=sum) &&(abs(sum - m) <= abs(totalsum - m)))
					totalsum = sum;
			}
		}
	}

	cout<<totalsum;
}