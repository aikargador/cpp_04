#include "Animal.hpp"

Animal::Animal() : type("Amougus") {
	std::cout << "Animal's Default Constructor Called!" << std::endl;
}

Animal::Animal(const Animal& animal) {
	std::cout << "Animal's Copy Constructor Called!" << std::endl;
	*this = animal;
}

Animal&	Animal::operator=(const Animal& animal) {
	std::cout << "Animal's Assignment Operator Overload Called!" << std::endl;
	if (this != &animal)
		this->type = animal.type;
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal's Default Destructor Called!" << std::endl;
}

void	Animal::makeSound() const {
	std::cout << "你有什么问题" << std::endl;
}

std::string	Animal::getType() const {
	return(this->type);
}
