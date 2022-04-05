#include<iostream>
using namespace std;

class Animal {};

int main() {
    Animal animal;

    cout << typeid(Animal).name() << endl;  // class Animal
    cout << typeid(animal).name() << endl;  // class Animal

    return 0;
}