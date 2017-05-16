#include <iostream>

using namespace std;

int BinarySearch(int arr[], int key,int n){
    int start = 0;
    int end = 4;
    
    while(start <= end){
        
        int mid = (start+end)/2;
        if(key == arr[mid])
           return mid;
        else if(key < arr[mid])
          end = mid-1;
        else 
          start = mid+1;     
    }
    
    return -1;
} 
int main(){
  int n = 5;  
  int array [] = {2,6,8,9,10};
  
  cout<<BinarySearch(array, 2, n);
    
}
