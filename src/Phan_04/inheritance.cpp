#include<iostream>
using namespace std;

// Base or Super Class
class Animal {
protected:
	string name; 
	int age;
public:
	Animal() {
		name = "";
		age = 0;
		cout << "Animal default constructor\n";
	}
	Animal(string name, int age) {
		this->name = name;
		this->age = age;
		cout << "Animal parameterized constructor\n";
	}
	~Animal() {
		cout << "Animal destructor\n";
	}
	void description() {
		cout << "Animal " << name << " is " << age << " years old\n";
	}
};

// Inherited or Subclass
class Dog : public Animal {
private:
	// new attributes
    string breed;
public: 
	Dog() {
        breed = "";
		cout << "Dog default constructor\n";
	}
    // inherit the parameterized constructor from the parent
    Dog(string name, int age, string breed) : Animal(name, age){
        this->breed = breed;
        cout << "Dog parameterized constructor\n"; 
    }
	~Dog() {
		cout << "Dog destructor\n";
	}
	// new methods
	void bark() {
		cout << name << " is barking\n";
	}
	// override methods
	void description() {
		cout << "Animal " << name << " is " << age << " years old and is a " << breed << endl;
	}
};

int main() {
	Animal animal("Kuro", 5);
	animal.description();	// Animal Kuro is 5 years old

	Dog dog("Rocky", 10, "Husky");
	dog.description();	// Dog Rocky is 10 years old and is a Husky

	return 0;
}
