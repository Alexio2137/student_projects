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

	cout<<tygodnie<<endl;
	cout<<dni<<endl;
	cout<<godziny<<endl;
	cout<<minuty<<endl;
	cout<<sekundy<<endl;
	return 0;
}
