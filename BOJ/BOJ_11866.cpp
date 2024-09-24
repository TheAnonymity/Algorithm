#include <iostream>
#include <queue>
using namespace std;

int main()
{


	int n, k;
	queue <int> q;

	cin >> n >> k;


	for (int i = 1; i <= n; i++) {


		q.push(i);


	}


	int i = 1;
	cout << "<";
	while (q.empty() != 1) {


		if (i < k) {


			q.push(q.front());
			q.pop();
			i++;

		}

		else if (i == k) {

			cout << q.front();

			q.pop();
			if (q.empty() != 1) {
				cout << ", ";
			}
			i = 1;
		}


	}

	cout << ">";
}