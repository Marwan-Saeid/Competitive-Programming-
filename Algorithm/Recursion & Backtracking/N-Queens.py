board=[[False]*8 for _ in range(8)]

def printBoard():
  for i in range(8):
    for j in range(8):
      print("Q" if board[i][j] else ".",end="")
    print()
  
  print("-"*30)


def safe(row ,col):
  
  for i in range(8):
    if board[row][i]:
      return False
  
  for i in range(8):
    if board[i][col]:
      return False
  
  i, j = row, col
  while i >= 0 and j >= 0:
      if board[i][j]:
          return False
      i -= 1
      j -= 1
    
  i, j = row, col
  while i < 8 and j < 8:
      if board[i][j]:
          return False
      i += 1
      j += 1
    
  i, j = row, col
  while i >= 0 and j < 8:
      if board[i][j]:
          return False
      i -= 1
      j += 1
  
  i, j = row, col
  while i < 8 and j >= 0:
      if board[i][j]:
          return False
      i += 1
      j -= 1
  
  return True

def N_Queens(row):
  if row==8 :
    printBoard()
    return 
  
  for col in range(8):
    if safe(row,col):
      board[row][col]=True
      
      N_Queens(row+1)
      
      board[row][col]=False

# Main

N_Queens(0)