def island_perimeter(grid):
    """Returns the perimeter of the island described in grid.

    Args:
        grid (list): A list of lists of ints 0 and 1

    Returns:
        int: The perimeter of the island.
    """
    width = len(grid[0])
    height = len(grid)
    perim = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                # Check the left edge
                if j == 0 or grid[i][j-1] == 0:
                    perim += 1
                # Check the right edge
                if j == width - 1 or grid[i][j+1] == 0:
                    perim += 1
                # Check the top edge
                if i == 0 or grid[i-1][j] == 0:
                    perim += 1
                # Check the bottom edge
                if i == height - 1 or grid[i+1][j] == 0:
                    perim += 1

    return perim
