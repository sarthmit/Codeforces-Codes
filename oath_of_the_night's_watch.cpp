#include <iostream>
using namespace std;
#include <algorithm>

int main()
{
	long long n;
	long long arr[100002];
	int i;
	long long s=2;
	cin >> n;
	for(i=0;i<n;++i)
	{
		cin >> arr[i];
	}
	if(n<=2)
	{
		cout << 0 <<"\n";
		return 0;
	}
	sort(arr,arr+n);
	for(i=1;i<n;++i)
	{
		if(arr[i]==arr[0])++s;
		else break;
	}
	if(i==n)
	{
		cout << 0 <<"\n";
		return 0;
	}
	else
	{
		for(i=n-2;i>=0;--i)
		{
			if(arr[i]==arr[n-1])++s;
		}
	}
	cout << n-s<<"\n";
	return 0;
}