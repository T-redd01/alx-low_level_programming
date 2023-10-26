#!/usr/bin/python3
"""
Calculating island perimeter
"""

def island_perimeter(grid):
    """calculates the perimeter by going around matrix

        Args:
            grid: list of lists / matrix - 1 (land), 0 (water)
    """
    found_land = 0
    perimeter = 0

    for i in grid:
        print(i)
        for j in i:
            print(j)
            if j == 1 and found_land == 0:
                found_land = 1
                perimeter += sum(i) + 1
                break
            perimeter += j
    
    found_land = 0
    for i in range(len(grid) - 1, -1, -1):
        print(grid[i])
        for j in range(len(grid[i]) - 1, -1, -1):
            print(grid[i][j])
            if grid[i][j] == 1 and found_land == 0:
                found_land = 1
                perimeter += sum(grid[i]) + 1
                break
            perimeter += grid[i][j]
    return perimeter
