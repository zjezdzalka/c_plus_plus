#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Wprowadz liczbe a: "<<endl;
    cin>>a;
    for(int i=a; i>0; i--){
        if(a%i==0){
            cout<<i<<endl;
        }
    } 
    return 0;
}