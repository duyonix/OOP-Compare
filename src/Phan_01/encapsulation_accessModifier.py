class Animal:
    def __init__(self, name, age, species):
        # private attributes
        self.__name = name

        # protected attributes
        self._age = age

        # public attributes
        self.species = species

    # private methods
    def __description(self):
        return f"{self.__name} is {self._age} years old"

    # protected methods
    def _run(self, distance):
        return f"{self.__name} run {distance} miles"

    # public methods
    def speak(self, sound):
        return f"{self.__name} says {sound}"

    # getter methods
    def get_name(self):
        return self.__name

    # setter methods
    def set_name(self, name):
        self.__name = name

    # property functions
    name = property(get_name, set_name)

    # using property decorator
    # getter methods
    @property
    def name(self):
        return self.__name

    # setter methods
    @name.setter
    def name(self, name):
        self.__name = name


animal = Animal("rocky", 10, "dog")

# check attributes access modifier
# print("name:", animal.__name)       # error
# print("age: ", animal._age)         # error
print("species:", animal.species)  # success

# check methods access modifier
# print(animal.__description())     # error
# print(animal._run(10))            # error
print(animal.speak("Grr.."))  # success

print(animal.get_name())  # rocky
animal.set_name("kuro")
print(animal.get_name())  # kuro

print(animal.name)  # kuro
animal.name = "yasuo"
print(animal.name)  # yasuo
