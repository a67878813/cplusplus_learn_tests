#include <iostream>
#include <span>


int f(std::span<int> s)
{
  if (s.size()<7) return s[7];
  for (int x: s)
        std::cout<< x;
  std::cout << std::endl;
  return s[s.size()-1];

}

int main()
{
    int a[100];
    int r0 = f(a);
    int r1 = f({a,5});
    int r2 = f({a,101});
    
}