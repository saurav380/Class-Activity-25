#ifndef Address_HPP
#define ADDRESS_HPP

#include <string>

struct Address {
	std::string street;
	std::string city;
	std::string zipcode;
	void displayAddress(); 

};
#endif