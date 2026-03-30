 #include<iostream>
#include<cmath>
using namespace std;
template<class R>
R root(R a,R b,R c)
{
   R  m, n, p, q, l;
   m = (b * b) - (4 * a * c);
   l = (-b) / (2 * a);
   if (m < 0)
   {
      n = -m;  // make discriminant positive for sqrt
      p = sqrt(n) / (2 * a);
      cout << "roots are:" << l << "+" << p << "j" << endl;
      cout << "roots are:" << l << "-" << p << "j" << endl;
   }
   else if (m > 0)
   {
      n = m;
      p = sqrt(n) / (2 * a);
      cout << "the roots are:" << l + p << " and " << l - p << endl;
   }
   else
   {
      p = 0;  // when discriminant is zero, roots are equal to l
      cout << "the roots are:" << l << endl;
   }
   return 0;  // added return statement to match return type
}
int main()
{
   root(1, 5, 6);
   return 0;
}
