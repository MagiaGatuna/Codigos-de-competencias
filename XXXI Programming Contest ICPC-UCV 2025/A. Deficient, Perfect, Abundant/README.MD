A. Deficient, Perfect, Abundant

time limit per test1 second
memory limit per test256 megabytes

The sum S(N)
 of a number N
, is defined as the sum of all of its proper divisors, that is, all the numbers that divide N
 except for itself. For example, S(15)=9
. The proper divisors of 15
 are {1,3,5}
, so S(15)=1+3+5=9

We say that a number N
 is Deficient if S(N)<N
, Perfect if S(N)=N
 and Abundant if S(N)>N
.

A few examples:

15
 is a deficient number, because S(15)=1+3+5=9
.
28
 is a perfect number, because S(28)=1+2+4+7+14=28
.
20
 is an abundant number, because S(20)=1+2+4+5+10=22
.
Your task is simple. Given a integer N
 you must tell what kind of number N
 is (either deficient, perfect or abundant). Furthermore, you must find the smallest abundant number greater than N
. For example, given N=15
 we find that 15
 is a deficient number, and the next abundant number would be 18
, because S(18)=1+2+3+6+9=21

Input
The input consists of one line with a single integer N
 (1≤N≤1012
).

Output
You must print one line with one character 'D', 'P' or 'A' depending if N
 is deficient, perfect or abundant respectively, followed by an integer A
, which is the smallest abundant number that is greater than N
. Both character and number must be separated by exactly one space.

Examples
Input
15
Output
D 18
Input
28
Output
P 30
Input
453225641386
Output
D 453225641388

