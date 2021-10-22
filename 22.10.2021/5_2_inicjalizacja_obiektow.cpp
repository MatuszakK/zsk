#include <iostream>

using namespace std;


class Car{
	public:
		unsigned int id {10};
		string brand{"ferrari"};
		string model{"f430"};
		void getData();
		
		Car(unsigned int id=2, string brand="Audi", string model="A8");
		
		
};



void Car::getData(){
	
	cout<<"\nIdentyfikator: "<<id
	<<"\nMarka: "<<brand
	<<"\nModel: "<<model;
};


Car::Car(unsigned int pId, string pBrand, string pModel){
	model = pModel;
	id = pId;
	brand = pBrand;
};




int main(){
	setlocale(LC_CTYPE, "polish");
	
	//Car samochod;
	//samochod.getData();
	
	
	Car car(1, "BMW");
	car.getData();
	cout<<endl;
	Car car1 = Car(13, "Bugatti", "Chiron");
	car1.getData();
	
	
	return 0;
}
