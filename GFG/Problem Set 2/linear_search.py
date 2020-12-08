
def linear(lst, k, n):
    for i in range(0, 8):
        if(lst[i] == k):
            return i
    return -1
lst = [1, 4, 5, 7, 21, 12, 13, 98]
k = 7
n = len(lst)

result = linear(lst, k, n)
if(result == -1):
    print("Element no present")
else:
    print("Element is present")