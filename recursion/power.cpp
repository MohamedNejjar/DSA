#include<bits/stdc++.h>
using namespace std  ; 
   int  power ( int n,int x ) {
    if( n ==0 ){ 
         return 1;
    }
     int small = power( n-1,x); 
     
      return  small*x;
   }
 int main ( ){
     
        int n  ; 
        int x  ; 
        cin >> x  ; 
         cin >> n ; 
          int result = power( n,x ) ; 
           cout << result ; 
           return  0 ; 
 }