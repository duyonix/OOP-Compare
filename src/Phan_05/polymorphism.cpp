#include <iostream>
using namespace std;

// Abstract Class
class Animal
{
public:
	// virtual functions
	virtual void show()
	{
		cout << "This is an animal\n";
	}
	// pure virtual functions
	virtual void speak() = 0;
	// pure destructor
	virtual ~Animal()
	{
		cout << "Animal destructor\n";
	}
};

class Dog : public Animal
{
public:
	void show()
	{
		cout << "This is a dog\n";
	}
	void speak()
	{
		cout << "Woof Woof\n";
	}
	~Dog()
	{
		cout << "Dog destructor\n";
	}
};

class Cat : public Animal
{
};

int main()
{
	// Animal animal;		// error: Abstract Class
	Dog dog; // success: Not an Abstract Class
	// Cat cat;				// error: Abstract Class
	Animal *animal1 = &dog; // success: use pointer class Animal

	animal1->show(); // This is a dog -> successfully

	// Test pure destructor
	Animal *animal2 = new Dog;
	delete animal2; // Dog destructor
					// Animal destructor

	return 0;
}
