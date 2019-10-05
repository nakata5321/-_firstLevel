/*#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool efsa(string first,string second ){
	for(char& i : first)
	i = tolower(i);
	for(char& j : second)
	j = tolower(j);
	return (first < second);

}

int main(){
	int Q;
	cin >>Q;
	string current;
	vector<string> result;
	for(int i = 0; i < Q; i++){
		cin >> current;
		result.push_back(current);
	}
	sort(begin(result), end(result),efsa);
	for(const auto& word : result)
		cout<< word << " ";
	return 0;
}
*/
