#include <iostream>
using namespace std;
	int main()

{
	float Celsius (0);
	cout << "Enter Celsius temperature : ";
	cin >> Celsius;
	float Fahrenheit (0);

	Fahrenheit = Celsius * 1.80 + 32;

	cout << "Fahrenheit is " << Fahrenheit << "\n";
	cout << "Now weather in Thailand is " << (Fahrenheit < 70? "cool" : "Hot") << "\n"; 

	return(0);


}