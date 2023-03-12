#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int number;
	cout<<"Enter a number: ";  cin>>number; cout<<endl;
	int num=number;
	int n=0;
	while(number!=0){
		number/=10;
		n++;
	}
	int temp=num*num;
	cout<<"Square is: "<<temp;
	int p=pow(10,n);
	temp=temp%p;
	cout<<endl;
	cout<<endl;
	if(temp==num) cout<<num<<" is a curious number ";
	else         cout<<num<<" is not a curious number ";
}
