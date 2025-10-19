test=int(input())
while test>0:
    result=int(input())
    word=input()
    l=0
    r=len(word)-1
    while l<r:
        if (word[l] != word[r]) :
            result-=2
            l+=1
            r-=1
        else:
            break
    print(result)
    test-=1