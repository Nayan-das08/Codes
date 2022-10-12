def Dog():
    def __init__(self, name, age):
        self.name = name
        self.age = age 
    
    def bark(self):
        print(self.name + " is barking!")

#__________________________________________

d = Dog('tommy', 7)
d.bark()