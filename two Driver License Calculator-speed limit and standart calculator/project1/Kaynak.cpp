#include<iostream>
#include<iomanip>
using namespace std;

int main() {


	//*************************************************************************************************

					 //spelling with if blocks
				 // Driver License Point Calculator 
	
	
	int speed;
	int Point = 100;

	cout << "enter speed:"; cin >> speed;

	if (speed >= 0 && speed <= 120) {
		cout << "you are in the speed limit range";
	}
	else if (speed >= 121 && speed <= 140) {
		cout << "You have exceeded the speed limit ,You have received -10 Penalty Points " << endl;
		cout << "The Remaining Driver's License Points:" << Point - 10 << endl;
	}
	else if (speed >= 141 && speed <= 160) {
		cout << "You have exceeded the speed limit ,You have received -20 Penalty Points" << endl;
		cout << "The Remaining Driver's License Points:" << Point - 20 << endl;
	}
	else if (speed >= 161 && speed <= 180) {
		cout << "You have exceeded the speed limit ,You have received -30 Penalty Points" << endl;
		cout << "The Remanining Driver's License Points:" << Point - 30 << endl;
	}
	else {
		cout << "You have exceed the speed limit ,You have received -40 Penalty Points" << endl;
		cout << "The Remaining Driver's License Points:" << Point - 40 << endl;
	}

	

   //**************************************************************************************************

				   //Switch-case code exercise

	float num1;
	float num2;
	char chose;
	cout << "enter first number:"; cin >> num1;
	cout << "enter second number:"; cin >> num2;

	cout << "chose the calculator type(+,-,/,*): ";
	cin >> chose;
	switch (chose) {
	case '+':
		cout << "conclusion:" << num1 + num2;
		break;
	case '-':
		cout << "conclusion:" << num1 - num2;
		break;
	case '/':
		cout << "conclusion:" <<fixed<< setprecision(5)<< num1 / num2;
		break;
	case '*':
		cout << "conclusion:" << num1 * num2;
		break;
	default:
		cout << "you enter wrong number.";

	}
	//#include <iomanip> and  <<fixed<< setprecision(3)  {We set the number of digits after the point using}



	//**************************************************************************************************
	
	                  // Traffic, speed and vehicle calculator 
	
	int speed;
	int score;
	char vehicleType;

	cout << "         Max Speed Limits For Vehicle" << endl;
	cout << "               Car:120" << endl;
	cout << "               Bus:80" << endl;
	cout << "               Truck:90" << endl;
	cout << "-------------------------------------------------------------" << endl;
	cout << "#  Please Enter Your Vehicle Type  #"<<endl;
	cout << "(Car=C;Bus=B;Truck=T):"; cin >> vehicleType;
	cout << "Please Enter Your Vehicle Speed:"; cin >> speed;
	cout << "Please Enter your last driver license score:"; cin >> score;
	cout << "------------------------------------------------------------" << endl;
	if (vehicleType == 'C') {
		cout << "The vehicle is Car" << endl;
		if (speed > 120) {
			cout << "You were penalized for speeding higher than '120'!!!" << endl;
			cout << "New driver license score:" << score - 10 << endl;
		}
		else {
			cout << "Have a safe journey " << endl;
		}

	}
	else if (vehicleType == 'B') {
		cout << "The vehicle is Bus" << endl;
		if (speed > 80) {
			cout << "You were penalized for speeding higher than '80'!!!" << endl;
			cout << "New driver license score:" << score - 30 << endl;
		}
		else {
			cout << "Have a safe journey " << endl;
		}
	}


	else if (vehicleType == 'T') {
		cout << "The vehicle is Truck" << endl;
		if (speed > 90) {
			cout << "You were penalized for speeding higher than '90'!!!" << endl;
			cout << "New driver license score:" << score - 30 << endl;
		}
		else {
			cout << "Have a safe journey " << endl;
		}

	}

	else {
		cout << "you entered the wrong vehicle type " << endl;
	}


	





}
