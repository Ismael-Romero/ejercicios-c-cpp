#include <iostream>
#include <cstring>
using namespace std;


void print_table_ASCII(char from, char to){

	std::cout << "Printable ASCII \n";

	for(char c{from}; c <= to; c++){
		std::cout << c << ( (c+1) % 8 ? ' ' : '\n' );
	}

	std::cout << "\n";
}

int main(){
	//Pritable ASCII -> DEC
	print_table_ASCII(32, 126);

	//Printable ASCII -> OCT
	print_table_ASCII(0040, 0176);

	//Printable ASCCI -> HEX
	print_table_ASCII(0x20, 0x7e);
	return 0;
}
