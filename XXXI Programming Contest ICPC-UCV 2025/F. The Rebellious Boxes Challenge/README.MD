F. The Rebellious Boxes Challenge

time limit per test1 second
memory limit per test256 megabytes

At the International Institute of Liquid Containment (IILC), a group of scientists has spent years studying how different volumes of water react when foreign objects are inserted into hermetic boxes. The official goal is "to prevent catastrophes in high-pressure experiments" although many suspect that in reality they only do it to torture new interns.

Each IILC box is a rectangular parallelepiped with base dimensions N
 (length) and M
 (width) and A
 (height). Before starting the experiment, the researchers pour exactly V cubic units of water into the box. It does not matter if the water barely covers the bottom or if it already reaches the top: the initial volume is always perfectly measured.

The real chaos begins when the interns must place two experimental capsules inside the box. These capsules are tall cylinders that, according to confidential documents, are so high that they exceed any possible water level and stick out well above the box (so the only relevant factor is the circular base they occupy).

Each capsule is defined by its center position on the base (Xi,Yi)
 and its diameter Di
. The supervisors ensure that:

No capsule overlaps another.
No capsule touches the walls of the box.
The positions (Xi,Yi)
 are always well chosen (although they insist that "perhaps you should double-check them just in case").
The head of the laboratory, famous for speaking in riddles, wrote the evaluation protocol with the following phrases:

"The water will always occupy the space left free."
"If the water touches the lid, you will know you failed."
"The edge separates the careful interns from the careless ones."
Translated: when the capsules are inserted, if the water reaches or exceeds the height of the box, the experiment is considered an overflow.

Your task: Given the box dimensions, the initial water volume, and the data of the two capsules, determine if the water will overflow.

Input
The first line contains four integers N,M,A
 (1≤N,M,A≤106
) and V
 (0≤V≤1018
) representing the length, width, height of the box, and the initial water volume. The total box volume N×M×A
 fits in a 64-bit integer.

The second line contains an integer T
 (for this problem it will always be T=2
).

Each of the following T
 lines contains three integers Xi,Yi
 (0<Xi,Yi<106
) and Di
 (1≤Di≤106
) where (Xi,Yi)
 are the coordinates of the capsule's center and Di
 its diameter. The capsule does not touch the walls and capsules do not overlap or touch each other.

It is guaranteed that the data always satisfies the conditions so the capsules fit correctly.

Output
Print exactly one line with "Overflow" if the water reaches or exceeds the height of the box or "No overflow" otherwise.

Examples
Input
6 5 4 70
2
2 2 20
5 3 2
Output
Overflow

Input
10 10 10 0
2
3 3 2
7 7 2
Output
No overflow

