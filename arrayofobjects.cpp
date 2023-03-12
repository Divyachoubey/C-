#include<iostream>
using namespace std;
class Laptop
{
	int n;
	public :
		void setname(){
			cout<<"enter the number ";
			cin>>n;
		}
		
};
int main()
{
	Laptop l[3];
	for(int i=0;i<3;i++){
		l[i].setname();
	}
}
