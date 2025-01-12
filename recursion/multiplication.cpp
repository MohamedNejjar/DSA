#include<bits/stdc++.h>
 using namespace std ; 
   int multiplication( int n , int m ){ 
    if(n==0){ 
         return  0  ; 
    }
     int small = multiplication(n-1,m);
     return small +m ; 
     
      
       


   }
  int main( ){  
     int n ,m; 
      cin >>n>>m ; 
       int result = multiplication(n,m); 
        cout << result ; 

     return 0  ; 
      
  }