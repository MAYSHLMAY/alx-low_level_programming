def island_perimeter(grid):
    """Returns the perimeter of the island described in grid.

    Args:
        grid (list): A list of lists of integers, where 0 represents water and 1 represents land.

    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                # Check the left edge
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                # Check the right edge
                if j == len(grid[0]) - 1 or grid[i][j+1] == 0:
                    perimeter += 1
                # Check the top edge
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                # Check the bottom edge
                if i == len(grid) - 1 or grid[i+1][j] == 0:
                    perimeter += 1
    return perimeter
