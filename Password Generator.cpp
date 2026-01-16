#include <iostream>
#include <list>
#include <string>
#include <random>

std::list<std::string> passwords = {"Q","W", "E", "R", "T", "Y", "U", "I", "O", "P", "A", "S", "D", "F", "G", "H", "J", "K", "L", "Z" , "X" , "C", "V", "B", "N", "M", 
"q", "w", "e", "r","y", "u", "i", "o", "p" , "a", "s", "d", "f", "g", "h", "j", "k", "l", "z", "x", "c", "v", "b", "n", "m", 
"1", "2", "3", "4", "5", "6", "7", "8", "9", "0", "!", "@", "#","$", "%", "^", "&", "*", "(", ")", "-", "_", "+", "{", "}", "[", "]", ";", "'",":",";", ",", "<", ">", ".", "/", "?", "~", "`" };
int options = 0;

int generate();
int exit();

int main()
{
	
		std::cout << "*****************************" << std::endl;
		std::cout << "*   Password Generator v1   *" << std::endl;
		std::cout << "*****************************" << std::endl;
		std::cout << "*[1] Generate Password      *" << std::endl;
		std::cout << "*[2] Exit                   *" << std::endl;
		std::cout << "*****************************" << std::endl;
		std::cin >> options;

		while(options == 1 || options == 2) {
			switch(options) {
				case 1:
					generate();
					break;

				case 2:
					exit();
					break;
				default:
					std::cout << "Invalid Option" << std::endl;
			}
		}

		return 0;
}

int generate() {

    srand(static_cast<unsigned int>(time(nullptr)));
    int length;
    std::cout << "Enter the length of the password: ";
    std::cin >> length;
    std::string password = "";
    for(int i = 0; i < length; i++) {
        int index = rand() % passwords.size();
        auto it = passwords.begin();
        std::advance(it, index);
        password += *it;
    }

    std::cout << "Generated Password: " << password << std::endl;
    return 0;
}


int exit() {
	std::cout << "Exiting Password Generator..." << std::endl;
	return 0;
}