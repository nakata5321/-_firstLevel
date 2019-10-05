/*#include<string>
#include<iostream>

using namespace std;

class ReversibleString {
public:
	ReversibleString () {}
	ReversibleString (const string& word){
		first = word;
	}
	void Reverse(){
		string result ="";
		for(int i = 0; i < first.size(); i++){
			result += first[first.size()-1-i];
		}
		first = result;
	}
	string ToString() const{
		return first;
	}
private:
	string first;
};

int main(){
	ReversibleString s("live");
	  s.Reverse();
	  cout << s.ToString() << endl;

	  s.Reverse();
	  const ReversibleString& s_ref = s;
	  string tmp = s_ref.ToString();
	  cout << tmp << endl;

	  ReversibleString empty;
	  cout << '"' << empty.ToString() << '"' << endl;

	  return 0;
}

*/
