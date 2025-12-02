n=int(input())
arr=list(map(int,input().split()))

temp=[]

def subset(index):
  if index==n:
    print(*temp)
    return 
  
  temp.append(arr[index]);
  subset(index+1)
  
  temp.pop()
  subset(index+1)
  



subset(0)