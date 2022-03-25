#include<iostream>

using namespace std;

int main() {

	
	              // 1.STAR PRACTÝSE

	//first Step 

	int stars;
	cout << "Please enter stars number:";
	cin >> stars;
	
	
	//using for loop
	//for(start_number;if;plus_mix);
	//for{processes}
	

	//second step
	
	for (int i = 0; i < stars; ++i)
	{
		cout << "*" << endl;
	}
	return 0;
	
	             // 2.STAR PRACTÝSE

	// we made rectangle

	int size, width;
	cout << "Enter the width:";
	cin >> width;
	cout << "Enter the size:";
	cin >> size;

	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < width; ++j) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
		
	            //3.STAR PRACTÝSE

	//we made triangle

	int edge;
	cout << "Enter the edge:";
	cin >> edge;
	for (int i = edge; i > 0; --i) 
	{
     // --i,The asterisk character is written 1  missing in each line.
		for (int j = 0; j < i; ++j)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;

	            //4.STAR PRACTÝSE

	//we made reverse triangle

	int edge;
	cout << "Please Enter the edge size:";
	cin >> edge;

	for (int i = 0; i < edge; ++i) {
		for (int k = 0; k < i; ++k) {
			cout << " ";
		}
		for (int j = edge; j > i; --j) {
			cout << "*";

		}
		cout << endl;
	}
	return 0;
	
	             //5.STAR PRACTÝSE

	//we made reverse triangle

	int edge;
	cout << "Enter the Edge Size:";
	cin >> edge;

	for (int i = 0; i < edge; ++i) {
		for (int j = 0; j <= i; ++j) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
	
	          //6.STAR PRACTÝSE

		//we made reverse triangle
int edge;
cout << "Enter the edge:";
cin >> edge;

for (int i = 0; i < edge; ++i) {
	for (int k = edge - 1; k > i; --k) {
		cout << " ";
	}
	for (int j = 0; j <= i; ++j) {
		cout << "*";
	}
	cout<<endl;
}
return 0;

}