#include <iostream>
using namespace std;
#include <string>

int main()
{
	int n,i,home=0,x=0,s=0,k=0;
	cin >> n;
	char a,b,c;
	string str;
	cin >> a >> b >> c;
	a=a-96;
	b=b-96;
	c=c-96;
	home = a*a + b*b + c*c;
	for(i=0;i<n;++i)
	{
		cin >> a >> b >> c;
		a=a-96;
		b=b-96;
		c=c-96;
		x = a*a + b*b + c*c;
		if(x==home)++s;
		else ++k;
		cin >> str;
	}
	if(s==k) cout << "home\n";
	else cout << "contest\n";
}