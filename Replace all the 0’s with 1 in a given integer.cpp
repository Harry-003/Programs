#include <iostream>
using namespace std;

int replaceZerosWithOnes(int num) {
   if (num == 0) {
      return 1;
   }
   int ans = 0, tmp = 1;
   while (num > 0) {
      int d = num % 10;
      if (d == 0) {
         d = 1;
      }
      ans = d * tmp + ans;
      num = num / 10;
      tmp = tmp * 10;
   }
   return ans;
}
int main() {
   int n = 204;
   int result = replaceZerosWithOnes(n);
   cout << "After replacing zeros with ones " << n << " becomes " << result;
}