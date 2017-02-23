#include <iostream>
using namespace std;

int main()
{
	long long a,b,k,s=0;
	cin >> k >> a >> b;
	if(a%k==0 && b%k==0)
	{
		s = a/k + b/k;
	}
	else if(a<k && b <k)
	{
		cout << -1 << "\n";	
		return 0;
	}
	else if(a>b)
	{
		s=a%k;
		if(s!=0 && b < k)
		{
			cout << -1 << "\n";
			return 0;
		}
		s=a/k + b/k;
	}
	else if(a<b)
	{
		s=b%k;
		if(s!=0 && a < k)
		{
			cout << -1 << "\n";
			return 0;
		}
		s=a/k + b/k;
	}
	else
	{
		s=a/k + b/k;
	}
	cout << s <<"\n";
	return 0;
}