#!/usr/bin/python3
"""Determine an island perimter using measure function"""


def island_perimeter(grid):
    """Return the perimeter of the island

    The grid reps water and land as 0 and 1 respectively

    Args:
        grid(list): list of ints representing island
    Return:
        perimeter of island in grid
    """
    height, width = len(grid), len(grid[0])
    perimeter = 0
    edges = 0
    land_cells

    for id1 in range(height):
        for id2 in range(width):
            if grid[id1][id2] == 1:
                land_cells += 1

                # checks left neighbor
                if id2 > 0 and grid[id1][id2 - 1] == 1:
                    edges += 1

                # checks top quadrant
                if id1 > 0 and grid[id1 - 1][id2] == 1:
                    edges += 1

    perimeter = land_cells * 4 - edges * 2
    return perimeter
