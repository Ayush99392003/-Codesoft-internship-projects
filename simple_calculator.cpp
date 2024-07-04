#include<iostream>
using namespace std;
void calcculation(int a,int b,string x){
		while (true){cout<<"\nEnter operator + , - , * , / , % : ";cin>>x;
		if (x == "+"){cout<<"\n\n"<<a<<x<<b<<" = "<<(a+b);break;}
		else if (x == "-"){cout<<"\n\n"<<a<<x<<b<<" = "<<(a-b);break;}
		else if (x == "*"){cout<<"\n\n"<<a<<x<<b<<" = "<<(a*b);break;}
		else if (x == "/"){cout<<"\n\n"<<a<<x<<b<<" = "<<(a/b);break;}
		else {cout<<"wrong input";continue;}} 
		}
int main(){
	cout<<"                       Welcome To My Calculator #codesoft                          ";
	float a , b;string x;char q;
	while (true){cout<<"\n\nEnter 1: ";cin>>a;
		if (cin.fail()){cout<<"Wrong input "<<endl;cin.clear();cin.ignore();}
		else{break;}}
	while (true){cout<<"\nEnter 2: ";cin>>b;
		if (cin.fail()){cout<<"Wrong input "<<endl;cin.clear();cin.ignore();}
		else{break;}}
	while (true){
		calcculation(a,b,x);
		cout<<"\nwant to continue press y else any character : ";cin>>q;
		if (q=='y' || q=='Y'){continue;}
		else {break;}}
	return 0;		
}