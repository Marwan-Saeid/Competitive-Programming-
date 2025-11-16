size=int(input(""))
items=list(map(int,input("").split()))
value=int(input(""))
flag=False
for item in items:
  if item==value:
    flag=True
    break
print("Found" if flag else "Not Found")