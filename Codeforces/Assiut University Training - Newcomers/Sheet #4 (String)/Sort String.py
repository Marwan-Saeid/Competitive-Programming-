import sys

N = int(sys.stdin.readline())

count = [0] * 26

read = 0
while read < N:
    ch = sys.stdin.read(1)
    if ch == '\n' or ch == '':
        continue
    count[ord(ch) - ord('a')] += 1
    read += 1

for i in range(26):
    if count[i]:
        sys.stdout.write(chr(i + ord('a')) * count[i])