test=int(input())
num=0
for i in range(test):
    arr=list(map(int,input().split()))
    count=0
    for x in arr:
        if x==1:
            count+=1
    if count>=2:
        num+=1
print(num)