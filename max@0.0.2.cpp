#include <iostream>
#include <sstream>

int main()
{
	bool failure2 = false, failure = false;
	int max, max2;

	for (std::string string; std::getline(std::cin, string); ) {
		int numbers[10];
		std::istringstream stream(string);
		for (int i = 0; i < 10; ++i) {
			if (!(stream >> numbers[i])) {
				failure = true;
				break;
			}
		}
		max = numbers[0];
		for (int j = 0; j < 10; j++) {
			if (numbers[j]>max) {
				max = numbers[j];
			}
		}
		break;
	}

	for (std::string string2; std::getline(std::cin, string2); ) {
		int numbers2[10];
		std::istringstream stream(string2);
		for (int i = 0; i < 10; ++i) {
			if (!(stream >> numbers2[i])) {
				failure2 = true;
				break;
			}
		}
		max2 = numbers2[0];
		for (int j = 0; j < 10; j++) {
			if (numbers2[j] > max2) {
				max2 = numbers2[j];
			}
		}
		break;
	}

	if (!failure && !failure2) {
		std::cout << max + max2;
	}
	else {
		std::cout << "An error has occured while reading numbers from line" << std::endl;
		}

	return 0;
}
