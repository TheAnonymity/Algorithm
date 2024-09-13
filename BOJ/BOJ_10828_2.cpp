#include <iostream>
#include <stack>
using namespace std;

int main()
{

	string a;

	int n;
	int num;
	cin >> n;
	
	stack <int> s;
	for (int i = 0; i < n; i++) {
		cin >> a;

		if (a == "push") {
			cin >> num;
			s.push(num);
		}

		else if (a == "top") {
			cout << s.top() << '\n';
		}

		else if (a == "size") {
			cout << s.size()<<'\n';

		}

		else if (a == "empty") {
			cout << s.empty()<<'\n';
		}

		else if (a == "pop") {
			if (s.size() == 0)
				cout << -1 << '\n';
			else {
				cout << s.top()<<'\n';
				s.pop();
			}
		}

	}
}