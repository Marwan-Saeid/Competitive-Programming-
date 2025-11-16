def factorial(n):
  if n==0 or n==1:
   return 1
  
  return factorial(n-1)*n



num=int(input(""))

if num>=0:
  print(factorial(num))