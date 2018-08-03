#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;
int main(){
	double a[] = {1.1, 4.4, 3.3, 2.2}, b[4]; //声明了double类型的数组A ？  b = 4 
	copy(a, a + 4, ostream_iterator<double>(cout, " ")); //输出数组内容的基本格式，ostream_iterator为输出流操作符 <Type>表示数组元素的数据类型。
	cout << endl;
	reverse_copy(a, a + 4, ostream_iterator<double>(cout, " "));//逆向输出数组内容
	cout << endl;
	copy(a, a + 4, b);
	copy(b, b + 4, ostream_iterator<double>(cout, " "));
	cout << endl;
	sort(a, a + 4);
	copy(a, a + 4, ostream_iterator<double>(cout, " "));
	cout << endl;
	reverse_copy(a, a + 4, b);
	copy(b, b + 4, ostream_iterator<double>(cout, " "));
	cout << endl;
}
