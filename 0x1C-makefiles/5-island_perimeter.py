def island_perimeter(grid):
    """Returns the perimeter of the island described in grid.

    Args:
        grid (list): A list of lists of integers

    Returns:
        int: The perimeter of the island.
    """
    width = len(grid[0])
    height = len(grid)
    perimeter = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                # Check the left edge
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                # Check the right edge
                if j == width - 1 or grid[i][j+1] == 0:
                    perimeter += 1
                # Check the top edge
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                # Check the bottom edge
                if i == height - 1 or grid[i+1][j] == 0:
                    perimeter += 1

    return perimeter

grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 0, 1, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
print(island_perimeter(grid))