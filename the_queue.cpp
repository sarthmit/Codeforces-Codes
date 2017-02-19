#include <iostream>
using namespace std;
#include <limits.h>

typedef long long l;

void answer(l* arr, l n, l ts, l tf, l t)
{
	l wait, i, p,s,state=ts;
	s = LLONG_MAX;
	for(i=0;i<n;++i)
	{
		if(state+t>tf) break;
		if(arr[i]==state)
		{
			wait=0;
			state+=t;
		}
		else if(arr[i]>state)
		{
			cout << state;
			return;
		}
		else
		{
			wait = state-arr[i];
			state+=t;
		}
		if(wait<s)
		{
			s=wait;
			p = i;
		}
	}
	if(state+t<=tf)cout<<state;
	else cout << arr[p]-1
;}
int main()
{
	l ts,tf,t,n,i;
	cin >> ts >>tf>>t;
	cin >> n;
	l arr[100002];
	for(i=0;i<n;++i)
	{
		cin >> arr[i];
	}
	answer(arr,n,ts,tf,t);
}