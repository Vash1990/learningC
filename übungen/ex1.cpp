#include <iostream>

int main()
  {
    float a = 0.0f, b= 0.0f, c=0.0f;
    float average;
    std::cout << "Bitte 3 zahlen eingeben." << '\n';
    std::cin >> a >> b >> c;
    average = (a+b+c) / 3.0f;
    std::cout << "This is the average" << average <<'\n';
    return 0;
  }
