#include <iostream>
#include <fstream>
#include <string>
#include <vector>
int read_int() {
	
	std::cout << "Please introduce a number" << std::endl;
	
	int n;
	std::cin >> n;
	
	return n;

}

int main() {

	std::cout << "How many number do you want to write?" << std::endl;
	int total_numbers = read_int();

	std::vector<int> values;

	for (int i = 0; i < total_numbers; i++) {
		int tmp = read_int();
		values.push_back(tmp);

	}

	std::ofstream file;
	file.open("/Users/Filip/FOCP_Lab2/values.txt");
	
	for (int i = 0; i < total_numbers; i++) {
		file << values[i] << "\n";
	}

	file.close();

	std::vector<int> read_values;
	std::ifstream new_file("/Users/Filip/FOCP_Lab2/values.txt");

	if (new_file.is_open()) {
	
		std::string line;
	
	while(getline(new_file, line)) {
		read_values.push_back(std::stoi(line));
		}
	
		new_file.close();

	} else {
		std::cout << "There was a problem opening the file";
	}

	float sum = 0;

	for (int i = 0; i < total_numbers; i++) {
		sum += read_values[i];

	}
	
	float mean = sum / total_numbers;

		std::cout << "Mean = " << mean << std::endl;

		return 0;
}