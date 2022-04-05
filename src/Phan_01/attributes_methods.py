class Animal:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    # declare and define methods inside class
    def description(self):
        return f"{self.name} is {self.age} years old"


# declare and define methods outside class
def func(self, sound):
    return f"{self.name} says {sound}"


Animal.speak = func

animal = Animal("rocky", 10)

print(animal.description())  # rocky is 10 years old
print(animal.speak("Grr"))  # rocky says Grr


# class Animal:
#     name = ""

#     def description(self):
#         # use self. to access attributes
#         return f"{self.name} is {self.age} years old"


# Animal.age = 0

# animal = Animal()
# animal.species = "dog"

# print(animal.species)  # dog
# # print(Animal.species)   # error