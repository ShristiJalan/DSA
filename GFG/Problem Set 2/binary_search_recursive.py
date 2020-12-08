def binary(lst, k, n, l, r):
    m = (l+r)//2
    if(l <= r):
        if(lst[m] == k):
            return m

        if(lst[m] < k):
            return binary(lst, k, n, m+1, r)
        
        else:
            return binary(lst, k, n, l, m-1)
lst = [1, 4, 5, 7, 21, 12, 13, 98]
k = 7
n = len(lst)
l = 0 
r = n-1
lst.sort()

result = binary(lst, k, n, l, r)
if(result != -1):
    print("Element is present")
else: 
    print("Not present")