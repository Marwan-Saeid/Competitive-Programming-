test=int(input())
while test>0:
    n=int(input())
    word=input()
    list1=[0]*26
    pre=[]
    for i in range(n-1):
        list1[ord(word[i])-ord('a')]+=1
        count=0
        for j in list1:
            if j>0:
                count+=1
        pre.append(count)
    
    # print(pre)

    list2=[0]*26
    suf=[]
    for i in range(n-1,0,-1):
        list2[ord(word[i])-ord('a')]+=1
        count=0
        for j in list2:
            if j>0:
                count+=1
        suf.append(count)
    
    # print(suf)
    # print(list2)
    result=0
    for i in range(n-1):
        result=max(result,pre[i]+suf[n-2-i])

    print(result)
    test-=1