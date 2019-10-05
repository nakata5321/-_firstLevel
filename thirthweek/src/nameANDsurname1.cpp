/*#include <vector>
#include <string>
#include <iostream>
#include <map>

using namespace std;

class Person{
public:
	Person(const string& name, const string& fullName, const int& year){
		ChangeFirstName(year, name);
		ChangeLastName(year, fullName);
	}
	void ChangeFirstName(const int& year,const string& first_name){
		FirstName[year] = first_name;
	}
	void ChangeLastName (const int& year, const string& last_name){
		LastName[year] = last_name;
	}
	string GetFullName(const int& year) {
	int currentYearName = -1;
	for(const auto& word : FirstName){
		if(word.first <= year)
			currentYearName = word.first;
		else{
			cout<<"No person";
			break;
		}
	}

	int currentYearSurname = -1;
	for(const auto& word : LastName){
		if(word.first <= year)
			currentYearSurname = word.first;
		else
			break;
	}

	if((currentYearSurname == -1) && (currentYearName == -1))
		return "";
	else{
		if(currentYearSurname == -1)
			return (FirstName[currentYearName] + " with unknown last name");
		if(currentYearName == -1)
					return (LastName[currentYearSurname] + " with unknown first name");
		else
			return (FirstName[currentYearName] + " " + LastName[currentYearSurname]);

	}
	}
	string GetFullNameWithHistory(int year){
		string result ="";
		int currentYearName = -1;
		vector <string> names;
		for(auto& word : FirstName){
			if(word.first <= year){
				names.insert(begin(names), word.second);
				currentYearName = word.first;
			}
			else{
				cout<<"No person";
				break;
			}
		}

		int currentYearSurname = -1;
		vector <string> Lnames;
		for( auto& word : LastName){
			if(word.first <= year){
				Lnames.insert(Lnames.begin(), word.second);
				currentYearSurname = word.first;
			}
			else
				break;
		}
		////////////////////////////////////////////////////////////

		if((currentYearSurname == -1) && (currentYearName == -1))
			return "";

		else{
			if(currentYearSurname == -1){//если нет фамилии
				result += names[0];
				if((names.size()>2) ||((names.size()>1) && (names[0] != names[1])) ){
					result += "(";
					for(int i = 1; i < names.size(); i++){
						if(names[i] != names[i-1])
							result += names[i] + " ";
					}
					result += ") ";
				}
				result += " with unknown last name";
			}
////////////////////////////////////////////////////////////////////
			if(currentYearName == -1){//если нет имени
				result += Lnames[0] + " ";
				if((Lnames.size()>2) ||((Lnames.size()>1) && (Lnames[0] != Lnames[1]))){
					result += "(";
					for(int i = 1; i < Lnames.size(); i++){
						if(Lnames[i] != Lnames[i-1])
							result += Lnames[i] + " ";
					}
					result += ") ";
				}
				result += "with unknown first name";
			}
			///////////////////////////////////////////////////////
			if((currentYearSurname != -1) && (currentYearName != -1)){//есть все
				result += names[0] + " ";//ввод имен
				if((names.size()>2)||((names.size()>1) && (names[0] != names[1]))){
					result += "(";
					for(int f = 1; f < names.size(); f++){
						if(names[f] != names[f-1])
							result += names[f] + " ";
					}
					result += ") ";
				}
				result += Lnames[0] + " ";//ввод фамидий
				if((Lnames.size()>2)||((Lnames.size()>1) && (Lnames[0] != Lnames[1]))){
					result += "( ";
					for(int j = 1; j < Lnames.size(); j++){
						if(Lnames[j] != Lnames[j-1])
							result += Lnames[j] + " ";
					}
					result += ") ";
				}
			}

		}
		return result;
	}
private:
	map<int, string> FirstName;
	map<int, string> LastName;
};

int main() {
	  Person person("Polina", "Sergeeva", 1960);
	  for (int year : {1959, 1960}) {
	    cout << person.GetFullNameWithHistory(year) << endl;
	  }

	  person.ChangeFirstName(1965, "Appolinaria");
	  person.ChangeLastName(1967, "Ivanova");
	  for (int year : {1965, 1967}) {
	    cout << person.GetFullNameWithHistory(year) << endl;
	  }

	  return 0;


	/*Person person;

	  person.ChangeFirstName(1965, "Polina");
	  person.ChangeLastName(1967, "Sergeeva");
	  for (int year : {1900, 1965, 1990}) {
	    cout << person.GetFullNameWithHistory(year) << endl;
	  }

	  person.ChangeFirstName(1970, "Appolinaria");
	  for (int year : {1969, 1970}) {
	    cout << person.GetFullNameWithHistory(year) << endl;
	  }

	  person.ChangeLastName(1968, "Volkova");
	  for (int year : {1969, 1970}) {
	    cout << person.GetFullNameWithHistory(year) << endl;
	  }

	  person.ChangeFirstName(1990, "Polina");
	  person.ChangeLastName(1990, "Volkova-Sergeeva");
	  cout << person.GetFullNameWithHistory(1990) << endl;

	  person.ChangeFirstName(1966, "Pauline");
	  cout << person.GetFullNameWithHistory(1966) << endl;

	  person.ChangeLastName(1960, "Sergeeva");
	  for (int year : {1960, 1967}) {
	    cout << person.GetFullNameWithHistory(year) << endl;
	  }

	  person.ChangeLastName(1961, "Ivanova");
	  cout << person.GetFullNameWithHistory(1967) << endl;

	  return 0;
}
*/
