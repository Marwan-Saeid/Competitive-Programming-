size=int(input(""))
items=list(map(int,input("").split()))
for i in range(size-1):
    temp=items[i]
    index=i
    for j in range(i,size):
        if items[j]<temp:
            temp=items[j]
            index=j
    cur=items[index]
    items[index]=items[i]
    items[i]=cur
for item in items: 
    print(item,end=" ")