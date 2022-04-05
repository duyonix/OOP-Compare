#include <iostream>
#include <fstream>
using namespace std;

class Animal
{
public:
	// declare attributes
	string name;
	int age;

	// declare methods
	// define methods inside class
	void description()
	{
		cout << name << " is " << age << " years old\n";
	}
	void speak(string sound);
};

// define methods outside class
void Animal::speak(string sound)
{
	cout << name << " says " << sound << endl;
}

// create a function that takes an Animal object as an argument
void describe(Animal &animal)
{
	animal.description();
}

// create a function that sum 2 numbers
int sum(int a, int b)
{
	return a + b;
}

// create a random array of n numbers
int *randomArray(int n)
{
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
	return arr;
}

// find max number of int array
int max(int *arr, int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

// create a function that change numbers to string
string *changeToString(int *arr, int n)
{
	string *str = new string[n];
	for (int i = 0; i < n; i++)
	{
		str[i] = to_string(arr[i]);
	}
	return str;
}

// create a function that change numbers to char array
char *changeToChar(int *arr, int n)
{
	char *ch = new char[n];
	for (int i = 0; i < n; i++)
	{
		ch[i] = arr[i];
	}
	return ch;
}

// write a number to a file
void writeToFile(int n)
{
	ofstream file;
	file.open("number.txt");
	file << n;
	file.close();
}

int main()
{
	Animal animal;

	int n;
	cin >> n;

	animal.name = "rocky";
	animal.age = 10;

	animal.description();
	animal.speak("Grr");

	return 0;
}