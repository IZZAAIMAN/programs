Q#11//write a pogram  to seprate odd and even integer in seperate arrays ?
#include<iostream>
using namespace std;
int main()
{
	int arr[5],i,a;
	cout<<"enter 5 values"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"enter values "<<i+1<<":"<<"\t";
		cin>>arr[i];
	}
	cout<<"values are"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	int even1=0,odd1=0,even[5],odd[5];
	for(i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		even[even1++]=arr[i];
		else
		odd[odd1++]=arr[i];
	}
	cout<<endl<<"even no ";
	for(i=0;i<even1;i++)
	cout<<even[i];
	for(i=0;i<odd1;i++)
	cout<<odd[i];
}
