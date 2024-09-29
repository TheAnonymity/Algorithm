#include <iostream>
using namespace std;

int main()
{
	int n, m;

	cin >> n >> m;

	int pay = n * 100;
	if (pay >= m)
		cout << "Yes";
	else
		cout << "No";
}