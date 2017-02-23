#include <iostream>
using namespace std;
#include <algorithm>

int equals(long long * arr, long long * arr1, long long n)
{
	sort(arr,arr+n);
	sort(arr1,arr1+n);
	long long i;
	for(i=0;i<n;++i)
	{
		if(arr[i]!=arr1[i]) return 0;
	}
	return 1;
}
int main()
{
	long long n,k,x,i,j;
	cin >> n >> k >>x;
	long long arr[100002];
	long long arr1[100002];
	for(i=0;i<n;++i)
	{
		cin >> arr[i];
		arr1[i]=arr[i];
	}
	for(j=1;j<=k;++j)
	{
		sort(arr1,arr1+n);
		for(i=0;i<n;++i)
		{
			if(i%2==0)arr1[i]=arr[i]^x;
			else arr1[i]=arr[i];
		}
		if(equals(arr,arr1,n))
		{
			break;
		}
	}
	for(i=0;i<=k;++i)
	{
		sort(arr1,arr1+n);
		if(i==k%(j))
		{
			cout << arr[n-1] << " " << arr[0] <<"\n";
			break;
		}
		for(i=0;i<n;++i)
		{
			if(i%2==0)arr1[i]=arr[i]^x;
			else arr1[i]=arr[i];
		}
	}
	cout << j;
	return 0;
}