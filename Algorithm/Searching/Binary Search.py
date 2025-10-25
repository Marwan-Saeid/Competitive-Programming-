size=int(input(""))
item=list(map(int,input("").split()))
value=int(input(""))
left=0
right=size-1
check=0
while left<=right:
  mid=(left+right)//2
  if item[mid]==value:
    check=1
    break
  if item[mid]>value:
    right=mid-1
  elif item[mid]<value:
    left=mid+1
print("Found" if check else "Not Found")