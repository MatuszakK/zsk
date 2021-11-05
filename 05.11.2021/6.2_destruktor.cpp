#include <iostream>

using namespace std;

class Worker{
	public:
		string name, surname;
		Worker();
		Worker(string pName, string pSurname);
		void getData();
		~Worker(){
			cout<<"Wywo³anie desktruktora..."<<endl;	
		};
};


void createObjectWorker(){
	Worker Jacek = Worker("Polish", "Sausage");;
	Jacek.getData();
};



void Worker::getData(){
	cout<<"Imie: "<<name<<"\nNazwisko: "<<surname<<endl;	
};

Worker::Worker(){
	cout<<"K. domyslny"<<endl;
};

Worker::Worker(string pName, string pSurname): name{pName}, surname{pSurname}
{
	cout<<"K. parametryczny"<<endl;	
};




int main(){
	setlocale(LC_CTYPE, "polish");
	
	cout<<"Hello world"<<endl;	
	
	Worker work = Worker("Polish", "Sausage");
	work.getData();
	
	Worker janusz;
	
	createObjectWorker();
	//createObjectWorker();

	 
	return 0;
}
