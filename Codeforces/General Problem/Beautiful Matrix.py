num1=0
num2=0
for i in range(1,6):
    arr=list(map(int ,input().split()))
    for j in range(5):
        if arr[j]==1:
            num1=i
            num2=j+1
print(abs(3-num1)+abs(3-num2))