#!/usr/bin/python3
"""
This module contains the island_perimeter function
"""


def island_perimeter(grid):
    """
    calculates the perimeter of an island described in the grid

    grid is a list of list of integers where
    - 0 represents a water zone
    - 1 represents a land zone

    Args:
        grid (list): list of list of integers

    Return:
         perimeter of the island
    """
    if not grid or type(grid) != list:
        return
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                side = 4
                if grid[i - 1][j] == 1:
                    side -= 1
                if grid[i + 1][j] == 1:
                    side -= 1
                if grid[i][j - 1] == 1:
                    side -= 1
                if grid[i][j + 1] == 1:
                    side -= 1
                perimeter += side
    return perimeter
