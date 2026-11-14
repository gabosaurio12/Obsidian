## Problem Description

In a design lab, the floor is modelled as a 2D square grid of size N × M. An iron rod, represented by 'R', is fixed to the floor. A cable, represented by 'C', is laid over the grid and may weave above or below this rod.

A typical top view of the grid with rod and cable is shown below.

![[TCS/Mock/imgs/image.png]]
where

- 'R' - represents a rod fixed to the floor.
- 'C' - represents a cable laid over or under the rods.
- '.' - represents empty space.

The rods are always placed horizontally or vertically between edges of the grid. The cable starts and ends at the edges of the grid but never starts or ends on the same cell as a rod.

Adjacent cable cells are always connected horizontally or vertically (never diagonally). Cables do not run side by side - there will always be at least one empty cell gap between two separate cable paths. Similarly, cables do not run directly adjacent to rods. Also, cables can't run over the rods and vice versa, only intersection is allowed.

When the cable overlaps a rod:

- If the rod passes above the cable, the cell is marked as 'R'.
- If the cable passes above the rod, the cell is marked as 'C'.

You have a special power that allows you to switch the positions of the rod and cable at any cell:

- If the rod is above the cable, you can switch to make the cable go above the rod.
- If the cable is above the rod, you can switch to make the rod go above the cable.

Your goal is to determine the minimum number of such switches required to unwrap the cable completely - meaning it can be freely pulled holding both ends without getting caught around any rod.

### Constraints

4 <= N, M <= 20

### Input

The first line contains two integers, N and M, separated by a space, which denote the number of rows and columns of the floor grid.  
Each of the next N lines has M characters: '.' for an empty cell, 'C' for cable, and 'R' for rod, separated by spaces.

### Output

Single integer representing minimum number of times power needs to be used to unwrap the cable.

### Time Limit (secs)

1

### Examples

Example 1

Input

5 5

..R..

CCCCC

..R.C

CCRCC

..R..

Output

1

Explanation

The image provided in the _Problem Description_ section corresponds to this input. There are two cells where the special power may be applied. Utilizing the special power on either cell is sufficient to release the cable. Assuming the special power is used at the cell located in row 2, column 3 (using 1-based indexing), this action elevates the rod to the top position, thereby unwrapping and fully freeing the cable.

Example 2

Input

5 11

CCC.CCC.CCC

C.C.C.C.C.C

CRCRCRRRCRR

C.C.C.C.C.C

C.CCC.CCC.C

Output

2

Explanation

The below image depicts the above input.

![[TCS/Mock/imgs/image 1.png]]
The image demonstrates that the special power may be applied to the rod cells positioned in columns 7 and 11. Activation at these specific locations elevates the cable above the rods, effectively removing any obstructions.

Example 3

Input

7 6

CCCRCC

...R.C

CCCCCC

C..R..

CCCCCC

...R.C

CCCRCC

Ouput

0

Explanation

The below image depicts the above input.

![[TCS/Mock/imgs/image 2.png|402]]

In this scenario, no power is required, as the cable is not coiled around the rod and can be easily removed by holding both ends and pulling them simultaneously.