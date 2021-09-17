#include<iostream>

using namespace std;

struct Date{
	unsigned short int d, m, rrrr;
};

struct Student{
	string name, surname;
	unsigned int id;
	Date dateBirthday;
	unsigned short int gradeInformatics[5];
};

int main(){
	setlocale(LC_CTYPE, "polish");
	Student student {"Janusz", "Nowak", 10, {17, 9, 2021}, {5, 2, 5, 4, 3}};
	cout<<"Imie i nazwisko: "<<student.name<<" "<<student.surname
		<<"\nId: "<<student.id
		<<"\nBirthday: "<<student.dateBirthday.d
		<<"-"<<student.dateBirthday.m
		<<"-"<<student.dateBirthday.rrrr
		<<"r\nOceny z informatyki: "
		<<"\n1.Ocena: "<<student.gradeInformatics[0]
		<<"\n2.Ocena: "<<student.gradeInformatics[1]
		<<"\n3.Ocena: "<<student.gradeInformatics[2]
		<<"\n4.Ocena: "<<student.gradeInformatics[3]
		<<"\n5.Ocena: "<<student.gradeInformatics[4];
	
	return 0;
}
