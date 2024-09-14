#include <iostream>
#include <queue>
using namespace std;


int main()
{
	queue <int> q;
	
	int n;
	string s;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> s;
		if (s == "push") {
			cin >> x;
			q.push(x);
		}
		else if (s == "pop") {
			if (q.empty())
				cout << -1 << '\n';
			else {
				cout << q.front()<<'\n';
				q.pop();
			}
		}

		else if (s == "size") {
			cout << q.size() << '\n';
		}
		else if (s == "empty") {
			cout << q.empty() << '\n';
		}
		else if (s == "front") {
			if (q.empty())
				cout << -1 << '\n';
			else
				cout << q.front() << '\n';

		}

		else if (s == "back") {
			if (q.empty())
				cout << -1 << '\n';
			else
				cout << q.back() << '\n';
		}
	}
}