#include<iostream>
using namespace std;

class Animal {
private:
    string name;
    int age;
public:
    // default constructor
    Animal() {
        name = "Animal";
        age = 0;
    }

    // parameterized contructor
    Animal(string name, int age) {
        this->name = name;
        this->age = age;
    }

    // copy constructor
    Animal(const Animal& other) {
        this->name = other.name;
        this->age = other.age;
    }

    // destructor
    ~Animal() {
        cout << "Animal destructor" << endl;
    }

    void description() {
		cout<< name << " is "<< age << " years old\n"; 
	}
};

int main() {
    // default constructor
    Animal animal1;
    animal1.description();  // Animal is 0 years old

    // parameterized constructor
    Animal animal2("Rocky", 10);
    animal2.description();  // Rocky is 10 years old 

    // copy constructor
    Animal animal3(animal2);
    animal3.description();  // Rocky is 10 years old
    
    // destructor will call before the program finish
    return 0;
}
