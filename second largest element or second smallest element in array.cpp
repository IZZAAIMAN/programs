Q#15+Q#16//write a program to find the second smallest and second largest element in array ?
#include<iostream>
using namespace std;
int main()
{
	int n,temp;
	cout<<"enter the size of array :";
	cin>>n;
	int arr[40];
	cout<<"enter the elements :";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		
	}
	cout<<"   second largest element  :"<< arr[n-2]<<"\n;"
	cout <<"  smallest element :"<<arr[0]<<\n;
}
}
