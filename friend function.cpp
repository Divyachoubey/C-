#include<iostream>
using namespace std;
class A{
	public:
		int a,b;
		friend int sum(int a);
};	
  int sum(int a){
	cout<<"a is"<<a;
}
int main(){
	A c;
	c.a=2;
	c.b=3;
	sum(c.a);
}
