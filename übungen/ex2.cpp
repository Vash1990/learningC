#include <iostream>

int main()
{
  signed long a = 0;
  signed long b = 0;
  std::cin >> a >> b ;
  std::cout << a  << "  " << b<< '\n';
  if (a > b)
  {
      std::cout << "A ist größer als b " << a << '\n';
  }
  else
  {
      std::cout << "B ist größer als a " << b << '\n';
  }
}
