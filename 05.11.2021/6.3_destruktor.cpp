#include <iostream>

using namespace std;

class Animals{
	public:
		string name, surname;
		static int sCount;
		Animals(){
			sCount++;
			cout<<"Iloœæ obiektów sCount: "<<sCount<<endl;
		};
		
	
		~Animals(){
			sCount--;
			cout<<"Iloœæ obiektów sCount: "<<sCount<<endl;	
		};
};


int Animals::sCount=0;





int main(){
	setlocale(LC_CTYPE, "polish");
	Animals dog; 
	/*Animals cat ;
	Animals horse;
	Animals catEvil;*/
	
	Animals *p_dog = new Animals;


	 
	return 0;
}
