def on(i, j):
    return i & (1 << j)

n = int(input())
arr = list(map(int, input().split()))

for i in range(1 << n):
    for j in range(n if n < 32 else 32):
        if on(i, j):
            print(arr[j], end=" ")
    print()