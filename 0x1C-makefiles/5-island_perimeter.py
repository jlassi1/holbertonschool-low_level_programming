#!/usr/bin/python3
"""
island perimenter
"""


def island_perimeter(grid):
    """function returns the perimeter of the island described in grid"""
    max_width = 0
    width = 0
    heigth = 0
    if not grid:
        return 0
    for i in grid:
        for j in i:
            if j == 1:
                width += 1

        if width != 0:
            heigth += 1
        if width == 0 and heigth != 0:
            break
        if max_width < width:
            max_width = width
        width = 0
    return (max_width + heigth) * 2
