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
				cout<<"entered a number"<<endl;
			}
		}
};
int main(){
	char naveen;
	cout<<"enter the letter:"<<endl;
	cin>>naveen;
	haneef ali;
	ali.x=naveen;
	ali.result();
	return 0;
}
