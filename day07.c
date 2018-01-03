/*Day 07 : Arrays 
Objective 
Today, we're learning about the Array data structure. Check out the Tutorial tab for learning materials and an instructional video!

Task 
Given an array, , of  integers, print 's elements in reverse order as a single line of space-separated numbers.

Input Format

The first line contains an integer,  (the size of our array). 
The second line contains  space-separated integers describing array 's elements.

Constraints

, where  is the  integer in the array.
Output Format

Print the elements of array  in reverse order as a single line of space-separated numbers.

Sample Input

4
1 4 3 2
Sample Output

2 3 4 1

https://www.hackerrank.com/challenges/30-arrays/problem*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,j,arr_i; 
    scanf("%d",&n);
    int *arr = malloc(sizeof(int) * n);
    for(arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(j=0;j<n;j++){
        printf("%d ",arr[arr_i-j-1]);
    }
    return 0;
}

