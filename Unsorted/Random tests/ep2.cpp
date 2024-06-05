#include<iostream>
using namespace std;
using funkcja =  double (*)(int  x, float y);
funkcja f = (10,15.2);
double gg(funkcja f)
{

	return f(10, 18.9);
}

int main()
{
	double test = gg(f);
	cout<<test;
}