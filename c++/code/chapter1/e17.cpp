#include <iostream>
#include <iterator>
#include <algorithm>
#include <functional>
using namespace std;

int main(){
	double a[] = {1.1, 4.4, 3.3, 2.2};
	sort(a, a + 4); //数组升序
	copy(a, a + 4, ostream_iterator<double>(cout, " ")); //输出数组
	cout << endl;
	sort(a, a + 4, greater<double>());// 数组降序
	copy(a, a + 4, ostream_iterator<double>(cout, " "));
	cout << endl;
	double *x = find(a, a + 4, 4.4);  //find查指是否存在值，返回的是位置指针，使用*输出查找的内容
	if(x == a + 4){
		cout << "no vlue 4.4 is array";
	}else{
		cout << "no value is" << *x << "的数组元素";
	}
		
	cout << endl;
	x = find(a, a + 4, 8);
	if(x == a + 4){
		cout << "没有值为8的数组";
	}else{
		cout << "有值为" << *x << "的数组元素";
	}

}