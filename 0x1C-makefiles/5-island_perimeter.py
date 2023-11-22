#!/usr/bin/python3
"""Island Perimeter.

The is a task on finding the perimeter of an island represented by grid cells.
"""


def island_perimeter(grid) -> int:
    """Calculate the perimeter of an Island.

    Conditions:
    - grid is a list of integers
    - 0 represents a water zone
    - 1 represents a land zone
    - one cell is a square wit hside length 1
    - Grid cells are connected horizontally/vertically,
    - The grid (island) is surrounded by water
      implying the there is one island (or nothing).
    - The island doesn't have "lakes"
      (water inside that isn't connected
      to the water around the island).

    Perimeter Formular:
    Where Q is the total number of connected grid cells,
    the perimeter is

    2Q + 2

    Args:
        - grid (list) : 2D list representing the island

    Return:
        The perimeter of the grid island.
    """
    if len(grid) < 3:
        return 0

    # get total number of connected grid cells
    grid_cells = 0

    for row in grid:
        if len(row) < 3:
            return 0

        for i in row:
            if i:
                grid_cells += 1

    # calculate perimeter = 2Q + 2
    perimeter = (2 * grid_cells) + 2

    # return perimeter
    return perimeter
