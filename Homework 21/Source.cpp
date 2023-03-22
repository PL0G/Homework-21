#include <iostream>
#include <cstdlib>
#include <ctime>
int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	int Y, X;
	std::cout << "Enter two numbers ->";
	std::cin >> Y >> X;
	int* py = &Y;int* px = &X;
	std::cout << "Mean of numbers = " << (*py + *px) / 2;






	return 0;
}