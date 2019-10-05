#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*bool IsPalindrom(string x){
	string y = "";
	for(int i = 0; i < x.length(); i++){
		y = y + x[x.length()-1-i];
	}
	if(x == y)
		return true;
	else
		return false;
}

vector<string> PalindromFilter (vector<string> words, int min){
	vector<string> result;
	bool check = 0;
	for(int i = 0; i < words.size(); i++){
		if(words[i].length() >= min){
			check = IsPalindrom(words[i]);
			if(check){
				result.push_back(words[i]);
			}
		}
	}
	return result;
}
int main(){
	vector<string> words = {"weew", "bro", "code"};
	int minLength = 4;
	vector<string> result = PalindromFilter(words, minLength);
	for(int i = 0; i<result.size(); i++)
		cout<< result[i]<< endl;
	return 0;
}*/
