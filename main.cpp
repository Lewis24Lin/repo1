#include <iostream>

using namespace std;

int func1(int x, int y){
	return x+y;
}

int func2(int x, int y){
	return x*y;
}

int main(){

	int a=1,b=2;
	int c=3,d=4;

	int x = func1(a,b);
	cout << x << endl;

	int y = func2(c,d);
	cout << y << endl;

	return 0;
}
