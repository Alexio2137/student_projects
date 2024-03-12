#include <iostream>

using namespace std;

int main(){
	float liczbaDni = 0;
	
	cout<<"Podaj liczbę dni:  ";
	cin>>liczbaDni;
	
	
	float tygodnie = liczbaDni/7;
	float dni = liczbaDni;
	float godziny = liczbaDni*24;
	float minuty = godziny*60;
	float sekundy = minuty*60;
	
	cout<<"Tygodnie: ";
	cout<<tygodnie<<endl;
	cout<<"Dni: ";
	cout<<dni<<endl;
	cout<<"Godziny: ";
	cout<<godziny<<endl;
	cout<<"Minuty: ";
	cout<<minuty<<endl;
	cout<<"Sekundy: ";
	cout<<sekundy<<endl;
	return 0;
}
