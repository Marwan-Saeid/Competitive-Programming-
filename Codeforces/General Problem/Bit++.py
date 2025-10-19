test=int(input())
num=0
for i in range(test):
    word=input()
    num+=word.count('++')
    num-=word.count('--')
print(num)