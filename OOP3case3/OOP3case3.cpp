// OOP3case3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Digit {
private:
	int dig; //число
public:
	Digit() {
		dig = 0;
	}
	Digit(int iDig) {
		dig = iDig;
	}
	void Show() {
		cout << dig << "\n";
	}
	//перегружаем четыре оператора обратите внимания, все операторы
	//бинарные, поэтому мы передаем в них один параметр - это операнд,
	//который будет находиться справа от оператора в выражении
	//левый операнд передается с помощью this
	Digit operator+(const Digit& N)
	{
		Digit temp;
		temp.dig = dig + N.dig;
		return temp;
	}
	Digit operator-(const Digit& N)
	{
		Digit temp;
		temp.dig = dig - N.dig;
		return temp;
	}
	Digit operator*(const Digit& N)
	{
		Digit temp;
		temp.dig = dig * N.dig;
		return temp;
	}
	Digit operator%(const Digit& N)
	{
		Digit temp;
		temp.dig = dig % N.dig;
		return temp;
	}
};
void main()
{
	//проверяем работу операторов
	Digit A(8), B(3);
	Digit C;
	cout << "\Digit A : \n";
	A.Show();
	cout << "\Digit B : \n";
	B.Show();
	cout << "\noperator + :\n";
	C = A + B;
	C.Show();
	cout << "\noperator - :\n";
	C = A - B;
	C.Show();
	cout << "\noperator * :\n";
	C = A * B;
	C.Show();
	cout << "\noperator % :\n";
	C = A % B;
	C.Show();
}