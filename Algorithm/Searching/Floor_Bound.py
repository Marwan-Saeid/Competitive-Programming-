# floor_bound is a function used with sorted arrays or lists to find
# the index of the last element that is less than or equal to (<=) a given value.
# If there is no such element, the function usually returns -1.

def floor_bound(items,size,value):
  left=0
  right=size-1
  ans=-1
  while left<=right:
    mid=(left+right)//2
    if items[mid] <= value:
      ans=mid
      left=mid+1
    else:
     right=mid-1
  return ans
size=int(input(""))
items=list(map(int,input("").split()))
value=int(input(""))
print(floor_bound(items,size,value))