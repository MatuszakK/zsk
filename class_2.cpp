#include<iostream>
using namespace std;


class Rectangle{
	public:
		float a, b;
		float Pole();
		float Obwod();
		void printA_B();
		void printAll();
	
	
};

float Rectangle::Obwod(){
	float x = (a*2) + (b*2);
	return x;
}

float Rectangle::Pole(){
	return a*b;
}

void Rectangle::printA_B(){
	cout<<"A: "<<a<<"\nB: "<<b;  
}

void Rectangle::printAll(){
	cout<<"Obwod: "<<Obwod()<<"\nPole: "<<Pole();
}

int main(){
	
	Rectangle x;
	cin>>x.a;
	cin>>x.b;
	x.printAll();
	return 0;
}
