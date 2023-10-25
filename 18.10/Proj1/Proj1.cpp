#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include <iomanip>


void przyklad3()
{
	std::cout << "+---------------------------------------------------+\n";
	std::cout << "| Program obliczajacy pole powierzchni kola         |\n";
	std::cout << "| i obwod okregu dla zadanej wartosci promienia     |\n";
	std::cout << "+---------------------------------------------------+\n\n";

	double r;
	std::cout << "Podaj wartosc promienia r = ";
	std::cin >> r;

	double pole = M_PI * r * r;
	double obwod = 2 * M_PI * r;


	std::cout << std::setw(5) << std::setprecision(5);

	std::cout << "+------------+-----------+\n";
	std::cout << "| Pole pow.  | Obwod     |\n";
	std::cout << "+------------+-----------+\n";
	std::cout << "|     " << pole << " |    " << obwod << " |\n";
	std::cout << "+------------+-----------+\n";
}


void przyklad5()
{
	int a, b, c;
	std::cout << "a = ";
	std::cin >> a;
	std::cout << "b = ";
	std::cin >> b;
	std::cout << "c = ";
	std::cin >> c;

	int _min = std::min(a, std::min(b, c));
	int _mid = 0;
	int _max = std::max(a, std::max(b, c));

	if (a == _max) {
		if (b > c)
			_mid = b;
		else
			_mid = c;
	}
	else if (b == _max) {
		if (a > c)
			_mid = a;
		else
			_mid = c;
	}
	else if (c == _max) {
		if (a > b)
			_mid = a;
		else
			_mid = b;
	}

	std::cout << "1: " << _min << std::endl;
	std::cout << "2: " << _mid << std::endl;
	std::cout << "3: " << _max << std::endl;
}


int main()
{
	//przyklad3();
	przyklad5();

	return 0;
}