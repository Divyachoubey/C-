#include<iostream>
#include<cmath>
using namespace std;
void factor(int);
int main()
{
	int n;
	cout<<"enter a number\n";
	cin>>n;
	factor(n);
	//cout<<"the factors are:"<<factor(n);
}
void factor(int n)
{
	int sq=sqrt(n);
	int sum=0;
	for(int i=2;i<=sq;i++)
	{
		if(n%i==0)
		{
			cout<<i<<"is a factor\n";
			sum=sum+i;
			if(n/i!=i)
			{
				cout<<i<<"is a factor\n";
				sum=sum+(n/i);
			}
		}
//		else
//			{
//				cout<<i<<"is a factor\n";
//			sum=sum+i;
//			}
//		
	}
	cout<<sum;
}
