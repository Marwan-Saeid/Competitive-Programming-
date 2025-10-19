string=input()
arr=[]
for ch in string :
    if ch>='1' and ch<='9':
        arr.append(ch)

arr.sort()
result=('+'.join(map(str,arr)))
print(result)