#include <iostream>
using namespace std;

int arr[10001];
int front = 0;
int tail = 0;

void push(int x) {

	arr[tail++] = x;
}

int pop() {
	if (front == tail)
		return -1;

	return arr[front++];

}

int size() {
	return tail - front;
}

bool empty() {
	if (tail == front)
		return 1;
	else
		return 0;
}

int front_() {
	if (front == tail)
		return -1;
	return arr[front];
}

int back()
{

	if (front == tail)
		return -1;
	return arr[tail - 1];
}
int main()
{

	int n;
	string s;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> s;
		if (s == "push") {
			cin >> x;
			push(x);
		}
		else if (s == "pop") {
			cout << pop() << '\n';
		}

		else if (s == "size") {
			cout<<size()<<'\n';
		}
		else if (s == "empty") {
			cout << empty() << '\n';
		}
		else if (s == "front") {
			cout << front_() << '\n';

		}

		else if (s == "back") {
			cout << back() << '\n';
		}
	}
}