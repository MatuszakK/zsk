#include <iostream>

using namespace std;

class school{
	public:
		static string s_school;
		static string s_jobPosition;
		string name, surname;
		void show();
		
};

void school::show(){
	cout<<"Szko³a: "<<s_school;
}

string school::s_jobPosition = "student";
string school::s_school = "ZSK";




int main(){
	setlocale(LC_CTYPE, "polish");
	school x;
	x.show();
	
	
	return 0;
}
