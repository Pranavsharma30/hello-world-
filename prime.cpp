
#include <bits/stdc++.h>
using namespace std;

bool Prime(int n)
{
	if (n <= 1)
		return false;
	for (int i = 2; i <= n / 2; i++)
		if (n % i == 0)
			return false;
	return true;
}
int main()
{
    int x;
    cout<<"enter the no"<<endl;
    cin>>x;
	cout<<"Hello";
	Prime(x) ? cout <<endl<< x << " is a prime no \n" : cout << x << " is not a prime no\n";
	return 0;
}
