#include<iostream>
using namespace std;
int main()
{
	int age=25;
	try
	{
		if(age>=25){
			cout<<"he is eliigiable to drink alcohal";
		}
		else{
			throw(age);
		}
	}
	catch(int age)
	{
		cout<<"please he dont have enough age to drink alcohal";
		cin>>age;
	}
	return 0;
}
