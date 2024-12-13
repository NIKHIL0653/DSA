# while loopas and for loops

# age = int(input("Enter your age: "))

# while age < 0:
#     print("Age can't be negative")
#     age = int(input("Enter your age: "))

# print(f"You are {age} years old")

# food = input("Enter a food you like (q to quit): ")

# while not food == "q":
#     print(f"You like {food}")
#     food = input("Enter another food you like (q to quit): ")

# print("bye")


# Compound Interest code

# principle = 0
# rate = 0
# time = 0

# while True:
#     principle = float(input("Enter the principle amount: ") )
#     if principle <= 0:
#         print("Principle can't be less than or equal to zero")
#     else:
#         break
    
# while True:
#     rate = float(input("Enter the Interest Rate: ") )
#     if rate <= 0:
#         print("Interest Rate can't be less than or equal to zero")
#     else:
#         break
    
# while True:
#     time = float(input("Enter the time: ") )
#     if time <= 0:
#         print("Time can't be less than or equal to zero")
#     else:
#         break
    
# while True:
#     time = int(input("Enter the time in years: "))
#     if time < 0:
#         print("Time can't be less than zero")
#     else:
#         break

# total = principle * pow((1 + rate /100), time)
# print(f"Balance after {time} year/s: ${total :. 2f}")

# For loops

# for x in range(1, 11): # 2nd num is exclusive
#     print(x)

# for x in reversed(range(1, 11)):
#     print(x)

# print ("HAPPY NEW YEAR!")

for x in reversed(range(1, 11,2)):
    print(x)

print ("HAPPY NEW YEAR!")

