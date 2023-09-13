#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(int c, char **v) {
	if (c > 1) {
		std::string tst = v[1];
		if (!tst.compare("2"))
		{
			std::cout << "chupapi munyanyu!" << std::endl;
			WrongCat	fakeCat;
			WrongAnimal	amougus;
			WrongAnimal	*myousaf = &fakeCat;
			WrongAnimal	*munyanyu = &amougus;

			myousaf->makeSound();
			munyanyu->makeSound();
		}
		else
		{
			Cat	car;
			Dog	dawg;
			Animal	animus;
			Animal	*myousaf = &car;
			Animal	*myousaf2 = &dawg;
			Animal	*munyanyu = &animus;

			myousaf->makeSound();
			myousaf2->makeSound();
			munyanyu->makeSound();
		}
	}
	else
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " ." << std::endl;
		std::cout << i->getType() << " ." << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		return 0;
	}
}