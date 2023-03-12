#include<iostream>
using namespace std;
class Room{
	public:
		int length;
		int breadth;
		int height;
	calculateArea(){
		return length*breadth;
	}	
};
int main()
{
	Room
	room1;
	room1.length=20;
	room1.breadth=30;
	cout<<"area of room ="<<room1.calculateArea()<<endl;
	return 0;
}
