#include <iostream>
using namespace std;

/*void makeList(list1, long long n)
{
	if(n==1 || n==0)
	{
		return;
	}
	else
	{
		if(a>1)a = n/2;
		if(b>1)b = n%2;
		list1.pushfront(a);
		list1.pushback(b);
		makeList(list1., a,b);
	}
}

int main()
{
	list<long long> list1;
	cin >> n >> l >> r;
	list1.push_front(n);
	makeList(list1,n);
}*/

long long k, l, r,s;
int a1,a2;

void something(long long n)
{
	if(k>r) return;
	if(n/2==0 || n/2==1)
	{
		a1=n/2;
		a2=n%2;
		if(k>=l && k<=r)
		{
			if(a1)++s;
		}
		++k;
		if(k>=l && k<=r)
		{
			if(a2)++s;
		}
		++k;
		if(k>=l && k<=r)
		{
			if(a1)++s;
		}
		++k;
		return;
	}
	else
	{
		something(n/2);
		if(k>=l && k<=r)
		{
			s+=n%2;
		}
		++k;
		if(k>=l && k<=r)
		{
			s+=a1;
		}
		++k;
		if(k>=l && k<=r)
		{
			s+=a2;
		}
		++k;
		if(k>=l && k<=r)
		{
			s+=a1;
		}
		++k;
		if(k>r)return;
	}
}

int main()
{
	k=1;
	long long n,i;
	cin >> n >> l >> r;
	something(n);
	cout << s <<"\n";
}