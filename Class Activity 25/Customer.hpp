#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP


#include <string>
#include "Address.hpp"

struct Customer {
	std::string name;
	int id;
	Address address;

	void displayCustomer();

};
#endif