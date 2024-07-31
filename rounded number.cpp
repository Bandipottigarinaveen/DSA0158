#include<iostream>
#include<cmath>
using namespace std;
int main(){
//	int roundvalue;
	float number;
	cout<<"enter:";
	cin>>number;
	float floornumber=floor(number);
float ceilnumber=ceil(number);
if ((number-floornumber)<(ceilnumber-number)){
	cout<<"nearest value:"<<floornumber<<endl;
}else{
	cout<<"nearest value:"<<ceilnumber<<endl;
}
return 0;
}

