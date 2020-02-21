#!/usr/bin/python3
"""
Perimeter of the island
"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid

    Arguments:
        grid (loist of list)
    Retruns:
        (int)
    """
    width = len(grid[0])
    heigth = len(grid)
    perimeter = 0
    for i in range(1, heigth - 1):
        for j in range(1, width - 1):
            if grid[i][j] == 1:
                if grid[i][j - 1] == 0:
                    perimeter += 1
                if grid[i - 1][j] == 0:
                    perimeter += 1
                if grid[i][j + 1] == 0:
                    perimeter += 1
                if grid[i + 1][j] == 0:
                    perimeter += 1
    return perimeter
