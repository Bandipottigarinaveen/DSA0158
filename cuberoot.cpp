#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float number,cuberoot;
	cout<<"enter the number:";
	cin>>number;
	if(number>=0){
		cuberoot=cbrt(number);
		cout<<"cube root:"<<number<<"is"<<cuberoot<<endl;
	}
	else{
		cout<<"not calculated";
	}
	return 0;
}
