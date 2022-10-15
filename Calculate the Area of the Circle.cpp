#include <bits/stdc++.h>

using namespace std;

class Area {

  public:

    void areaOfCircle(int n) {
      float pie=3.14;
      double ans = pie * n * n; // Area of circle = πr2
      cout << "Area of circle is : ";
      cout << ans<<endl;
    }
};
int main() {

  int n = 5;

  Area p1;
  p1.areaOfCircle(n);

  return 0;
}
