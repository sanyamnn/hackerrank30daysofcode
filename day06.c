/*
PLEASE REFER TO day06correct for correct solution . I am looking for flaws in this approach of mine for solving my problem . Your suggestion is also welcomed
Day 06 - Let's Review

Objective 
Today we're expanding our knowledge of Strings and combining it with what we've already learned about loops. Check out the Tutorial tab for learning materials and an instructional video!

Task 
Given a string, , of length  that is indexed from  to , print its even-indexed and odd-indexed characters as  space-separated strings on a single line (see the Sample below for more detail).

Note:  is considered to be an even index.

Input Format

The first line contains an integer,  (the number of test cases). 
Each line  of the  subsequent lines contain a String, .

Constraints

Output Format

For each String  (where ), print 's even-indexed characters, followed by a space, followed by 's odd-indexed characters.

Sample Input

2
Hacker
Rank
Sample Output

Hce akr
Rn ak

https://www.hackerrank.com/challenges/30-review-loop/problem
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,T,evenIndex,oddIndex,j;
    i=0;
    T=0;
    evenIndex=0;
    oddIndex=0;
    char S[100],even[100],odd[100];
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%[^\n]",S);
        for(j=0;j<strlen(S);j++){
            if(j%2==0){
                even[evenIndex]=S[j];
                evenIndex++;
            }
            else{
                odd[oddIndex]=S[j];
                oddIndex++;
            }
        }
        printf("%s %s\n",even,odd);
        evenIndex=oddIndex=0;
    }
}
    

