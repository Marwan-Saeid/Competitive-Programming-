num=int(input())
count=1
for i in range(num):
    list=[]
    while count%4!=0 :
        list.append(count)
        count+=1
    else:
        list.append('PUM')
        count+=1
    print(' '.join(map(str,list)))