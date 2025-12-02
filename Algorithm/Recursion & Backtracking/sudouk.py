arr = [[0 for _ in range(9)] for _ in range(9)]

def save(row, col):
    c = [0] * 10
    cc = [0] * 10
    
    for i in range(9):
        c[arr[row][i]] += 1
        cc[arr[i][col]] += 1
    
    for i in range(1, 10):
        if c[i] >= 2 or cc[i] >= 2:
            return False
    
    boxRow = (row // 3) * 3
    boxCol = (col // 3) * 3
    c1 = [0] * 10
    
    for i in range(boxRow, boxRow + 3):
        for j in range(boxCol, boxCol + 3):
            c1[arr[i][j]] += 1
    
    for i in range(1, 10):
        if c1[i] >= 2:
            return False
    
    return True

def print_board():
    for i in range(9):
        for j in range(9):
            print(arr[i][j], end=" ")
        print()
    print("-----------")

def sudoku(row, col):
    if row == 9:
        print_board()
        return
    
    nextRow = row
    nextCol = col + 1
    if nextCol == 9:
        nextCol = 0
        nextRow += 1
    
    for i in range(1, 10):
        arr[row][col] = i
        
        if save(row, col):
            sudoku(nextRow, nextCol)
        
        arr[row][col] = 0

sudoku(0, 0)