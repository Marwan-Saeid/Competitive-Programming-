size=int(input(""))
items=list(map(int,input("").split()))
for i in range(size-1):
    for j in range(i,size):
        if items[i]>items[j]:
            temp=items[i];
            items[i]=items[j]
            items[j]=temp
for item in items: 
    print(item,end=" ")