#include <iostream>


using namespace std;

//Zadanie: Dog




class Dog{
	public:	
		string Color,EyeColor,Name,Type;
		unsigned short int Height,Length;
		void setData();
		void Sit();
		void LayDown();
		void Shake();
		void Come();
		Dog();
		Dog(string Type);
		Dog(string Name,string Type);
		Dog(string Name, string Type, string Color, string EyeColor, int Height, int Length);
		
		
};

Dog::Dog(){
	
};

Dog::Dog(string pType){
	Type=pType;
};

Dog::Dog(string pName, string pType){
	Name=pName;
	Type=pType;	
};

Dog::Dog(string pName, string pType, string pColor, string pEyeColor, int pHeight, int pLength){
	Name=pName;
	Type=pType;	
	Color=pColor;
	EyeColor=pEyeColor;
	Height=pHeight;
	Length=pLength;
};

void Dog::Sit(){
	cout<<"Pies siedzi"<<endl;
}

void Dog::LayDown(){
	cout<<"Pies lezy"<<endl;
}

void Dog::Come(){
	cout<<"Pies idzie"<<endl;
}

void Dog::Shake(){
	cout<<"Pies macha ogonem"<<endl;
}

void Dog::setData(){
	cout<<"Imie: "<<Name
	<<"\nRasa: "<<Type
	<<"\nKolor"<<Color
	<<"\nKolor oczu: "<<EyeColor
	<<"\nWysokœæ: "<<Height
	<<"\nD³ugoœæ: "<<Length<<endl;
}






int main(){
		
	setlocale(LC_CTYPE, "polish");
	Dog Rayne("Rayne", "Pies", "Czarny", "Niebieskie", 127,89);
	Rayne.setData();
	Rayne.Sit();
	return 0;
}
