#include <iostream>
using namespace std;
int main(){
	int x = 56;
	int &a = x;
	int &r = a;
	cout << "x = " << x << ", &x = " << &x << endl;
	r = 25;
	cout << "x = " << x << endl;
}