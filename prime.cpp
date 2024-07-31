#include<iostream>
using namespace std;
int main()
{
	int n,count;
	cout<<"enter the number:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
		if(count==2)
		{
			cout<<"number is prime";
		}
		else{
			cout<<"number is not prime";
		}
	} 
