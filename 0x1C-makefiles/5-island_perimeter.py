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

            if not unit == 0:
                if grid[row][unit - 1] == 0:
                    edges += 1

            if not unit == width - 1:
                if grid[row][unit + 1] == 0:
                    edges += 1

            if not row == 0:
                if grid[row - 1][unit] == 0:
                    edges += 1

            if not row == height - 1:
                if grid[row + 1][unit] == 0:
                    edges += 1

    return edges


if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 1],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 1]
    ]
    print(island_perimeter(grid))
