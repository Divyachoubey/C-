#include<iostream>
using namespace std;

int main() 
{
	int n; 
	
	cout<<"Enter Number: ";
	cin>>n;
    int temp=n;
	while(temp>1)
	{
		temp = temp-2;
	}

	if(temp==0)
		cout<<"\n"<<n<<" is an even Number";
	else
		cout<<"\n"<<n<<" is an odd Number";

	return 0;
}
