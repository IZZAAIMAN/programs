//write a program to merge two un sorted  array of different lengths?
#include<iostream>
using namespace std;
int main()
{
	int arr1[5],arr2[7],i,merge[5];
	cout<<"enter elements of forst array "<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"values "<<i+1<<":"<<"\t";
		cin>>arr1[i];
	}
	cout<<"enter element of second array "<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"values "<<i+1<<":"<<"\t";
		cin>>arr2[i];
	}
	for(i=0;i<5;i++)
	{
		merge[i]=arr1[i];
	}
	for(i=0;i<5;i++)
	{
		merge[i+1]=arr2[i];
	}
	cout<<"meraged array ";
	for(i=0;i<5+3;i++)
	{
		cout<<merge [i];
	}
	return 0;
	}
