from datetime import date


class Animal:
    # static attributes - class attributes
    count = 0

    def __init__(self, name, age):
        self.name = name
        self.age = age

    # instance methods
    def description(self):
        print(f"{self.name} is {self.age} years old")

    # a class method to create a Animal object by birth year.
    @classmethod
    def fromBirthYear(cls, name, year):
        return cls(name, date.today().year - year)

    # a static method to check if a Animal is old or not.
    @staticmethod
    def isOldEnough(age):
        return age > 10


animal = Animal("Rocky", 10)
animal.description()  # Rocky is 10 years old

print(Animal.count)  # access through class
print(animal.count)  # access through object

animal1 = Animal("Haruto", 7)  # parameterized constructor
animal2 = Animal.fromBirthYear("Kuro", 2010)  # constructor by using class method

print(animal1.age)  # 7
print(animal2.age)  # 11

print(Animal.isOldEnough(15))  # True

animal1.count = 1

print(Animal.count)  # 0
print(animal1.count)  # 1 -> change
print(animal2.count)  # 0

Animal.count = 2
print(Animal.count)  # 2 -> change
print(animal1.count)  # 1 -> still have value 1
print(animal2.count)  # 2 -> change with Animal
