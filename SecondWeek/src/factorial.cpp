#include <iostream>
using namespace std;

int Factorial(int x){
	if(x < 0)
		return 1;
	int fac = 1;
	for(int i = 1; i <= x; i++){
		fac*=i;
	}
	return fac;
	}

/*int main() {
	int a;
	cin>> a;
	cout<<Factorial(a);
	return 0;
}*/
