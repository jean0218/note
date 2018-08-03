#include <iostream>
#include <iterator>
#include <algorithm>
#include <functional>
using namespace std;

int main(){
	double a[] = {1.1, 4.4, 3.3, 2.2}, b[8] = {8}; //? b[8] = {8}何义？
	copy(a + 2, a + 4, ostream_iterator<double>(cout, " ")); //3.3 2.2
	cout << endl;
	reverse_copy(a + 1, a + 4, ostream_iterator<double>(cout, " "));//2.2 3.3 4.4 
	cout << endl;
	copy(a, a + 4, &b[4]); //?
	copy(b, b + 8, ostream_iterator<double>(cout, " "));//{1.1, 4.4, 3.3, 2.2}
	cout << endl;
	sort(a + 1, a + 3);
	copy(a, a + 4, ostream_iterator<double>(cout, " "));//1.1 3.3 4.4 2.2
	cout << endl;
	sort(b, b + 6, greater<double>());
	copy(b, b + 8, ostream_iterator<double>(cout, " "));//8 4.4 1.1 0 0 0 3.3 2.2
	cout << endl;
}