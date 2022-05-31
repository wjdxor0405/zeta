#include <iostream>
#include <cmath>


using namespace std;

int main(){


double r = 0;

double n = 1.0;



for (int i = 1; i < 10000 ;i++)
{


if(i % 8 == 1)
r = r - (7/n);
else
 r = r + (1/n);


 n = n + 1.0;
}

cout << r <<endl;


double pi = 3.1415926535897932384626433832795;


double x = cos(2*pi/5) * log(2*sin(pi/5));
double y = cos(4*pi/5) * log( 2 *sin(2*pi/5));

double a = sin(2*pi/5) * 3 * pi / 10;
double b = sin(4*pi/5) * pi / 10;

r = x + y ;//- a - b;

r = 2 * r;



cout << r <<endl;

r = 0;

return 0;

}
