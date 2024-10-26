#include "Address.hpp"
#include <iostream>

void Address::displayAddress() {
	std::cout << "Address: " << street << ", " << city << ", " << zipcode << std::endl;

}