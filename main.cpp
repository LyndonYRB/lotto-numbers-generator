#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int main()
{

  srand(time(0));
  int size = 6;
  int x;
  int lotto[size];

  for (x = 0; x <= size; x++)
  {
    int num = ((rand() % 70) + 1);
    lotto[x] = num;

    cout << lotto[x] << endl;
  }

  return 0;
}