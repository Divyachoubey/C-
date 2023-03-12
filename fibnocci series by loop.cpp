#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	a=0;
	b=1;
	cout<<a<<" "<<b;
	for(int i=3;i<=9;i++)
	{
		c=a+b;
		cout<<" "<<c;
		a=b;
		b=c;
	}
}
