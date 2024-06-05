#include<iostream>
#include<fstream>
using namespace std;
int main(){
    long long int a;
    ofstream myfile;
    ofstream myfilea;
    myfile.open("dzielniki.txt");
    myfilea.open("C:\Users\Dom\OneDrive - Zespół Szkół Komunikacji im. Hipolita Cegielskiego w Poznaniu\Test\liczby.txt");

    cout<<"Wprowadz liczbe a: "<<endl;
    cin>>a;
    myfile<<"Dzielniki liczby "<<a<<" to: ";
    for(long long int i=a; i>0; i--){
        if(a%i==0){
            cout<<i<<endl;
            myfile<<i<<", ";
        }
        myfilea<<i<<endl;
    } 
    return 0;
}