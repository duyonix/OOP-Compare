#include<iostream>
using namespace std;

class Animal {
private:
    static int count;
public:
    Animal() {
        count++;
    }
    ~Animal() {
        count--;
    }
    static int show() {
        return count;
    }
};

int Animal::count = 0;

int main() {
    Animal animal1;
    Animal animal2;

    cout << "Number of Animal: " << Animal::show() << endl; // 2 instance

    return 0;
}