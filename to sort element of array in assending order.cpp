Q#13//write a program to sort element of array in assending order?
#include <iostream>
 using namespace std;
int main ()
{
	int arr[5];
	cout<< " enter five no in  array "<<endl;
	for( int i=0 ;i<5;i++)
	{
		cout<<" value"<<i+1<<":";
		cin>> arr[i];
	}
	cout<<endl;
	cout<<"\n total  number in array :"<<endl;
	for( int i=0; i<5 ;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<"the sorted array in assending  order is :";
	for( int i=0; i<5;i++)
	{
		for( int j=i+1;i<5;i++)
	{
		if( arr[i]>arr[j])
		{
			int temp=0;
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			
		}
	}
	cout<<arr[i]<<"\t";
}
return 0;
}
