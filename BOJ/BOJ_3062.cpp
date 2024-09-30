#include <iostream>
#include <string>
using namespace std;

int main()
{

	int t;
	cin >> t;
	
	int num;
	int sum = 0;


	for (int i = 0; i < t; i++) {
		string a, c = "";
		string charm = "YES";
		cin >> a;

		for (int l= a.length() - 1; l >= 0; l--) {
			c += a[l];
		}


		num = stoi(c);
		sum =num + stoi(a);

		string d = to_string(sum);
		int j = d.size() - 1;
		
		for (int k = 0; k < d.size(); k++) {

			if (d[k] != d[j]) {

				charm = "NO";
				break;

			}




			j--;
		}

		cout << charm << endl;
	}



}