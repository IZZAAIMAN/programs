Q#2//write a program  to find the maximum the differece between two element  in array?
#include<iostream>
using namespace std;
int main ()
{
	int arr[5];int large;int i;int small;
	{
		for( int i=0;i<5;i++)
		{
			cout<<"enter values "<<i+1<<":";
			cin>>arr[i];
		}
		cout<<"values are :";
		for (int i=0;i<5;i++)
		{
			cout<<arr[i]<<"\t";
		}
		large=small=arr[0];
		for(i=0;i<5;i++)
		{
			if (arr[i>large])
			large=arr[i];
			if(arr[i]<small)
			small=arr[i];
		}
		cout<<endl<<" the largest difference between "<<large-small;
		cout<<"and"<<small<<"is"<<large<<endl;
		return 0;
	}
}
