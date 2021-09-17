#include <iostream>

using namespace std;

struct Date{
	unsigned short int dd, mm, rrrr;
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
		<<"-"<<dateBirthday.rrrr;
}

void Worker::setData(unsigned int id1, string name1, string surname1, Date dateBirthday1){
	id = id1;
	surname = surname1;
	name = name1;
	dateBirthday = dateBirthday1;
	
}



int main(){
	setlocale(LC_CTYPE, "polish");
	Worker pracownik;
	pracownik.setData(8, "Janusz", "Kowalski", {17, 9, 2021});
	pracownik.showAllData();
	
	return 0;
}
