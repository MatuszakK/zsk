#include <iostream>

using namespace std;


class Rectangle{
	//unsigned int id;
	private:
		double sideA;
		double sideB;
	
	public:
		Rectangle();
		Rectangle(double sideA, double sideB);
		Rectangle(const Rectangle&);
		
		void catchSides(double&, double&);
		void setSides(double sideA, double sideB);
		void getSides();
		double area();
		double circuit();	
};



Rectangle::Rectangle(){
	cout<<"Konstruktor domyslny"<<endl;
};

Rectangle::Rectangle(double pSideA, double pSideB){
	sideA = pSideA;
	sideB = pSideB;
	cout<<"Konstrukotr parametryczny"<<endl;
	
};

Rectangle::Rectangle(const Rectangle& model){
	sideA = model.sideA;
	sideB = model.sideB;
	
	cout<<"Konstruktor kopiuj¹cy"<<endl;
	
}

void Rectangle::catchSides(double &pSideA, double &pSideB){
	pSideA=sideA;
	pSideB=sideB;
};


void Rectangle::setSides(double pSideA, double pSideB){
	sideA=sideA;
	sideB=sideB;
		
};


void Rectangle::getSides(){
	cout<<"Bok a: "<<sideA<<"\nBok b: "<<sideB;
};
double Rectangle::area(){
	return sideA * sideB;
};

double Rectangle::circuit(){
	return (2*sideA) + (2*sideB);
};	



Rectangle copyRectangle(Rectangle rectangle){
	return rectangle;
};




int main(){
	setlocale(LC_CTYPE, "polish");	
	
	double a,b;
	cout<<"Pierwszy prostok¹t"<<endl;
	Rectangle prostokat1(20, 30);
	cout<<"Obiekt prostok¹t1\n";
	prostokat1.getSides();
	cout<<"\na: "<<a<<"\nb: "<<b;
	
	cout<<"Drugi prostok¹t"<<endl;
	Rectangle prostokat2 = prostokat1;	
	cout<<"Obiekt prostok¹t1\n";
	prostokat2.catchSides(a,b);
	cout<<"Obiekt prostok¹t1\n";
	prostokat2.getSides();
	cout<<"\na: "<<a<<"\nb: "<<b;
	
	cout<<"Trzeci prostok¹t"<<endl;
	Rectangle prostokat2 =prostokat1;	
	cout<<"Obiekt prostok¹t1\n";
	prostokat2.catchSides(a,b);
	cout<<"Obiekt prostok¹t1\n";
	prostokat2.getSides();
	cout<<"\na: "<<a<<"\nb: "<<b;
	
	cout<<"Czwarty prostok¹t"<<endl;
	Rectangle prostokat4 ;
	prostokat4 = copyRectangle(prostokat1);	
	cout<<"Obiekt prostok¹t1\n"<<prostokat2.catchSides();
	cout<<"Obiekt prostok¹t1\n"<<prostokat2.getSides();
	cout<<"\na: "<<a<<"\nb: "<<b;
	return 0;
}
