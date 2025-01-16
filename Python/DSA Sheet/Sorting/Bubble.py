# We check 2 adjacent numbers and compare and swap if left > right
# right after the 1st iteration we will see the largest number at the end

# Time: O(n^2)
# Space: O(1) (because In place)

# CODE:

A =[-5,2,12,-2,7,8,-9,0]

def bubble_sort(arr):
    n = len(arr)
    
    # for i in range(1, n): # this wont work because it will not sort all numbers in one pass
    #     if arr[i-1] > arr[i]:
    #         arr[i-1], arr[i] = arr[i], arr[i-1]
    
    flag = True # Implies that we are not done yet the array is not sorted
    
    while flag:
        flag = False # assume that we are done and we will later change it to True if any swaps takes place
        # tis is what will make the loop run again
        for i in range(1, n):
            if arr[i-1] > arr[i]:
                flag = True
                arr[i-1], arr[i] = arr[i], arr[i-1]
        
            
bubble_sort(A)
print(A)
        
    