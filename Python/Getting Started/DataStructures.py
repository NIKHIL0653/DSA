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