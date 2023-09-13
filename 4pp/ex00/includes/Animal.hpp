#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

//A class that declares or inherits a virtual function is called a polymorphic class💡
class	Animal {
protected:
	std::string	type;
public:
	Animal();
	Animal(const Animal& animal);
	Animal& operator=(const Animal& animal);
	~Animal();

	virtual	void makeSound() const;
	std::string	getType() const;
};

#endif