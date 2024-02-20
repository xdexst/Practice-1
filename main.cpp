#include<iostream>
using namespace std;

class Road
{
public:
	double length;
	int width;
	Road();
};

Road::Road()
{
	length = 111.1;
	width = 11111;
}

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "TeTest v1.2: Ok.\n"; 

	Road road;
	cout << " Length: " << road.length << endl;
	cout << "Width: " << road.width << endl;

	cout << "Введите длину дороги: " << endl;
	cin >> road.length;
	cout << "Введите ширину дороги: " << endl;
	cin >> road.width;
	
	return 0;



}