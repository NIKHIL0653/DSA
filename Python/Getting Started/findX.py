arr = [1,7,3,9,5]
#Your code here
n = len(arr)
low = arr[0]
high = arr[n-1]
        
arr.sort()
        
while low <= high:
    mid = (low+high)/2
            
    if arr[mid] == x:
        print(mid)
        break
            
    if arr[low] == x:
        return low
        break
            else:
                low += 1
                
            
            if arr[high] == x:
                return high
                break
            else:
                high -= 1;
            