# built in math funcs

x = 3.14
y = -4
z = 5.5
a = 6
b = 9

# result = round(z)
# if after decimal is < 5 it will give lower num
# if >= 5 it will give next higher number.

# result = abs(z) 
# if numbber is negative will give positive
# posotive cases it will just return the number.

# result = pow(5,4) 
# 1st arg is base num next is exponent value

# result = max(x,y,z,a,b)
# max() will return the highest value from the given arguments.
# ig no restrictions on the arguments

# result = min(x,y,z)
# min() will return the lowest value from the given arguments.

# print(result)

# Some other builtin math funcs
# apart from above funce these need math library

# import math

# x = 9.9

#print(math.pi)

#print(math.e)

#result = math.sqrt(x)

# result = math.ceil(x)
# dosent matter if after decimal is >=5 or <5
# it will always round to next largest int

# result = math. floor(x)
# will always give previous lower integer

# print(result)


# Some exercises 

# circumference of circle

# import math

# radius = float(input('Enter the radius of a circle: '))

# circumference = 2 * math.pi * radius

# print(f"The circumference is: {round(circumference, 2)} cm")

# Notice the 2 in the round func it specifies
# the number of decimal places u want the answer to be in


# Area of the circle

import math

radius = float(input("Enter the radius of a circle: "))

area = math.pi * pow(radius, 2)

print(f"The area of the circle is: {round(area, 2)} cm^2")
