#include <iostream>

void reverse (std::string& input);

void reverse (std::string& input)
{
	std::reverse(input.begin(), input.end());
}

int main(int argc, char* argv[])
{
	// make a program that takes a string as a parameter
	// first reverse it
	// delete all all leading and trailing whitespaces from the string
	// and finally prints it first the right way then in reverse on the same line
	std::string test = " hellooooooooo WORLD";
	reverse(test);
	std::cout << test << std::endl;
}
