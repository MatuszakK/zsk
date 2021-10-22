#include <iostream>

using namespace std;


class Car{
	public:
		unsigned int id {10};
		string brand{"ferrari"};
		string model{"f430"};
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
	
	model = "126p";
	id = 3;
	brand = "Fiat";
};

Car::Car(unsigned int pId, string pBrand, string pModel){
	model = "126p";
	id = 4;
	brand = "Fiat";
};




int main(){
	setlocale(LC_CTYPE, "polish");
	
	//Car samochod;
	//samochod.getData();
	
	
	Car car1 = Car(2232, "Pagani", "Zonda");
	car1.getData();
	return 0;
}

