# Naming Conventions

# Class names should follow the CapWords convention,
# which is a type of convention that capitalizes the
# first letter of each word. For example, when creating
# a class, MyDog is preferred over my_dog.

class MyDog:
    def __init__(self, name):
        self.name = name
 
    def show_name(self):
        print("My dog's name is: ", self.name)
 
x = MyDog('Pepper')

# Indentation

# Indentation is very important in Python because it is
# what groups lines of codes together. There should be 
# 4 spaces per indentation. The example below is 
# considered bad practice because it only has 2 
# spaces per indentation.

def calculate_force(mass, acc):
  force = mass * acc
  return force

# The example below shows 4 spaces per indentation.

def calculate_force(mass, acc):
    force = mass * acc
    return force

# Comments

# Good code should always contain comments and 
# should be updated to augment the code. There are two 
# types of comments: block comments and inline comments.

# Block comments are used when there have multiple
# lines of comments that we’d like to include with 
# our code.

def calculate_force(mass, acc):
    # This function calculates the force based on mass and acceleration. 
    # Mass should be in kilograms and
    # acceleration should be in meters per second squared.
    force = mass * acc
    return force
