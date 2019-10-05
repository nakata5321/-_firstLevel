/*#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool modal(int i, int j){
	if(i < 0)
		i = -i;
	if(j < 0)
		j = -j;
	return  (i < j);
}
int main() {
	int Q;
	vector<string> numbers;
	cin>> Q;
	for(int i = 0; i < Q; i++){
		string number;
		cin>> number;
		numbers.push_back(number);
	}
	sort(begin(numbers), numbers.end());
	for( string& i : numbers)
		cout<< i << " ";
	return 0;
}
*/
