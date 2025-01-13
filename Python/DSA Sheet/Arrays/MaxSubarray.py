def maxSubarray(arr):
    max = float('-inf')
    
    sum = 0
    
    for i in range(len(arr)):
        sum += arr[i]
        if sum > max:
            max = sum
        if sum < max:
            sum = 0
            
    return max

if __name__ == "__main__":
    arr = [-2,1,-3,4,-1,2,1,-5,4]
    print("Max Subarray sum: ", maxSubarray(arr))