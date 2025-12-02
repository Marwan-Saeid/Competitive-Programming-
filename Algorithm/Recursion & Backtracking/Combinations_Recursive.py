n, k = map(int, input().split())
arr = list(map(int, input().split()))

temp = []

def combination(index):
    if len(temp) == k:
        for x in temp:
            print(x, end=" ")
        print()
        return
    
    if index == n:
        return
    
    temp.append(arr[index])
    combination(index + 1)
    
    temp.pop()
    combination(index + 1)

combination(0)