#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dawg's Default Constructor Called!" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog& dawg) : Animal(dawg) {
	std::cout << "Dawg's Copy Constructor Called!" << std::endl;
	*this = dawg;
}

Dog&	Dog::operator=(const Dog& dawg) {
	std::cout << "Dawg's Assignment Operator Overload Called!" << std::endl;
	if (this != &dawg)
		this->type = dawg.type;
	else
		std::cout << "what da dawg doin?" << std::endl;
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dawg's Default Destructor Called!" << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "BYARK" << std::endl;
}

std::string	Dog::getType() const {
	return(this->type);
}
