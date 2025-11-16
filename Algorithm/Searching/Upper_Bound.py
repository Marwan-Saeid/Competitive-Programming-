# upper_bound is a function used with sorted arrays or vectors to find the index of the first element that is
# strictly greater ( > ) than a given value
# If there is no element greater than the given value, the function usually returns -1

def lower_bound(items,size,value):
  left=0
  right=size-1
  ans=-1
  while left<=right:
    mid=(left+right)//2
    if items[mid] >= value:
      ans=mid
      right=mid-1
    else:
      left=mid+1
  return ans
size=int(input(""))
items=list(map(int,input("").split()))
value=int(input(""))
print(lower_bound(items,size,value))