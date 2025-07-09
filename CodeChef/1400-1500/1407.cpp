/*
Array Halves
Chef has a permutation 
P
P of length 
2
⋅
N
2⋅N. He can perform the following operation on 
P
P:

Select an index 
i
i 
(
1
≤
i
<
2
⋅
N
)
(1≤i<2⋅N) and swap 
P
i
P 
i
​
  and 
P
i
+
1
P 
i+1
​
 .
Chef would call the permutation 
P
P good, if the maximum element of the first half of 
P
P is less than the minimum element of the second half of 
P
P.
Formally 
max
⁡
(
1
≤
i
≤
N
)
P
i
<
min
⁡
(
N
<
i
≤
2
⋅
N
)
P
i
(1≤i≤N)
max
​
 P 
i
​
 < 
(N<i≤2⋅N)
min
​
 P 
i
​
 .

Find the minimum number of operations Chef needs to apply to make 
P
P good.

Note: A permutation of length 
N
N is an array where every integer from 
1
1 to 
N
N occurs exactly once.

Input Format
The first line contains a single integer 
T
T — the number of test cases. Then the test cases follow.
The first line of each test case contains an integer 
N
N — half the size of the permutation 
P
P.
The second line of each test case contains 
2
⋅
N
2⋅N space-separated integers 
P
1
,
P
2
,
…
,
P
2
⋅
N
P 
1
​
 ,P 
2
​
 ,…,P 
2⋅N
​
  denoting the permutation 
P
P.
Output Format
For each test case, output the minimum number of operations required to make 
P
P good.

Constraints
1
≤
T
≤
10
5
1≤T≤10 
5
 
1
≤
N
≤
10
5
1≤N≤10 
5
 
P
P is a permutation of length 
2
⋅
N
2⋅N
The sum of 
N
N over all test cases won't exceed 
2
⋅
10
5
2⋅10 
5
 .
Sample 1:
Input
Output
3
2
3 2 1 4
3
1 2 3 4 5 6
3
6 5 4 3 2 1
2
0
9
Explanation:
Test case 
1
1: We can perform the following operations:

Apply operation at 
i
=
1
i=1: 
[
3
,
2
,
1
,
4
]
→
[
2
,
3
,
1
,
4
]
[3,2,1,4]→[2,3,1,4]
Apply operation at 
i
=
2
i=2: 
[
2
,
3
,
1
,
4
]
→
[
2
,
1
,
3
,
4
]
[2,3,1,4]→[2,1,3,4]

*/