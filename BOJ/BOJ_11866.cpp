#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	// K<=n k번째 사람을 제거 큐
	// 1,2,3,4,5,6,7
	// q.pop() q.pop() q.pop() q.pop()
	// 4,5,6,7
	// pop() 
	// push()
	//3

	int n, k;
	queue <int> q;
	queue <int> q2;
	cin >> n >> k;

	int num;
	for (int i = 1; i <= n; i++) {


			q.push(i);
			

	}


	int i = 1;
	cout << "<";
	while (q.empty()!=1) {
		
	
		if (i %k!=0) {
		
			
			q.push(q.front());
			q.pop();
			i++;
			
		}

		else if (i==3) {
			
			cout << q.front();
		
			q.pop();
		
			if (q.empty() != 1)
				cout << ", ";
			i = 1;


		}
		
		
	}

	cout << ">";
}