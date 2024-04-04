# CodingGame

### [Paper Labyrinth Statement](https://www.codingame.com/training/medium/paper-labyrinth)
You are Alice and you must find the rabbit then go out of the Queen’s labyrinth of death as quickly as you can.
The labyrinth is made of thin walls, each wall is binary-coded in each cell: 1 is the the down wall, 2 the left wall, 4 the top wall and 8 the right wall. If the wall is present, add its number to the cell. For example, 10=8+2 in a cell where you stand means that there are walls on your left and on your right and that you can walk downwards and upwards.
This also means that one-way doors are not forbidden. Look for instance at 10 5, if you are on 5, you can go on 10 but you can’t go back.
In fact, the cells are coded in hexadecimal, 10 is a.
The first simple labyrinth is this one:
________
|S    R|
‾‾‾‾‾‾‾‾
7=4+2+1, it’s the start cell on the left, 0xd=13=8+4+1, it’s the rabbit cell on the right. The other cells are 5=4+1.

### [Factorials Of Prime Descomposition](https://www.codingame.com/training/hard/factorials-of-primes-decomposition)
You have to decompose a positive integer/fraction as a product of powers of factorials of prime numbers.
For example,
22 = (11!)^1 × (7!)^(−1) × (5!)^(−1) × (3!)^(−1) × (2!)^1
10/9 = (5!)^1 × (3!)^(−3) × (2!)^1
Use this special notation: prime number#power
to denote each term, e.g. (11!)^4 is denoted as 11#4.
Output the non-zero terms only, with space separation, and order them in descending order of the prime numbers.
The above examples hence become:
22 = 11#1 7#-1 5#-1 3#-1 2#1
10/9 = 5#1 3#-3 2#1

