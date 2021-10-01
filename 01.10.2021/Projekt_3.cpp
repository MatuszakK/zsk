#include <iostream>

using namespace std;

class school{
	
	public:
		//w³aœciwoœci statyczne
		static string s_school;
		static string s_jobPosition;
		string name, surname;
		void getData();
		void setNameSurname(string name, string surname);
		static string s_getSchool();
		static void set_school(string pSchool){
			s_school = pSchool;
		};
};

string school::s_getSchool(){
	return s_school;
};


void school::getData(){
	cout<<"Imie i nazwisko: "<<name<<" "<<surname<<endl;	
}

void school::setNameSurname(string pName, string pSurname){
	name = pName;
	surname = pSurname;
}


string school::s_jobPosition = "student";
string school::s_school = "ZSK";




int main(){
	setlocale(LC_CTYPE, "polish");
	school x;

	/*cout<<school::s_school<<endl;
	cout<<school::s_jobPosition<<endl;
	x.setNameSurname("jAN", "NoWaK");
	x.getData();
	school::s_jobPosition = "wyk³adowca";
	cout<<x.s_jobPosition<<endl;
	x.s_jobPosition = "dziekan";
	cout<<school::s_jobPosition;*/
	
	cout<<school::s_getSchool();
	school::set_school("CVS");
	cout<<"\n"<<x.s_school;	
	
	return 0;
}
