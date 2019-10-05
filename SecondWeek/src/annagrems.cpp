/*#include <iostream>
#include <map>
#include <string>

using namespace std;

bool checkForAnnagram(const string& one, const string& two){
	map<char, int> firstW;
	map<char, int> secondW;
	for(const char& a : one)
		firstW[a]++;
	for(const char& a : two)
		secondW[a]++;
	if(firstW == secondW)
		return true;
	else
		return false;

}

int main(){
	int countWords;
	cin >> countWords;
	string result[countWords];
	for(int i = 0; i < countWords; i++ ){
		string fword, sword;
		cin>> fword >> sword;
		if(checkForAnnagram(fword, sword))
			result[i] = "YES";
		else
			result[i] = "NO";
	}
	for(int i = 0; i < countWords; i++)
		cout<< result[i]<< endl;
	return 0;
}

*/
