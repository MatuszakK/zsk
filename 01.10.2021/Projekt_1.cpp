#include <iostream>

using namespace std;

struct Date{
	unsigned short int dd, mm, yyyy;
};

class Worker{
	public:
		unsigned int id {};
		string name{}, surname{};
		Date dateBirthday {};
		
		void showAllData();
		void setData(unsigned int id, string name, string surname, Date dateBirthday);
		
};

void Worker::showAllData(){
	cout<<"Dane pracownika: "
		<<"\nId: "<<id
		<<"\nImie: "<<name
		<<"\nNazwisko: "<<surname
		<<"\nData urodzenia: "<<dateBirthday.dd
		<<"-"<<dateBirthday.mm
		<<"-"<<dateBirthday.yyyy
		<<" r.\n";
}

void Worker::setData(unsigned int id, string name, string surname, Date dateBirthday){
	Worker::id = id;
	Worker::surname = surname;
	Worker::name = name;
	Worker::dateBirthday = dateBirthday;
	
}



int main(){
	setlocale(LC_CTYPE, "polish");
	Worker pracownik;
	pracownik.setData(8, "Janusz", "Kowalski", {17, 9, 2021});
	pracownik.showAllData();
	
	return 0;
}
