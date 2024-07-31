#include<iostream>
using namespace std;
int sumofdigit(int n)
{
	int sum=0;
	while(n>0){
	sum+=n%10;
	n=n/10;
}
return sum;
}
int main()
{
	int num;
	cout<<"enter the number";
	cin>>num;
	int result=sumofdigit(num);
	cout<<"sum of digit:"<<result;
}

