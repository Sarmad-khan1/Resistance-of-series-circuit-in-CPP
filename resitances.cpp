#include <iostream>
using namespace std;
double resistors(double resist[], int size);
int main()
{
	system("cls");
	int size;
	cout<<"Enter the number of resisters in series: ";
	cin>>size;
	
	double resist[size];
	
	for( int i=0; i<size; i++)
	{
		cout<<"Enter the values of resistances in series: ";
		cin>>resist[i];
	}
	double resistor=resistors(resist, size);
	cout<<"Total Resistance in (ohms) is: "<<resistor<<endl;
	return 0;
}
double resistors(double resist[], int size)
{
	float sum;
	for(int i=0; i<size; i++)
	{
		sum = sum + resist[i];
	}
	return sum;
}