#include <iostream>
#include <time.h>
#include <cstdlib>
#include <chrono>
#include <random>
using namespace std;

double y;
double x;

int main()
{
    srand(time(NULL));
    do{
        x = ((rand()%1001)*(rand()%1001));
        cout<<x<<endl;

        y = y + 1;
    } 
	while (x != 2137);

    cout<<y<<endl;

    return 0;
}