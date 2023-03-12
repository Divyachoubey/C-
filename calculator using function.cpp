#include<iostream>
using namespace std;
float sum(float,float);
float sub(float,float);
float mul(float,float);
float div(float,float);

int main()

{
	float a,b;
	int n;
	cout<<"enter any two numbers";
	cin>>a>>b;
	cout<<"enter the operation\n1.addition\n2.subtraction\n3.multiplication\n4.division\n";
	cin>>n;
	//cout<<calculator(a,b) <<" ";
	switch(n)
	{
		case 1:
			cout<<"addition of"<<a<<"and"<<b<<"is"<<sum(a,b);
		    //add=n1+n2;
			//cout<<add;
			break;
		case 2:
			cout<<"subtraction of"<<a<<"and"<<b<<"is";
		    //sub=n1-n2;
			cout<<sub(a,b);
			break;
		case 3:
			cout<<"multiplication of"<<a<<"and"<<b<<"is";
		    //ad=n1*n2;
			cout<<mul(a,b);
			break;
		case 4:
			cout<<"division of"<<a<<"and"<<b<<"is";
		    // dd=n1/n2;
			cout<<div(a,b);
			break;
		default:
			cout<<"error";
	}
	
}
float sum(float n1,float  n2)
{
	return (n1+n2);
}
float sub(float n1,float n2)
{
	return(n1-n2);
}
float mul(float n1,float n2)
{
	return(n1*n2);
}
float div(float n1,float n2)
{
	return(n1/n2);
}




