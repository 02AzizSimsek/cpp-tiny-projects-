#include<iostream>
#include<stdlib.h>//it is library that contains the necessary functions for generating random numbers

using namespace std;
int main() {
	
	
	//we will make a number guessing game

	//the computer should generate  an arbitrary number (0-100),the user should try to guess this number correctly

	//if the predictions are wrong,it should direct the  user to the correct answer

	int guess;
	char answer = 'y';
	srand(time(NULL));//so that the computer does not produce the same number every time
	while (answer == 'y') 
	{
		//decodes a number from 0 to 100

		int random_number = rand() % 100;
		cout << " I have kept a number between 0 and 100 decimals" << endl;
		cout << "let's guess:";
		cin >> guess;
		while (guess !=random_number) 
		{
			if (guess < random_number)
			{
				cout << guess << " smaller than the number I keep" << endl;

			}
			else
			{
				cout << guess << "bigger than the number I keep" << endl;
			}
			cout << "guess again:"; cin >> guess;

		}//whille
		cout << "Congratulations on finding it.The number I kept was " << random_number << endl;

		cout << "would you like to play again?" << endl;
		cout << "Yes:y,No:n=>";
		cin >> answer;
	}
	cout << "bye bye player ";
	return 0;

}