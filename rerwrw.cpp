#include <iostream>
#include <cmath>


using namespace std;

int main()
{

    double x = 0.461630;
    double r = 0;

    //check this
    for (double k = 1.0 ;k < 100000000 ; k = k + 1.0)
     {
         r = r + 1/k - 1/(k + x);
     }


    cout << r <<endl;

  return 0;
}
