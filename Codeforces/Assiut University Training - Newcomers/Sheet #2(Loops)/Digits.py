test=int(input())
for i in range(test):
    list=[]
    num=int(input())
    while num>0:
        list.append(num%10)
        num//=10
    if len(list)!=0:
        print(" ".join(map(str,list)))
    else:
        print(0)