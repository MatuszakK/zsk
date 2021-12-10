#include <iostream>

using namespace std;

//klasa bazowa - rodzic
class Animal{
	protected:
		
	private:
		
	public:
		string name{""};
		float wzrost, waga;
		
		void funPublicAnimal(){
			cout<<"Funkcja publiczna klasy Animal"<<endl;
		};
		
		void funAnimal(){
			cout<<"Funkcja Animal"<<endl;
		}
};

//klasa potomna - dziecko
class Dog : public Animal{
	private:
		bool vaccination{true};
		
	public:
		string breedOfDog;
		void Aport(){
			cout<<"Aportowanie"<<endl;
		};
		
		void funAnimal(){
			cout<<"Funkcja Dog"<<endl;
		}
		
		void setVaccination(bool v){
			vaccination = v;
		};
		
		bool getVaccination(){
			return vaccination;
		}
		
		
};




int main(){
	setlocale(LC_CTYPE, "polish");
	
	Animal zwierze;
	zwierze.funPublicAnimal();
	zwierze.funAnimal();
			
	Dog burek;
	burek.Aport();
	burek.funPublicAnimal();
	burek.funAnimal();
	burek.setVaccination(true);
	cout<<"Szczepienie: ";
	/*if(burek.getVaccination()) cout<<"TAK";
	else cout<<"NIE"<<endl;*/
	burek.getVaccination() ? cout<<"TAK"<<endl : cout<<"NIE"<<endl;
	
	return 0;
}
