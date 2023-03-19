#include "Cat.hpp"
#include "Dog.hpp"

int main(){
	// Animal test;

	Dog dog1;
	Dog dog2(dog1);

	dog1.makeSound();
	dog2.makeSound();

	Cat cat1;
	Cat cat2(cat1);

	cat1.makeSound();
	cat2.makeSound();

	// const Animal* meta = new Animal();
   	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	// meta->makeSound();

	// delete meta;
	delete j;
	delete i;

	cat1.getBrain()->setIdea(0, "cat1 idea 1");
	cat1.getBrain()->setIdea(1, "cat1 idea 2");
	cat2.getBrain()->setIdea(0, "cat2 idea");
	Cat cat3(cat1);
	cat3.getBrain()->setIdea(1, "cat3 new idea!");
	Cat cat4 = cat1;
	cat4.getBrain()->setIdea(1, "cat4 new idea!");
	std::cout << cat1.getBrain()->getIdea(0) << std::endl;
	std::cout << cat1.getBrain()->getIdea(1) << std::endl;
	std::cout << cat2.getBrain()->getIdea(0) << std::endl;
	std::cout << cat3.getBrain()->getIdea(0) << std::endl;
	std::cout << cat3.getBrain()->getIdea(1) << std::endl;
	std::cout << cat4.getBrain()->getIdea(0) << std::endl;
	std::cout << cat4.getBrain()->getIdea(1) << std::endl;
	dog1.getBrain()->setIdea(0, "dog1 idea 1");
	dog1.getBrain()->setIdea(1, "dog1 idea 2");
	dog2.getBrain()->setIdea(0, "dog2 idea");
	Dog dog3(dog1);
	dog3.getBrain()->setIdea(1, "dog3 new idea!");
	Dog dog4 = dog1;
	dog4.getBrain()->setIdea(1, "dog4 new idea!");
	std::cout << " ------ideas------- \n" << std::endl;
	std::cout << dog1.getBrain()->getIdea(0) << std::endl;
	std::cout << dog1.getBrain()->getIdea(1) << std::endl;
	std::cout << dog2.getBrain()->getIdea(0) << std::endl;
	std::cout << dog3.getBrain()->getIdea(0) << std::endl;
	std::cout << dog3.getBrain()->getIdea(1) << std::endl;
	std::cout << dog4.getBrain()->getIdea(0) << std::endl;
	std::cout << dog4.getBrain()->getIdea(1) << std::endl;
	std::cout << " ------ideas------- \n" << std::endl;

	return 0;
}
