#include<bits/stdc++.h>
 using namespace std ; 
  int sumDigit( int n){ 
      
       if( n==0){ 
         return  0 ; 
       }  
        int small = sumDigit(n/10);
         return small +(n%10) ; 
       
         }
  int main(){  
     int n  ; 
      cin >> n ; 
       int result = sumDigit( n ) ; 
        cout << result ;  
         
      return  0 ; 
       
  }