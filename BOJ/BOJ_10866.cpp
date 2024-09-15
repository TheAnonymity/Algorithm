#include <iostream>
using namespace std;

const int MX = 10001;
int dat[2 * MX + 1];
int head = MX;
int tail = MX;
bool empty() {
	if (tail == head)
		return 1;
	else
		return 0;

}

void push_front(int x) {

	dat[--head] = x;
}

void push_back(int x) {
	dat[tail++] = x;
}
int pop_front() {

	if (empty())
		return -1;
	return dat[head++];
}
int pop_back() {
	if (empty())
		return -1;
	return dat[--tail];
}

int size() {
	return tail - head;
}


int front() {
	if (empty())
		return -1;

	return dat[head];
}

int back() {
	if (empty())
		return -1;
	return dat[tail - 1];
}
int main()
{
	int n;
	string s;
	int x;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> s;

		if (s == "push_back") {
			cin >> x;

			push_back(x);
		}

		else if (s == "push_front") {
			cin >> x;

			push_front(x);
		}
		else if (s == "pop_front") {
			cout << pop_front() << '\n';
		}

		else if(s=="pop_back") {
			cout << pop_back() << '\n';
		}
		else if (s == "size") {
			cout << size() << '\n';
		}
		else if (s == "empty") {
			cout << empty() << '\n';
		}
		else if (s == "front") {
			cout << front() << '\n';
		}
		else if (s == "back") {
			cout << back() << '\n';
		}
	}
}