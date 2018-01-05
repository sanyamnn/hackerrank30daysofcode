/*Day 10 : Binary Numbers 
DISCLAIMER : Did not get full marks on it . I am working on this solution . I will definitely post correct solution too , in few hours
Objective 
Today, we're working with binary numbers. Check out the Tutorial tab for learning materials and an instructional video!

Task 
Given a base- integer, , convert it to binary (base-). Then find and print the base- integer denoting the maximum number of consecutive 's in 's binary representation.

Input Format

A single integer, .

Constraints

Output Format

Print a single base- integer denoting the maximum number of consecutive 's in the binary representation of .

Sample Input 1

5
Sample Output 1

1
Sample Input 2

13
Sample Output 2

2
Explanation

Sample Case 1: 
The binary representation of  is , so the maximum number of consecutive 's is .

Sample Case 2: 
The binary representation of  is , so the maximum number of consecutive 's is .
https://www.hackerrank.com/challenges/30-binary-numbers/problem
https://www.hackerrank.com/challenges/30-binary-numbers/problem
*
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int decToBin(int n){
    int consecutive[1000],consecInt=0,consec=1,i,greatest=0;
    int binaryNum[1000];
    if(n==0){
        return 0;
    }
    while(n>0){
        binaryNum[i]=n%2;
        n=n/2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        if(binaryNum[j]==1){
            if(binaryNum[j+1]==1){
                consec++;
            }
            else{
                consecutive[consecInt]=consec;
                consecInt++;
            }
        }
    }
    for(int k=0;k<consecInt;k++){
        if (consecutive[k]>greatest){
            greatest=consecutive[k];
        }
    }
    return greatest;
}
int main(){
    int n; 
    scanf("%d",&n);
    printf("%d",decToBin(n));
    return 0;
}/
