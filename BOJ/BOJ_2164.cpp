#include <iostream>
#include <queue>
using namespace std;


int main()
{

	int n;
	queue <int> Q;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		Q.push(i);
	}

	while (Q.size() != 1) {

		
		Q.pop();
		int n = Q.front();
		Q.pop();
		
		
		
		Q.push(n);
	}

	cout << Q.front();
}