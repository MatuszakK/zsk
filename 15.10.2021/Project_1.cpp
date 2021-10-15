#include <iostream>


using namespace std;

//Temat: konstruktory



struct date{
	unsigned short int dd,mm,yyyy;
};

class Worker{
	public:	
		unsigned int id;
		string name,surname;
		date DateBirthday;
		void getData();
		Worker(){
			surname="Nowak";
			name = "Janusz";
			id=7;
			DateBirthday = {15,10,2021};
		}
		
	
	
};


void Worker::getData(){
	cout<<"Id: "<<id
	<<"\nName: "<<name
	<<"\nSurname: "<<surname
	<<"\nData urodzenia: "<<DateBirthday.dd<<"-"<<DateBirthday.mm<<"-"<<DateBirthday.yyyy;
}



int main(){
		
	setlocale(LC_CTYPE, "polish");
	
	Worker nowak;
	nowak.getData();
	return 0;
}

