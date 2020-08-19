#include<iostream>
#include<algorithm>
using namespace std;
//using divide and conquer approach to search an element in a sorted array 
//time complexicity is of O(n)
int staircase_search(int a[4][4],int n, int k) 
{ 
    if(n==0)
        return -1;
    int smallest =a[0][0], largest =a[n-1][n-1];
    if(k<smallest  || k> largest)
       return -1;
    //set indexes for top right element
    int i=0,j=n-1;
    while(i<n&&j>=0){
        if(a[i][j] == k){
            cout<<"n Found at "<< i<<", "<<j;
            return 1;
        }
        if(a[i][j] > k)
            j--;
        else
        {
           i++;
        }
    }
    cout<<"n Element not found ";
    return 0;
}
// Driver code 
int main() 
{ 
    int mat[4][4] = { { 10, 20, 30, 40 }, 
                      { 15, 25, 35, 45 }, 
                      { 27, 29, 37, 48 }, 
                      { 32, 33, 39, 50 } }; 
    staircase_search(mat, 4, 29); 
  
    return 0; 
} 