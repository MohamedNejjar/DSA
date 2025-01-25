#include<bits/stdc++.h> 
using namespace std; 
 // find the last element in the array  
   int lastElement( int a[] , int n , int target ) { 
    if( n ==0 ) { 
         return -1 ; 
    }  
     if(a[n-1]  ==target ) { 
         return n-1 ; 
     }
      return lastElement(a,n-1,target) ;
     
      
       
        
         
   }




 
 int main ( ) { 
       
        
         
          int n ; 
           cout << "enter the size of array "   << endl ;  
            cin >> n  ; 
             int arr[n] ; 
              for( int i = 0 ; i< n  ; i++ ) {
                 cin >> arr[i] ; 
              } 
                int target   ; 
                 cout <<  " enter the target  "  << endl; 
                  cin >> target  ; 
                   int result = lastElement(arr,n,target) ; 
                     if( result !=-1){ 
                         cout << " the target element is found at index"<< result << endl ; 
                          
                      }else { 
                         cout << "the target element is not found " << endl  ; 
                          
                      }  
                       return    0 ;  
                        } 

               
             
 