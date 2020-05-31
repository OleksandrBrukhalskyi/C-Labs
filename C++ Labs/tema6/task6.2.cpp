#include <iostream>
#include <time.h>
using namespace std;
 double SumOfNegativeElementsOfArrayByAbs(int arr[],const int size=100){
   int low = -100;
   int high= 100;
   double sum = 0;
   srand(time(0));
   for(int i=0; i<=size; i++){
      arr[i]=low+rand()%high;
  }
   for(int i=0; i<=size; i++){
     if(arr[i]<0){
       sum+=abs(arr[i]);
     }
   }
   return sum;

 }
int main() {
     const int size = 100;
     int arr[size];
     double r =  SumOfNegativeElementsOfArrayByAbs(arr);
    cout<<r<<endl;
}
