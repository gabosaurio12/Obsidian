### Problem Description

The city zoo is currently undergoing significant renovations. To improve both visitor experience and animal welfare, the zookeeping staff have opted to reorganize certain animal habitats.

The zoo is organized as a network of **enclosures** connected by designated paths, with no additional space available. Animals cannot be swapped between enclosures because they would disrupt each other if they used the same path. To resolve this, the zookeeper developed a rotational strategy known as the "zoobin approach," where all animals are moved simultaneously to their subsequent locations. This method ensures that each animal arrives at its intended enclosure without crossing paths or creating confusion.

For example, consider,

![com.tcs.cv.automata.ei.middleware.DocxToHtmlConverter@1a15b789:image1.png](https://codevita.tcsapps.com/assets_public/img/Zoobinimage1.png) ![com.tcs.cv.automata.ei.middleware.DocxToHtmlConverter@1a15b789:image2.png](https://codevita.tcsapps.com/assets_public/img/Zoobinimage2.png)

Assume the nodes [1 to 5] as enclosures and edges connecting them as path. zoobin approach involves moving the animals from enclosures1 to 3, 3 to 4, 4 to 2 and 2 to 1 simultaneously. A single rotation is made to achieve this.

Now given the initial layout of the zoo and an expected layout, find the minimum such rotation required to move the animals to their expected places.

### Constraints

Number of simple loops present * E <= 50

### Input

First Line consist of Integer E representing the total path connecting enclosures

Next E lines will contain two integers A and B separated by space representing the paths between enclosure A and B, of current layout

Next E lines will contain two integers A and B separated by space representing the paths between enclosure A and B, of Expected layout

### Output

Single integer representing minimum rotation required to achieve the expected layout

### Time Limit (secs)

1

### Examples

Example 1

Input

6

1 2

1 3

1 5

3 4

4 5

2 4

1 2

1 4

1 5

2 3

3 4

3 5

Output

2

Explanation

Assume the zoo layout as the left one below. Initially we will make the round move on 1,2,4 and 5 loop. The resultant layout will be the middle layout below. Next, we will make the move on 1,5,3 and 2 loop resulting in the right layout which is the resultant layout.

![com.tcs.cv.automata.ei.middleware.DocxToHtmlConverter@1a15b789:image3.png](https://codevita.tcsapps.com/assets_public/img/Zoobinimage3.png)

Thus 2 rotations are needed, that's the minimum hence print the same.

Example2

Input

7

5 6

6 1

5 4

3 4

2 3

1 2

5 7

1 2

1 6

2 3

2 7

3 4

4 5

5 6

Output

3

Explanation

The layout below on left represents the given input. Moving animals on the outer layer results 3 times will result in the expected layout on right.

![com.tcs.cv.automata.ei.middleware.DocxToHtmlConverter@1a15b789:image4.png](https://codevita.tcsapps.com/assets_public/img/Zoobinimage4.png)