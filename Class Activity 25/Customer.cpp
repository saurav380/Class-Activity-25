#include "Customer.hpp"
#include <iostream>

void Customer::displayCustomer() {
	std::cout << "Customer Name: " << name << std::endl;
	std::cout << "Customer ID: " << id << std::endl;
	address.displayAddress();

}
