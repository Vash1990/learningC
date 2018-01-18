#include <iostream>
using namespace std;
int main()
{
  long long a = 0;
  bool prime = true;
  bool nochmal = true;
  string input = "";
  while (nochmal)
  {
  std::cin >> a;
  std::cout << a  << "  " <<'\n';
  if (a % 2 !=0)
  {
    for (long long i = 3; i < a; i+=2)
    {
      if(a % i == 0)
      {
        std::cout << "Die Zahl ist durch "<< i << " Teilbar also \n";
        prime = false;
        break;
      }
    }
  }
  else
  {
    std::cout << a <<" ist durch 2 Teilbar also \n";
    prime = false;
  }
  if (prime) std::cout << "Primzahl\n";
  else std::cout << " Keine Primzahl\n";

  std::cout << "Wiederholen J/N?" << '\n';
  cin >> input;
    if (input == "N" || input == "n")
    {
      std::cout << "Vielen Dank für Benutzen" << '\n';
      nochmal = false;
    }
      else if (input == "J" || input == "j")
      {
        nochmal = true;
      }
      else
      {
        std::cout << "Error falsche Eingabe Programm startet neu!" << '\n';
      }
  }
}
