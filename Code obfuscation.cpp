#include <iostream>
using namespace std;
#include <string>

int main()
{
	int i;
	char k;
	string str;
	cin >> str;
	k='a';
	for(i=0;i<str.length();++i)
	{
		if(str[i]>k)
		{
			cout << "NO\n";
			return 0;
		}
		if(str[i]==k)
		{
			k++;
		}
	}
	cout << "YES\n";
}