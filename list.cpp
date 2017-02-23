#include <iostream>
using namespace std;
#include <list>
#include <iomanip>

int main()
{
	int i;
	list<int> numbers;
	list<int>:: iterator it;
	numbers.push_back(5);
	numbers.push_front(10);
	numbers.push(6);
	for(it = numbers.begin(); it!=numbers.end();it++)
		cout<<*it<<' ';
}