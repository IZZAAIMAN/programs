Q17//write a program to check if two arrays are same or not?
#include<iostream>
using namespace std;
int main()
{
	int a[5],b[5],i,f=0;
	cout<<"enter 5 number for a"<<endl;
	for(i=0;i<5;i++)
	{
		cin>> a [i];
	}
	cout<<"enter 5 number for b"<<endl;
	for( i=0;i<5;i++)
	{
		cin>> b[i];
	}
	for(i=0;i<5;i++)
	{
		if(a[i]==b[i])
		f=f+1;
	}
	if(f==5)
	cout<<"it is equal<<endl";
	else
	cout<<" it is not equel";
}
