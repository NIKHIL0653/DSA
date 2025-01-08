# python is dynamically typed
    # hence no need to specify data type
# python is case sensitive
# python has built in support for lists, dictionaries, sets, etc.

#Note:
n = 0
n = n + 1 # allowed
n += 1 # allowed
n++ # not allowed

# In python NULL is None

n = 4
n = None

# In python we dont need parentheses in conditionals
# but required in case of multi line conditional

n, m = 1,2
if((n>2 and
    n != m)or n == 1):
    n += 1
 
# loops
n = 0
while n < 5:
    print(n)
    n += 1
    
for i in range(5):
    print(i) # 5 is not included ans it starts from 0

for i in range(2,6):
    print(i) # 2 to 5
    
for i in range(5,1,-1):
    print(i) # we are printing in reverse 
    # we need to show for decrement but not for increment 
    # it happens on its own
    
# Math:
print(5/2) #2.5
print(5//2) #2.0
print(-3 // 2) # = -2 but most languages will give 1 as they tend to round dow to near 0
# in pytho's case it rounds the value down so instead of 1 we get 2
print(int(3/2)) # =-1 we can typecast the valur to get the desired value

print(10%3) 
print(-10%3) # will give us 2 which is different from other c based languages
# to maintain consistency used math library
import math
print(math.fmod(-10,3)) # will give us -1 which is consistent with other

print(math.floor(3/2))
print(math.ceil(3/2))
print(math.sqrt(2))
print(math.pow(2, 3))

# max min int
float("inf")
float("-inf")

