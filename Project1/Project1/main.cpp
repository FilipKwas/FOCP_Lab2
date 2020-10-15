#include <iostream>

int main() {
	
	// 1 - Read a number form a console
	// 2 - Figure out if the number is prime or not
	// 3 - Print the result to the console

	std::cout << "Please introduce a number: " << std::endl;

	int number;
	std::cin >> number;

	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			std::cout << "Your number is not prime" << std::endl;
			return 0;
		}
	}
	
	std::cout << "Your number is prime" << std::endl;

	return 0;
}
