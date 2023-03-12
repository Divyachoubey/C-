#include<iostream>
using namespace std;

int main()
{
	int n,R,s;
	cout<<"enter a no";
	cin>>n;
	int temp=n;
	int sum=0;
	do
	{
		
	
	while(temp>0)
{
	R=temp%10;
	 s=R*R;
	sum=sum +s;
	temp=temp/10;
}
if(sum==1){

	cout<<n<<"is a happy number";
}
else
{

temp=sum;
}

//else{
////	if(sum==1)
//{
//	cout<<n<<"is a happy number";
//}

{
	cout<<n<<"is not a happy number";
}
}while(sum==1);
}

