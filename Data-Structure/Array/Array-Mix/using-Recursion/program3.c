/*

Q3. Reverse in a range using recursion
Problem Description :
- Given an array A of N integers.
- Also given are two integers B and C.
- Reverse the array A in the given range [B, C]
- Return the array A after reversing in the given range.
Problem Constraints :
1 <= N <= 105
1 <= A[i] <= 109
0 <= B <= C <= N - 1
Example Input
Input 1:
A = [1, 2, 3, 4]
B = 2
C = 3
Output 1:
[1, 2, 4, 3]
Input 2:
A = [2, 5, 6]
B = 0
C = 2
Output 2:
[6, 5, 2]
Example Explanation :
Explanation 1:
We reverse the subarray [3, 4].
Explanation 2:
We reverse the entire array [2, 5, 6].

*/

#include <stdio.h>

int reverse(int arr[],int start,int end){
    int temp;
    if(start>=end){
        return 0;
    }
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    reverse(arr,start+1,end-1);
}

void main(){
    
        int size;
    
        printf("Enter the size of array: ");
        scanf("%d",&size);
    
        int arr[size];
    
        printf("Enter the elements of array: ");
        for(int i=0;i<size;i++){
            scanf("%d",&arr[i]);
        }
    
        int start,end;
        printf("Enter the range to reverse: ");
        scanf("%d%d",&start,&end);
    
        reverse(arr,start,end);
    
        printf("The reversed array is: ");
        for(int i=0;i<size;i++){
            printf("%d ",arr[i]);
        }
}