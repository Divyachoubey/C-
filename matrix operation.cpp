#include <iostream>
using namespace std;
/*———————————————–
OPERATIONS ON MATRIX
 
1.Multiplication
2.addition
3.subtraction
4.Transopse

———————————————– */

class Matrix
{
int a[10][10],b[10][10],c[10][10],r,q,r1,q1;
public : void mat1() ;
int matp1();
void mat2();
int matp2();
int add();
int sub();
int mul();
int tran();

};

void Matrix :: mat1() //accepting matrices A:
{
int i,j;
cout<<"Enter the size of row and columns: ";
cin>>r>>q;
cout<<"Enter actual element of matrix:\n";
for (i=0;i<r;i++)
{
for(j=0;j<q;j++)
{
cin>>a[i][j];
}

}

}

int Matrix :: matp1() // printing matrices A:
{
int i,j;
cout<<"The matrix a is :"<<endl;
for (i=0;i<r;i++)
{
for(j=0;j<q;j++)
{
	cout<<a[i][j]<<"\t";
}
cout<<"\n";
}
}

void Matrix :: mat2() // accepting matrices B:
{
int i,j;
cout<<"Enter the size of row and columns: ";
cin>>r1>>q1;

cout<<"Enter actual element of matrix"<<endl;
for (i=0;i<r1;i++)
{
for(j=0;j<q1;j++)
{
cin>>b[i][j];
}
}
}

int Matrix :: matp2() // printing matrices B:
{
int i,j;
cout<<"The matrix a is :"<<endl;
for (i=0;i<r1;i++)
{
for(j=0;j<q1;j++)
{
		cout<<a[i][j]<<"\t";
}
cout<<"\n";
}
}

int Matrix :: add()
{
int i,j;
cout<<"Addition of matrix is:"<<endl;
if(r==r1 && q==q1)
for (i=0;i<r;i++)
{
for(j=0;j<q;j++)
{
	cout<<a[i][j]+b[i][j]<<"\t";
}
cout<<"\n";
}
else
{
cout<<"MATRIX ERROR"<<endl;
}

}

int Matrix :: sub()
{
int i,j;
cout<<"Subtraction of matrix is"<<endl;
if(r==r1 && q==q1)
for (i=0;i<r;i++)
{
	for(j=0;j<q;j++)
{
		cout<<a[i][j]-b[i][j]<<"\t";
}
cout<<"\n";
}

else
{
cout<<"MATRIX ERROR"<<endl;
}
}

int Matrix :: mul()
{
	int i,j,k,sum;
cout<<"The multiplication of matrix is:"<<endl;
if(r==q)
for(i=0;i<r;i++)
{
for(j=0;j<q1;j++)
{
sum=0;
for(k=0;k<r1;k++)
{
sum=sum+a[i][k]*b[k][j];
}
cout<<sum<<"\n";

}
cout<<"\n";
}
}

int Matrix :: tran()
{
int i,j,temp;
cout<<"The transpose of matrix is:"<<endl;
for(i=0;i<r;i++)
{
for(j=0;j<q;j++)
{
temp=a[i][j];
a[i][j]=a[j][i];
a[j][i]=temp;
}
}
for(i=0;i<r;i++)
{
for(j=0;j<q;j++)
{
	cout<<a[j][i]<<"\t";
}
cout<<"\n";
}
}

int main()
{
Matrix m;
int choice,ch;
m.mat1();
m.mat2();
do
{
cout<<"MATRIX OPERATIONS"<<endl;
cout<<"\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Transpose of Matrix\n5.Exit\nEnter your choice: ";
cin>>choice;
switch (choice)
{
case 1:
m.matp1();
m.matp2();
m.add();
break;

case 2:
m.matp1();
m.matp2();
m.sub();
break;

case 3:
m.matp1();
m.matp2();
m.mul();
break;

case 4:
m.matp1();
m.tran();
break;

default : break;

}
cout<<"Do you want to continue press 1:- "<<endl;
cin>>ch;
}
while (ch==1);

return 0;
}
