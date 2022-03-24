#include<iostream>
using namespace std;

int main()
{
	 

	                        // Different calculator

	int num1;
	int num2;
	int conclusion;
	char process;

    //note1:the char data type can be assigned an incorrect data type and takes up 1 byte of space in memory
	cout << "Enter The Process(like 20+32 or 12/3)" << endl;
	cout << "==> "; cin >> num1 >> process >> num2;

	
	// process for collection
	if (process == '+') {
		conclusion = num1 + num2;
	}
	//process for extraction
	else if (process == '-') {
		conclusion = num1 - num2;
	}
	//for the multiplication process
	else if (process == '*') {
		conclusion = num1 * num2;
	}
	// process for the division

	else if (process == '/') {
		if (num2 == 0) {
			cout << "the partition does not become zero" << endl;
			return 0;
		}
		conclusion = num1 / num2;
	}
	//for the remaining calculation

	else if (process == '%') {
		
		conclusion = num1 % num2;
	}
		
	else {
		cout << "you entered wrong data" << endl;
		return 0;
	}

	cout << "Conclusion:" << conclusion << endl;
	cout << num1 << " " << process << " " << num2 << " = " << conclusion;
	return 0;
	



	             // Counting Number 
 
	// a write operation that starts with 1 and ends with the number that the user says

	int number;
	cout << "You want me to count until I run away:"; cin >> number;
	int i = 1;
	while (i <= number) {
		cout << i << "\t";
		++i;
	}
	

	            // Primality Testing 

	int number = 0;
	int counter = 1;
	char choice = 'y';
	while(choice=='y') {
		cout << "enter a number that you don't know if is prime or not "<<endl;
		cin >> number;
		if (number > 2) {
			while (counter < number - 1) {
				counter++;
				/* is the number divided exactly by the counter? */
				if (number % counter == 0)
				{
					cout <<number<<"=is not Prime number" << endl;
					break;
				}
				else if (counter + 1 == number) {
					cout << number << "=is Prime number" << endl;
				}
				
			}//while
		}//if
		else if (number == 2) {
			cout << number << "=is the smallest Prime number" << endl;
		}
		else {
			cout << "The prime number is searched for in positive numbers" << endl;
		}
		cout << "y-continue,n-exit" << endl;
		cin >> choice;
		counter = 1;
    }//while
	return 0;
		

}