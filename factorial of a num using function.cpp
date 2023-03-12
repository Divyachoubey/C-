#include<iostream>
using namespace std;
int fact(int a)
{
	int f=1;
    for(int i=2;i<=a;i++)
    {
    	f=f*i;
	}
	return f;
}
int main()
{
	int n;
	cout<<"enter any number:\n";
	cin>>n;
	cout<<"the factorial of "<<n<<" is:"<<fact(n);
	//scout<<fact(n);
	return 0;
}
