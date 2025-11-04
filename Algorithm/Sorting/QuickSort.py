def QuickSort(arr, first,end):
  if first>=end:
    return 
  i=first-1
  pivot=arr[end]
  j=first
  while j<end:
    if arr[j]<pivot:
      i+=1
      temp=arr[i]
      arr[i]=arr[j]
      arr[j]=temp
    j+=1
  i+=1
  temp=arr[i]
  arr[i]=arr[end]
  arr[end]=temp
  
  QuickSort(arr,first,i-1)
  QuickSort(arr,i+1,end)
#--------------------Main--------------
size=int(input(""))
items=list(map(int,input("").split()))
QuickSort(items,0,size-1)
for item in items:
  print(item,end=" ")