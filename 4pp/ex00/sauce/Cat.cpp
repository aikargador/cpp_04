#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "Car's Default Constructor Called!" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat& car) : Animal(car) {
	std::cout << "Car's Copy Constructor Called!" << std::endl;
	*this = car;
}

Cat&	Cat::operator=(const Cat& car) {
	std::cout << "Car's Assignment Operator Overload Called!" << std::endl;
	if (this != &car)
		this->type = car.type;
	return (*this);
}

Cat::~Cat() {
	std::cout << "Car's Default Destructor Called!" << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "MEAOW" << std::endl;
}

std::string	Cat::getType() const {
	return(this->type);
}
