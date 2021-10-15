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
		Worker();
		Worker(int id);
		Worker(int id,string name,string surname);
		Worker(int id,string name,string surname, date DateBirthday);
};

Worker::Worker(){
	
};



Worker::Worker(int pId){
	id=pId;

};


Worker::Worker(int pId, string pName, string pSurname){
	id=pId;
	name = pName;
	surname = pSurname;
};


Worker::Worker(int pId, string pName, string pSurname, date pDateBirthday){
	id=pId;
	name = pName;
	surname = pSurname;
	DateBirthday = pDateBirthday; 
};


void Worker::getData(){
	cout<<"Id: "<<id
	<<"\nName: "<<name
	<<"\nSurname: "<<surname
	<<"\nData urodzenia: "<<DateBirthday.dd<<"-"<<DateBirthday.mm<<"-"<<DateBirthday.yyyy;
}



int main(){
		
	setlocale(LC_CTYPE, "polish");
	Worker kowalski(11);
	kowalski.getData();
	cout<<endl;
	Worker nowak(11,"Janusz","Nowak",{1,3,2021});
	nowak.getData();
	return 0;
}
