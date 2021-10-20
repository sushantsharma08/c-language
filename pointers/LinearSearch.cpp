#include <iostream>
using namespace std;
int main() {
   int tor, i, n=8;
   int arr[] = { 10, 20, 30, 40, 50, 60, 70, 80};
   cout<<"Enter element to search : ";
   cin>>tor;
   for (i = 0;i < n; i++) {
      if (arr[i] == tor) {
         printf("%d is present at %d position.\n\n", tor, i+1);
         break;
      }
   }
   if (i == n)
      printf("%d is not present in the array.\n\n", tor);
   return 0;
}