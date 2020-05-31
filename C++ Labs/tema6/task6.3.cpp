#include<iostream>
#include <time.h>
using namespace std;
 int findTheMaxIndexOfOddElement(int arr[],const int size=100){
   int low=-100,high=100;
   srand(time(0));

   for(int i=0; i<size; i++){
     arr[i]=low+rand()%high;
   }
   int max=arr[0];
   int max_index;
   for(int i=0; i<size; i++){
        if(arr[i]>max){
          if(arr[i]%2==0){
          max=arr[i];
          max_index=i;  
        }
   }
   }
    for(int i=0; i<size; i++){
     cout<<arr[i]<<endl;
   }
    return max_index; 


 }
int main() {
   const int size = 100;
   int arr[size];
   int res = findTheMaxIndexOfOddElement(arr);
   cout << "Index:" << res;
}
