# 1. Inbuilt polymorphic functions
# len for string
print(len("Duy Onix"))  # 8

# len for tuple
print(len((1, 2, 3)))  # 3

# 2. User-defined polymorphic functions
def plus(a, b, c=0):  # c = 0: default value
    return a + b + c


print(plus(1, 2))  # 3
print(plus(1, 2, 3))  # 6

# 3. Polymorphism with class methods
class Dog:
    def speak(self):
        print("Woof Woof")


class Cat:
    def speak(self):
        print("Meow Meow")


dog = Dog()
cat = Cat()

# loop through each instance of Dog and Cat
for animal in (dog, cat):
    animal.speak()
    # Woof Woof
    # Meow Meow

# 4. Polymorphism with Inheritance
class Animal:
    def description(self):
        print("This is an animal")


class Dog_Inheritance(Animal):
    def description(self):
        print("This is a dog")


class Cat_Inheritance(Animal):
    def description(self):
        print("This is a cat")


animal = Animal()
dog = Dog_Inheritance()
cat = Cat_Inheritance()

animal.description()  # This is an animal
dog.description()  # This is a dog
cat.description()  # This is a cat

# 5. Polymorphism with a Function and objects

# function that can pass any type of params
def polymorphism(obj):
    obj.speak()


dog = Dog()
cat = Cat()

polymorphism(dog)  # Woof Woof
polymorphism(cat)  # Meow Meow
