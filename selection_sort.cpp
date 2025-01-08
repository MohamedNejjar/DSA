#include<iostream>
using namespace std ;
void selectionSort(int a[], int n ){ 
    
     for(int i = 0 ; i <n-1;i++){
         int smallest  = i ;  
         for( int j = i ;j<n;j++){ 
             if (a[j]<a[smallest])
             {
                smallest = j;//take the small element index 
                
             } 
              swap(a[i],a[smallest]);
             
             
         }
     }
     
}
 int main(){   
     int n   ; 
      cin >> n ; 
        int a[n] ;
         for(int i=0 ; i<n;i++){
             cin>> a[i];
         }
    selectionSort(a,n );
     for (int  j = 0; j <n; j++)
     {
        cout << a[j];
     }
     
          
  
 }

