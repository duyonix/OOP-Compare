# Base or Super Class
class Animal:
    def __init__(self, name, age):
        self.name = name
        self.age = age
        print("Animal constructor")

    def __del__(self):
        print("Animal destructor")

    def description(self):
        print(f"Animal {self.name} is {self.age} years old")


# Inherited or Subclass
class Dog(Animal):
    def __init__(self, name, age, breed):
        super().__init__(name, age)

        # new attributes
        self.breed = breed
        # Animal.__init__(self, name, age) # the same to super()
        print("Dog constructor")

    def __del__(self):
        super().__del__()
        # Animal.__del__(self)             # the same to super()
        print("Dog destructor")

    # new methods
    def bark(self):
        print(f"{self.name} is barking")

    # override methods
    def description(self):
        print(f"Dog {self.name} is {self.age} years old and is a {self.breed}")


animal = Animal("Kuro", 5)
animal.description()  # Animal Kuro is 5 years old

dog = Dog("Rocky", 10, "Husky")
dog.description()  # Dog Rocky is 10 years old and is a Husky
