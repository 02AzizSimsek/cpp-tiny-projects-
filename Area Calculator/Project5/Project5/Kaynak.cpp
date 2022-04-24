#include <iostream>

using namespace std;

float circle_area(int r);
int square_area(int edge);
int rectangle_area(int width, int height);
void area_write(float area);
int main()
{
	char choice;
	cout << "Which Shape Do You Want To Calculate The Area Of ?" << endl;
	cout << "(Circle :c,Rectangle:r Square:s)=";
	cin >> choice;

	float area;
	switch (choice) 
	{
	case 'c':
		int radius;
		cout << "Enter the radius:";
		cin >> radius;
		area = circle_area(radius);
		area_write(area);
		break;
    
	case 'r':
		int width, height;
		cout << "Enter the widht and height"<<endl;
		cout << "width:";  cin >> width;
		cout << "height:"; cin >> height;
		area = rectangle_area(width, height);
		area_write(area);
		break;
	
	case 's':
		int edge;
		cout << "Enter the edge length:";
		cin >> edge;
		area = square_area(edge);
		area_write(area);
		break;

	default:
		cout << "Unsupported shape !" << endl;
		break;
		
	}
	  return 0;
}
	float circle_area(int r)
	{
		return 3.14 * r * r;
	}

	int rectangle_area(int width, int height)
	{
		return width * height;
	}

	int square_area(int edge)
	{
		return edge * edge;
	}

	void area_write(float area) {
		cout << "Shape area:" << area << endl;
	}

