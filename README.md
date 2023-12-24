<h1 align="center">
  Collatz conjecture
  <img src="https://betaingegneria.it/wp-content/uploads/2020/11/collatz.jpeg" width="50px"/>
</h1>

### :scream: Statement.
Consider the following operation on an arbitrary positive integer:

    If the number is even, divide it by two.
    If the number is odd, triple it and add one.

In modular arithmetic notation, define the function f as follows: 

<img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/9b2a03faf9d31a8de0abb3c4a3d318490105da12" width="700px"/>

The sequence of numbers involved is sometimes referred to as the hailstone sequence, hailstone numbers or hailstone numerals (because the values are usually subject to multiple descents and ascents like hailstones in a cloud), or as wondrous numbers.

Paul Erdős said about the Collatz conjecture: **"Mathematics may not be ready for such problems."**

Jeffrey Lagarias stated in 2010 that the Collatz conjecture "is an extraordinarily difficult problem, completely out of reach of present day mathematics".

<img src="https://upload.wikimedia.org/wikipedia/commons/thumb/b/b9/Collatz-stopping-time.svg/800px-Collatz-stopping-time.svg.png" width="500px"/>

The picture shows the numbers **from 1 to 9999** and their corresponding total stopping time.
Directed graph showing the orbits of small numbers under the Collatz map, skipping even numbers. The Collatz conjecture states that all paths eventually lead to 1.
<img src="https://upload.wikimedia.org/wikipedia/commons/thumb/c/c2/Collatz-graph-50-no27.svg/320px-Collatz-graph-50-no27.svg.png" width="200px"/>

For instance, starting with n = 12 and applying the function f without "shortcut", one gets the sequence 12, 6, 3, 10, 5, 16, 8, 4, 2, 1.

The number n = 19 takes longer to reach 1: 19, 58, 29, 88, 44, 22, 11, 34, 17, 52, 26, 13, 40, 20, 10, 5, 16, 8, 4, 2, 1.

The sequence for n = 27, listed and graphed below, takes 111 steps (41 steps through odd numbers, in bold), climbing as high as 9232 before descending to 1.

    27, 82, 41, 124, 62, 31, 94, 47, 142, 71, 214, 107, 322, 161, 484, 242, 121, 364, 182, 91, 274, 137, 412, 206, 103, 310, 155, 466, 233, 700, 350, 175, 526, 263, 790, 395, 1186, 593, 1780, 890, 445, 1336, 668, 334, 167, 502, 251, 754, 377, 1132, 566, 283, 850, 425, 1276, 638, 319, 958, 479, 1438, 719, 2158, 1079, 3238, 1619, 4858, 2429, 7288, 3644, 1822, 911, 2734, 1367, 4102, 2051, 6154, 3077, 9232, 4616, 2308, 1154, 577, 1732, 866, 433, 1300, 650, 325, 976, 488, 244, 122, 61, 184, 92, 46, 23, 70, 35, 106, 53, 160, 80, 40, 20, 10, 5, 16, 8, 4, 2, 1
