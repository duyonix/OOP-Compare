#include<iostream>
#include<string>
using namespace std;

class Animal {
private:
	string name;
	string description() {
		return name + " is " + to_string(age) + " years old\n";
	}
protected:
	int age;
	string run(int distance) {
		return name + " run " + to_string(distance) + " miles\n";
	}
public:
	string species;
	string speak(string sound) {
		return name + " says " + sound + "\n";
	}

	Animal(string name, int age, string species) {
		this->name = name;
		this->age = age;
		this->species = species;
	}
	// getter methods
	string get_name() {
		return this->name;
	}
	// setter methods
	void set_name(string name) {
		this->name = name;
	}
};

int main() {
	Animal animal("rocky", 10, "dog");

	// cout << "name: " << animal.name << endl;         // error
	// cout << "age: " << animal.age << endl;           // error
	cout << "species: " << animal.species << endl;      // success

	// cout << animal.description() << endl;            // error
	// cout << animal.run(10) << endl;                  // error
	cout << animal.speak("Grr..") << endl;              // success

	cout << animal.get_name() << endl;	// rocky
	animal.set_name("kuro");
	cout << animal.get_name() << endl; // kuro

	return 0;
}
