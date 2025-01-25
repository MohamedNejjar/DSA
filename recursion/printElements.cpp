#include<bits/stdc++.h>  
 using namespace std ; 
 void printElements(int* array,int index, int target,int n  ) { 
     if( index ==n){ 
         return  ; 
          
     }if(array[index] == target ) { 
              cout<< "found at index " << index << endl ; 
          }
          printElements(array,index+1,target,n) ;
 }
  
  int main ( ) { 
      
        cout << " enter the size of array" << endl; 
         int n   ; 
          
           cin >> n ;
            int* array = new int [n] ; 
            for( int i = 0 ; i<n ; i++){
                 cin >> array[i] ; 
                  
            } 
             int target  ; 
              cout << "enter the target " <<endl; 
               cin >> target  ; 
               printElements(array,0 ,target,n );
               delete []array;
               return 0 ; 
             
  }