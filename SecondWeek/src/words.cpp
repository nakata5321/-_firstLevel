#include <iostream>
#include <set>
#include <map>
#include <string>

using namespace std;

void newWordVocab(map<string, set<string>>& vocabulary,string& word1, string& word2){
	vocabulary[word1].insert(word2);
	vocabulary[word2].insert(word1);
}

void countWord(map<string, set<string>>& vocabulary,const string& word){
	cout << vocabulary[word].size() << endl;
}

bool checkWords(map<string, set<string>>& vocabulary,string& word1, string& word2){
	for(auto& item : vocabulary[word1]){
		if(item == word2)
			return true;
	}
	for(auto& item : vocabulary[word2]){
			if(item == word1)
				return true;
	}
	return false;
}
int main(){
	map<string, set<string>> vocab;
	int Q;
	cin>> Q;
	for(int i = 0; i < Q; i++){
		string command;
		cin>> command;
		string word1, word2;
		if(command == "ADD"){
			cin>> word1 >> word2;
			newWordVocab(vocab, word1, word2);
		}
		if(command =="COUNT"){
			cin>> word1;
			countWord(vocab, word1);
		}
		if(command =="CHECK"){
			cin>> word1 >> word2;
			if(checkWords(vocab, word1, word2))
				cout<< "YES" << endl;
			else
				cout<< "NO" << endl;
		}
	}
	return 0;
}
