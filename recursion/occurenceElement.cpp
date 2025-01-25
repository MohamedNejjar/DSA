#include<bits/stdc++.h>
using namespace std; 
int occurrenceElement( int* array, int n , int target ) { 
     int count  = 0 ; 
       
       
       if( n == 0 ){ 
         if( array[0] == target ) { 
             return 1 ; 
         }else {  return 0 ;}
         
       } 
        int   child  = occurrenceElement(array  , n-1 , target );
        if( array[n]==target ) {  
            count++ ; 
             
        } 
         return count +child ; 
}


 int main (){ 
       
        
         int n ; 
          cout << " entre size of array " << endl; 
            cin >> n ; 
             int* array = new int [n] ; 
              for ( int i = 0 ; i< n ; i++){ 
                 
                   cin >>array[i] ; 
              } 
               int target  ; 
                cout << " enter the target " << endl ; 
                 cin >> target ; 
                  int result = occurrenceElement(array, n-1,target) ; 
                   if( result == -1){ 
                     cout << "element not found " << endl ; 
                      
                   } else { 
                     cout << "the element occurs  "<< result << " times " << endl ;
                   }
               

                
 }