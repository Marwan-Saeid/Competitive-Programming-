def merge(a,left,mid,right):
    first_arr=[]
    second_arr=[]
    size1=mid-left+1
    size2=right-mid
    
    for i in range(left,mid+1):
        first_arr.append(a[i])
    for i in range(mid+1,right+1):
        second_arr.append(a[i])
    
    result=[]
    index1=0
    index2=0
    
    while(index1<size1 and index2< size2):
        if(first_arr[index1]<second_arr[index2]):
            result.append(first_arr[index1])
            index1+=1
        else:
            result.append(second_arr[index2])
            index2+=1
    
    
    while(index1<size1):
            result.append(first_arr[index1])
            index1+=1
    while(index2<size2):
            result.append(second_arr[index2])
            index2+=1
    
    ind=0
    for i in range(left,right+1):
        a[i]=result[ind]
        ind+=1



def mergeSort(arr,left,right):
    if left >= right:
        return 
    mid=(left+right)//2
    mergeSort(arr,left,mid)
    mergeSort(arr,mid+1,right)
    merge(arr,left,mid,right)

size=int(input(""))
items=list(map(int,input("").split()))

mergeSort(items,0,size-1)


for item in items:
    print(item, end=" ")
    