num,a,b=map(int,input().split())
result=0
for i in range(1,num+1):
    n=i
    sum=0
    while n>0:
        sum+=n%10
        n//=10
    if sum>=a and sum<=b:
        result+=i
print(result)