import copy


class Animal:
    # default constructor
    def __init__(self):
        self.name = "Animal"
        self.age = 0

    # parameterized constructor
    def __init__(self, name, age):
        self.name = name
        self.age = age

    # destructor
    def __del__(self):
        print("Animal destructor")

    def description(self):
        print(f"{self.name} is {self.age} years old")


# default constructor
# animal1 = Animal()    # error 

# parameterized constructor
animal2 = Animal("Rocky", 10)
animal2.description()   # Rocky is 10 years old

# copy class by using copy library
clone1 = copy.copy(animal2)  # shallow copy of animal
clone2 = copy.deepcopy(animal2)  # deep copy of animal

clone1.description()    # Rocky is 10 years old
clone2.description()    # Rocky is 10 years old
