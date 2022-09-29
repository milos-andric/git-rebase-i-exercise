#include <iostream>

void printRightAndWrongWay(std::string& input)
{
	std::cout << input;
	std::reverse(input.begin(), input.end());
	std::cout << input << std::endl;
}

int main(int argc, char* argv[])
{
	// make a program that takes a string as a parameter
	// first reverse it - Assigned to Philip
	// delete all all leading and trailing whitespaces from the string - Assigned to Terrence
	// and finally prints it first the right way then in reverse on the same line

	if (argc == 1){
		std::cout << "./a.out <your string here>" << std::endl;
		std::cout << "please specify string to process" << std::endl;
		return (1);
	}
	else if (argc != 2){
		return (1);
	}

}
