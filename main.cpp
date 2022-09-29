#include <iostream>

void reverse (std::string& input);

void reverse (std::string& input)
{
	char tab[500];

	input.copy(tab, 499);
	for(int i = 0; i < 500; i++){
		tab[i] = input[499 - i];
	}
}

int main(int argc, char* argv[])
{
	// make a program that takes a string as a parameter
	// first reverse it
	// delete all all leading and trailing whitespaces from the string
	// and finally prints it first the right way then in reverse on the same line
}
