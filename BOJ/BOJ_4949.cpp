#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	string st;
	

	string b;

	while (true) {
		getline(cin, st);

		if (st == ".")
			break;
		b = "yes";
		stack <char> s;
		for (auto a : st) {

			if ( a == '(' || a == '[')
				s.push(a);


			else if (a == ')' || a == ']' ) {

				if (s.empty()) {
					b = "no";
					break;

				}
				if (a == ')' && s.top() == '(') {
					
					s.pop();
				}
				


				else if (a == ']' && s.top() == '[') {
					s.pop();
				
				}


				else {
					b = "no";
					break;
				}


			}


		}

		if (!s.empty())
			b = "no";
		if(st!=".")
			cout<<b<<'\n';
	}

}