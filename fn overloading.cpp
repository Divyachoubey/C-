#include<iostream>
using namespace std;
void print(int i)
{
	cout<<i<<"is interger value";
}
void print(double f)
{
	cout<<f<<"is flaot value";
}
void print(char const *c)
{
	cout<<c<<"is char value";
}
int main()
{
	print(10);
	print(10.10);
	print("ten");
	return 0;
}
