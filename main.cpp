	const auto whitespace = " ";
	const auto begin = input.find_first_not_of(whitespace);
	const auto end = input.find_last_not_of(whitespace);
	const auto range = end - begin + 1;
	input = input.substr(begin, range);
int main(int argc, char* argv[])
{
	// make a program that takes a string as a parameter
	// first reverse it - Assigned to Philip
	// delete all all leading and trailing whitespaces from the string
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
