#!/usr/bin/python3
"""
    grid structures.
"""


def island_perimeter(grid):
    """
    Computes the perimeter of the island described in the grid.

    Args:
    grid(list of list of integers): for each integer,
    0 represents water and 1 represents land.

    Return:
        int: the perimeter of the island.
    """
    height = len(grid)
    width = len(grid[0])
    edges = 0

    for row in range(height):
        for unit in range(width):
            if grid[row][unit] == 0:
                continue

            if unit == 0:
                edges += 1
            elif grid[row][unit - 1] == 0:
                edges += 1

            if unit == width - 1:
                edges += 1
            elif grid[row][unit + 1] == 0:
                edges += 1

            if row == 0:
                edges += 1
            elif grid[row - 1][unit] == 0:
                edges += 1

            if row == height - 1:
                edges += 1
            elif grid[row + 1][unit] == 0:
                edges += 1

    return edges
