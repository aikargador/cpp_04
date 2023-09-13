#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "WrongCat's Default Constructor Called!" << std::endl;
	this->type = "Imposter Cat";
}

WrongCat::WrongCat(const WrongCat& wrongCar) : WrongAnimal(wrongCar) {
	std::cout << "WrongCat's Copy Constructor Called!" << std::endl;
	*this = wrongCar;
}

WrongCat&	WrongCat::operator=(const WrongCat& wrongCar) {
	std::cout << "WrongCat's Assignment Operator Overload Called!" << std::endl;
	if (this != &wrongCar)
		this->type = wrongCar.type;
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat's Default Destructor Called!" << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << "BZZZZZZZZZZZZzzz" << std::endl;
}

std::string	WrongCat::getType() const {
	return(this->type);
}