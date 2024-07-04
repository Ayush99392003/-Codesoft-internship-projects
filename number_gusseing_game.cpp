#include<iostream>
#include<time.h>
#include<cstdlib>
using namespace std;
void check(int i ,int  x){
    if (i < x){cout<<"\n\nTOOOO LOW    ###   try your luck again  \n\n";}
    else {cout<<"\n\nTOOOOO HIGH   #####   try your luck again \n\n";}
}
int main(){
    int x , i;
    srand(time(0));
    x = rand() % 20 ; 
    while (true){
        cout<<"ENTER NUMBER BETWEEN 0 - 20 AND TRY YOUR LUCK! :";
        cin>>i;
        if (i==x){
            cout<<"\n\nYou Won ####   Congrats! \n\n";
            break;
        }
        else {check(i , x);}
    }
    return 0;
}