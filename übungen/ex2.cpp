#include <iostream>

int main()
{
  long long a = 0;
  signed long b = 0;
  std::cin >> a >> b ;
  std::cout << a  << "  " << b<< '\n';
  if (a < b) a = b;
  if (a < 10)
  {
  if((a % 2 == 0 && a != 2) || (a % 3 == 0 && a != 3) ||
            (a % 5 == 0 && a != 5) || (a % 7 == 0 && a != 7))
        {
            std::cout << "Not prime\n";
        }
        else
        {
            std::cout << "Prime\n";
        }
  }
    else
  {
    std::cout << "Error Zahl zu groß " << b << '\n';
  }
}
