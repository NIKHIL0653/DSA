#Arrays
# They are calles as lists in python
arr = [1,2,3]
print(arr)

# since they are dynamic in nature they can be used as stack
arr.append(4)
arr.append(5)
print(arr)

arr.pop()
print(arr)

arr.insert(1, 7)
print(arr)

arr[0] = 0
arr[3] = 0
print(arr)

# initiaize array of some size with 1 at each place
arr = [1] * 5
print(arr)

arr = [1,2,3]
print(arr[-1]) # this is nor wrong and will return the 1st element from the last

# Slicing arrays in python
# Sublists are very useful
arr = [1,2,3,4]
print(arr[1:3]) # this will return [2,3]

#unpacking
a,b,c = [1,2,3]

# Looping through the array
nums = [1,2,3,4]
for i in range(len(nums)):
    print(nums[i])

# Without index
for n in nums:
    print(n)
    
# both index and value
for i, n in enumerate(nums):
    print(i,n)
    
# loop through muktiple arrays simultaneously
# with unpacking
nums1 = [1,3,5]
nums2 = [2,4,6]

for n1, n2 in zip(nums1, nums2):
    print(n1,n2)
    
# list comprehensions
arr = [i+i for i in range(5)]
print(arr)    

# 2D Arrays/lists (Matrix DS)
arr = [[0]*4 for i in range(4)] # we create an array of 0's with 4 elements 
# then we add this array we created to the outer array 4 times with the inner loop we are running
print(arr) # this will make a 4x4 matrix where each element will be unique

arr = [[0] * 4] * 4 # this looks correct but isn't
# this will create a 4x4 matrix but all the inner arrays (each row of the matrix) will be the same
# so if we modify any one of the row all other rows will be modified
# the previous approach will created uniques elements

# Strings:
s = "abc"
print(s[0:2])

s += "def"
print(s)
# string modification is an O(n) process

print(int("123") + int("123"))
print(str(123) + str(123))

strings = ["ab", "cd", "ef"]
print("".join(strings))

# Hashset

mySet = set() # we can insert and search values in constant time
mySet.add(1)
mySet.add(2)
print(mySet) # Note: there cant be any duplicates
print(len(mySet)) 

print(1 in mySet)
print(2 in mySet)
print(3 in mySet)

mySet.remove(2)
print(2 in mySet)

# set comprehension
# we can insert multiple values by running a loop
mySet = {i for i in range(10)}
print(mySet)

# Hashmap aks dict
myMap = {}
myMap["name"] = "John"
myMap["age"] = 30
# key and value
# keys cannot be duplicate
print(myMap)
# Also
myMap = {"alice": 90, "bob": 70} #another way of initializing a hashmap

# hashmaps are called dictionaries in python

# Dict comprehensions
myMap = { i: 2*i for i in range(3)} # here we created a map where keys are inserted i+1
# and values are set 2*i correspondingly
print(myMap)

# Looping through the map
mySet = { "alice": 90, "bob": 70}

for key in myMap:
    print(key, myMap[key])
    

for val in myMap.values():
    print(val)
    
for key, val in myMap.items():
    print(key, val)
    
# tuples
tup = (1,2,3)
# tuples are immutable, we cant modify them
print(tup)
print(tup[0])
print(tup[-1])

# How tuples can be used in hashmaps/sets
myMap = {(1,2): 3}
print(myMap[(1,2)])

mySet = set()
mySet.add((1,2))

# Note: Lists cannot be used in hashmaps as they are not hashable
# myMap = [[3,4]] = 5 # this will not work

# Heaps
import heapq

minHeap = [] # By default heaps in python are minheaps
heapq.heappush(minHeap, 3)
heapq.heappush(minHeap, 1)
heapq.heappush(minHeap, 2)

print(minHeap) # [1, 3, 2] # heaps are not sorted lists

# popping numbers from heap
while len(minHeap):
    print(heapq.heappop(minHeap))
    
# How to make max heaps
# Use minheaps and multiply by -1 when push and pop
import heapq
maxHeap = []
heapq.heappush(maxHeap, -3) # -3 is pushed into the heap
heapq.heappush(maxHeap, -1)
heapq.heappush(maxHeap, -2)

print(-1 * maxHeap[0]) # [-2, -3, -1]

while len(maxHeap):
    print(-1 * heapq.heappop(maxHeap))
    
# How to put given numbers in a heap
arr = [1,2,3,4,5]
heapq.heapify(arr)

while arr:
    print(heapq.heappop(arr))