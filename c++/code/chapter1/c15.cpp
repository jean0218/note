#include <iostream>
using namespace std;
typedef double array[10];
int main(){
	array a = {12, 34, 56, 78, 90, 98, 76, 85, 64, 43};
	array &b = a;
	a[2] = 100;
	for(int i = 0; i < 10; i++){
		cout << b[i] << "   |    ";
	}
}