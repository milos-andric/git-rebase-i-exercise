#include <iostream>

void reverse (std::string& input);

void reverse (std::string& input)
{
	char tab[input.size()];

	for(int i = 0; i < input.size() - 1; i++){
		tab[i] = input.at(input.size() - i - 1);
	}
	tab[input.size() - 1] = '\0';
	std::string temp(tab);
	std::cout << temp << std::endl;
}

int main(int argc, char* argv[])
{
	// make a program that takes a string as a parameter
	// first reverse it
	// delete all all leading and trailing whitespaces from the string
	// and finally prints it first the right way then in reverse on the same line
	std::string test = " hellooooooooo WORLD";
	reverse(test);
}
