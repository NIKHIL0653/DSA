# String methods

phone_number = input("Enter your number: ")

# result = len(name) # returns length of string/array in int format
# result = name. find("o") # returns first occurence of the character in string from start
# result = name.rfind("q") # returns first occurence of the character in string from last
# name = name. capitalize() # Caps only the first char of the string
# name = name. upper() # Converts all the chars in string to capital
# name = name. lower() # converts all the chars is string to lower
# result = name.isdigit() # checks if input is number or not return true/false
# result = name.isalpha() # checks if input has only letters or not, will return in case of numbers (Bro123)/ space in between
# result = phone_number.count("-") # counts numb of occurence of the char/init/etc specified
result = phone_number.replace("-", "")

print(result)