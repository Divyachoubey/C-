#include<iostream>
using namespace std;
void fillarray(int a[],int n);
void displayarray(int a[],int n);
int findMissingUtil(int arr1[], int arr2[], int N)
{
	if (N == 1)
		return arr1[0];
	if (arr1[0] != arr2[0])
		return arr1[0];
	int lo = 0, hi = N - 1;
	while (lo < hi)
	{
		int mid = (lo + hi) / 2;

		if (arr1[mid] == arr2[mid])
			lo = mid;
		else
			hi = mid;

		if (lo == hi - 1)
			break;
	}

	return arr1[hi];
}

void findMissing(int arr1[], int arr2[], int M, int N)
{
	if (N == M-1)
		cout << "\nMissing Element is "
		<< findMissingUtil(arr1, arr2, M) << endl;
	else if (M == N-1)
		cout << "\nMissing Element is "
		<< findMissingUtil(arr2, arr1, N) << endl;
	else
		cout << "\n\nInvalid Input";
}

void fillarray(int a[],int n){
	cout<<"\nEnter elements: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void displayarray(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

int main(){
	int M,N;
	cout<<"Enter size of both arrays: "; cin>>M>>N;
	int arr1[M];
	int arr2[N];
    fillarray(arr1,M);
    cout<<"\nFirst array is:-\n";
    displayarray(arr1,M);
    fillarray(arr2,N);
    cout<<"\nSecond array is:-\n";
    displayarray(arr2,N);
	findMissing(arr1, arr2, M, N);

	return 0;
}

