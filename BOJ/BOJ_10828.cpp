#include <iostream>
using namespace std;

int dat[10001];
int pos = 0;

void push(int x)
{
	dat[pos++] = x;
}

int pop() {

	if (pos == 0)
		return -1;
	return dat[--pos];

}
int top() {
	if (pos == 0)
		return -1;
	return dat[pos - 1];
}

int size() {
	return pos;
}

bool empty() {

	if (pos == 0)
		return 1;
	else
		return 0;
}
int main()
{
	int n;
	cin >> n;

	string a;
	int num;
	for (int i = 0; i < n; i++)
	{
		cin >> a;

		if (a == "push") {
			cin >> num;
			push(num);
		}

		else if (a == "top") {
			cout<<top()<<'\n';
		}

		else if (a == "size") {
			cout << size() << '\n';
		}


		else if (a == "pop") {
			cout << pop() << '\n';
		}

		else if (a == "empty") {
			cout << empty() << '\n';
		}
	}


}