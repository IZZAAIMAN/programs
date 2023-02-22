Q#7//find the sum of element in array ?
#include<iostream >
using namespace std;
int main()
{
	int arr[10],n,i ,sum=0;
	cout<<" the size of array"<<endl;
	cin>>n;
	for( int i=0;i<n;i++)
	cin>>arr[i];
	for( int i=0;i<n;i++)
	{
		sum=sum+arr[i];				
}
cout<<"sum"<<sum<<endl;
return 0;
	
}
