# EndSem-Solutions
This repository is about the endsem of semester 1 solutions. 
# Question 1 : Capitalism

Problem Description
The Philosophy class at IIIT-H discussed the question "Are you a capitalist?"
However, you do not find it as interesting as a CPro programming question so you decide to solve the following problem:
Given T lines as input, print number of capital letters in each line.

Input Format
The first line of input contains a single integer denoting the number of test-cases T.
Then T lines follow:
Each of the T lines consists of a sentence in english, and consists only of lowercase, uppercase english alphabets, and space characters.

Input constraints
1≤T≤1e5
Each line consists only characters in "A-Z", "a-z", and " ".
Sum of lengths of sentences over all testcase does not exceed 5∗1e5

Output Format
For each test-case: output on a single line, the total number of capital letters in the T-th line.

# Question 2 : Largest Subarray Sum

Problem Description
You have an array A of size N. You want to find the sum of the contiguous subarray within A that has the largest sum, i.e, among all subarrays of array A you are required to output the sum of that subarray which has maximum sum.

Input Format
The first line contains a single integer N denoting the size of the initial array. 
The second line consists of N space-separated integers A1,A2,…,AN denoting the array A.

Input constraints
1≤N≤1e3
−1e9≤Ai≤1e9

Output Format
Output a single integer that denotes the largest contiguous subarray sum.

# Question 3 : Enumerate

Problem Description
Given an alphabet set of {1,2,…,N} and a positive integer K, output all strings enumerations of the alphabet of length K. Print the strings in lexicographic order. Further, for a given string, add whitespaces between any two alphabets while outputting.

A string x is lexicographically smaller than y iff at the left-most index i where the strings differ, xi<yi.

Input Format
The first and only line of input contains two integers N,K that denotes the alphabet size {1,2,…,N} and the length of each string.

Input constraints
N,K≤1e5
It is guaranteed that the total number of alphabets to output is no more than 1e5

Output Format
Output all enumerations of strings of length K of the alphabet set {1,2,…,N}