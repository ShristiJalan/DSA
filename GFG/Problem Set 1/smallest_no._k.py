n = int(input())
lst = []
if(n>=0 and n<10):
    print(n)
else:
    for i in range(1,n+1):
        if(n%i == 0):
            lst.append([i,n//i])
    print(lst)
