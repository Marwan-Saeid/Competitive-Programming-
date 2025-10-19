word=input()
counter=0
for ch in word:
    if ch=='4' or ch=='7':
        counter+=1
if counter==4 or counter==7:
    print('YES')
else:
    print("NO")