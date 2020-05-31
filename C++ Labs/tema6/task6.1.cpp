#include <iostream>
using namespace std;
double SumRange(int a, int b) {
	   double sum=0;
	   if(a>=b){
	     return 0;
	   }
	   else{
	     for(int i=a; i<=b;i++){
	       sum+=i;
	     }
	     return sum;
	   }
	 }
int main() {
	double res = SumRange(2, 5);
	 cout<<"Result:"<<res;
}
