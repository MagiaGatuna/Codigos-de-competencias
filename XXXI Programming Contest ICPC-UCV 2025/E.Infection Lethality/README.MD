E. Infection Lethality

time limit per test1 second
memory limit per test256 megabytes

You have been hired as a cybersecurity advisor by a major corporation. Their concern is simple but alarming: if a single computer in their infrastructure is compromised, how devastating could the consequences be? Your task is to determine the lethality of the infection: given the description of the network and the identity of the initially compromised computer, calculate how many computers in total would ultimately be affected.

Input
The input starts with a line containing an integer N
 (1≤N≤105
) indicating the number of computers in the network, followed by another line with an integer M
 (1≤M≤2×105
), followed by another line with an integer Q
 (1≤Q≤105
). Then you will find M
 lines each containing two integers u
 and v
 representing a bidirectional connection between computers u
 and v
. Finally you will find Q
 lines, each one representing a query over the network; each query consists of an integer S
, which identifies the initially infected computer for that query.

Output
You must print Q
 integers one per line, representing the total number of computers infected for each query (including the initially compromised one).

Examples
Input
5
4
2
1 2
1 3
1 4
1 5
1
3
Output
5
5
Input
8
6
3
1 2
2 3
4 6
4 5
6 7
5 7
1
6
8
Output
3
4
1
