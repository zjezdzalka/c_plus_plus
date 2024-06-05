#include<iostream>
#include <iomanip>

using namespace std;

int main() {
    for(int o = 1; o <= 4; o++){
    double i = 3;
        for(int a = 1; a <= 15;) {
        cout <<fixed<<setprecision(0)<< "<" << i << "\n";
        
        a = a+1;
        i = i*10;
           i = i+3;
}
for(double a = 15; a >= 1;) {
        cout << "<" << i << "\n";
        
        a = a-1;
        i = i/10;
           i = i-0.3;
}
}
return 0;
}