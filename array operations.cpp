#include<iostream>
#include<conio.h>
using namespace std;

void traversal(int A[],int N);
void insertion(int A[],int &N,int Pos,int ITEM);
int lsearch(int A[],int N,int item);
void Delete(int A[],int &N,int Pos,int ITEM );

int main(){
cout<<"Coded by Aindri Singh Bhadoriya!!\n";
int a[10],n,pos,item,choice,delitem;
char ch;
cout<<"\nEnter size:";
cin>>n;
cout<<"\nEnter Array:";
for(int i=0;i<n;i++)
cin>>a[i];

do
{

cout<<"\n \t\t Menu Driven Program";
cout<<"\n1. Traversal \n2. Insertion \n3. Deletion \n4. Searching";
cout<<"\n\nEnter your choice:";
cin>>choice;
switch(choice)
{
        case 1:
		cout<<"\nThe array is :"; 
		 traversal(a,n);
                break;
        case 2: //Insertion
                cout<<"\n Enter Position: ";
                cin>>pos;
                cout<<"\nEnter Element: ";
                cin>>item;
                insertion(a,n,pos,item);
                cout<<"the array is : "; 
                 traversal(a,n);
                break;
        case 3: cout<<"\nEnter Element to be deleted: ";
                cin>>delitem;
                pos=lsearch(a,n,delitem);
                if(pos==-1)
                {
                cout<<"\nElement not found";
                }
                Delete(a,n,pos,delitem);
                cout<<"\nThe array is :"; 
                 traversal(a,n);
                break;
        case 4: cout<<"\nEnter the element to be searched: ";
                cin>>item;
                pos=lsearch(a,n,item);
                cout<<"\nElement found at index: "<<pos;
                cout<<"\nElement found at position: "<<pos+1;
                
				cout<<"\nThe array is :"; 
				traversal(a,n);
                 
                break;
        default:cout<<"\nwrong choice";
        }
        cout<<"\n\nDo you want to continue? ";
        cout<<"(Press y/n)";
        cin>>ch;
        }while(ch=='y');
        return 0;
        cout<<"Thank you for your time!";
}

void traversal(int b[],int N)
{
for(int i=0;i<N;i++)
cout<<b[i]<<" ";
}
// Insertion of element into a linear array with functions in c++
void insertion(int A[],int &N,int Pos,int ITEM)
{
for(int i=N;i>=Pos;i--)
A[i+1]=A[i];
A[Pos]=ITEM;
N=N+1;
}
// Deletion of element from linear array with functions in c++
void Delete(int A[],int &N,int Pos,int ITEM)
{
for(int i=Pos;i<N;i++)
A[i]=A[i+1];
N=N-1;
cout<<ITEM<<" is deleted from the array.";
}

int lsearch(int A[],int N,int ITEM)
{
int index=-1;
for(int i=0;i<N;i++)
{
if(A[i]==ITEM)
{
index=i;
}
}
return index;
}
