#include <iostream>
using namespace std;
int main()
{
  // do-while vs while
  // while -- this loop starts its execution by first checking condition
  // do while -- on its first execution it will execute without checking condition -- 10
  // first execute something then check condition
  // do{

  // }while();
  int i = 1;
  int sum = 0;
  do
  {
    sum += i * i;
    i += 2;
    
  } while (i < 10);
  cout << sum;
  return 0;
}