name = input("What is your name?:")
print(f"Hello {name}")

age = input("What is your age?: ")
print(age)

# age = age + 1 # this will give error
# whenever we take input it is always is string
# so we need to typecast to int before we oeperate.

age = int(age)

new_age = age + 1
print(f"new_age is {new_age}")

# Better wy to type cast int input
age = int(input("What is your age?: "))