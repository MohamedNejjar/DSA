#include <bits/stdc++.h>
using namespace std;
int firstIndex(int a[], int n, int target) {
    if (n == 0) {
        return -1;
    }
    if (a[0] == target) {
        return 0;
    }
    int indexInRest = firstIndex(a + 1, n - 1, target);
    if (indexInRest == -1) {
        return -1;
    } else {
        return indexInRest + 1;
    }
}   


int main() {
    int n ; 
     cout << "Enter the size of array" << endl ;
    cin >> n ; 
      int a[n] ; 
      cout << "Enter the elements of array" << endl ;
       for(int i = 0 ; i< n ; i++){ 
         cin >> a[i] ; 
          
       } 
        int target ; 
         cout << "Enter the target element" << endl ; 
          cin >> target ;
         

       int result = firstIndex(a ,n,target) ; 
        if( result == -1){ 
          cout << "Element not exist" << endl ;
        }else { 
           cout << "Element exist at index " << result << endl ;
        }
    return 0;
}