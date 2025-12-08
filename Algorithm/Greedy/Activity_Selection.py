size=int(input())

points=[]

for _ in range(size):
  x,y=map(int,input().split())
  points.append((x,y))

points.sort(key=lambda p :p[1])

end=float('-inf')
result=[]

for x,y in points:
  if x>=end:
    result.append((x,y))
    end=y

print(result)
print('--------------')
print(len(result))