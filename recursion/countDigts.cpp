#include<bits/stdc++.h>
 using namespace std  ; 
 int countN( int n  ) { 
     if( n<1){ 
         return  0; 
     }
      int small = countN(n/10);
     
      return small+1;
 }
   int main ( ){  
     int n ; 
      
      cin >> n ; 
       int result = countN( n) ; 
        cout << result  ; 
     
      
       
       return  0   ; 
   }