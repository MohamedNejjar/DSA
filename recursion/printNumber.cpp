#include <bits/stdc++.h>
using  namespace std ; 
 string prtNumber( int n ){ 
    if(n==0){
         return  "0"; 
    }
     string small = prtNumber(n-1);
     

      return small+" "+ to_string(n) ;
 }
 int main(){  
      int n  ; 
       cin >>  n ; 

        string result = prtNumber(n);
        cout << result ; 
     
       
        return   0  ; 
 }