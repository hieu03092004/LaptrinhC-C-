#include <iostream>
using namespace std;

int a[100], n;
int b[100];
int gt(int a)
{
	if(a==2)
		return a;
	return gt(a-1)*a;
}

void Print()
{
	for(int i= 1; i<= n; i++)
		cout << a[i];
	cout << endl;
}

void dq(int i)
{
	if(i == n+1) 
	{
		Print();
		return;
	}
	for(int j=1; j <= n; j++)
		if(b[j] == 0)
		{
			b[j] = 1;
			a[i] = j;
			dq(i+1);
			b[j]=0;
		}
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	cin >> n;
	for(int j=1; j<=n; j++)
		b[j]=0;
	cout << gt(n) << endl;
	dq(1);
	return 0;
}