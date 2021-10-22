#include <iostream>

using namespace std;


class Car{
	public:
		unsigned int id ;
		string brand;
		string model;
		void getData();
		Car();
		Car(unsigned int id, string brand, string model);
		
};



void Car::getData(){
	
	cout<<"\nIdentyfikator: "<<id
	<<"\nMarka: "<<brand
	<<"\nModel: "<<model;
};

Car::Car(){
	id=3;
	brand="Default";
	model="Default";
	cout<<"Konstruktor domyœlny.";
}

Car::Car(unsigned int pId, string pBrand, string pModel){
	id=pId;
	brand=pBrand;
	model=pModel;
	cout<<"Konstruktor parmetryczny.";
}







int main(){
	setlocale(LC_CTYPE, "polish");
	
	cout<<endl;
	Car car = Car{2,"Fiat", "Punto"};
	car.getData();
	cout<<endl;
	//Car car1 = Car{2, "Fiat", "Multipla"};
	//car1.getData();
	cout<<endl;
	Car car1 (34,"Fiat", "Punto");
	car1.getData();

	
	
	return 0;
}
