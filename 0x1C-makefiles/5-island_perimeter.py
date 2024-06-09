#!/usr/bin/python3


def island_perimeter(grid):
    """
    Returns the perimeter of the island in the inp grid.

    Args:
        grid (list): A 2D list of integers

    Returns:
        int: The perimeter of the island.
    """
    if not grid:
        return 0

    width = len(grid[0])
    height = len(grid)
    perimeter = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                # Check left edge
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                # Check right edge
                if j == width - 1 or grid[i][j+1] == 0:
                    perimeter += 1
                # Check top edge
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                # Check bottom edge
                if i == height - 1 or grid[i+1][j] == 0:
                    perimeter += 1

    return perimeter
