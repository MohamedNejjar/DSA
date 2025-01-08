#include<iostream>  
using namespace std  ;  
   
    
     
void bubbleSort(int a[],int n ){  
     
     for( int count  = 0 ; count <n-1 ; count ++){ 
        bool flag = false ; 
         for(int i =  0 ; i<n-2;i++){ 
              

                if(a[i]>a[i+1]){ 
                     swap( a[i],a[i+1]);
                     flag = true; 
                      
                }
         }
          if(!flag) break ; // the array is already sorted
          
          
         
          
     }
         
     }
 int main( ){ 
     int n  ; 
       cin >>  n  ; 
        int a[n]; 
         for( int i = 0 ; i<n;i++){ 
             cin >> a[i];
         } 
          bubbleSort( a,  n);
          for( int i  = 0 ;i<n;i++){
             cout <<a[i] ; 
          }
 }