#include<iostream>
using namespace std;
class haneef{
		public:
			char x;
			void result(){
				char lower=tolower(x);
					if(lower=='a'||lower=='e'||lower=='i'||lower=='o'||lower=='u'){
						cout<<x<<"vowel"<<endl;
					}else if(isalpha(x)){
						cout<<x<<"consonent"<<endl;
					}else{
						cout<<"invalid char"<<endl;
					}
				}
};
int main(){
	char kishore;
	cout<<"enter the number:"<<endl;
	cin>>kishore;
	haneef oops;
	oops.x=kishore;
	oops.result();
	return 0;
}
