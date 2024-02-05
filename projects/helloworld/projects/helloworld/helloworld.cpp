#include <iostream>

int main()
{
    std::cout << "Hello World" << std::endl;
}

// C++ learning W3School
#include <iostream>

int main() {
    int a = 10;
    {
        int a = 20;  // 块作用域变量
        std::cout << "块变量: " << a << std::endl;
    }
    std::cout << "外部变量: " << a << std::endl;
    return 0;
}

#include <iostream>
using namespace std;
 
int main () {
  char a = 65, b = 66, c = 67;
  cout << a;
  cout << b;
  cout << c;
  return 0;
}
