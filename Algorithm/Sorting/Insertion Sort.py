size=int(input(""))
arr=list(map(int,input("").split()))
for i in range(1,size):
    key=arr[i]
    index=i
    for j in range(i-1,-1,-1):
        if key<=arr[j]:
            arr[index]=arr[j]
            index-=1
    arr[index]=key
# print(arr)

for i in arr:
    print(i,end=" ")