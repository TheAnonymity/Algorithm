#include <iostream>
using namespace std;

int alphabet[26];
int main()
{
	string a;
	cin >> a;
	for (auto b : a) {
		alphabet[b - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		cout << alphabet[i] << ' ';
	}
}