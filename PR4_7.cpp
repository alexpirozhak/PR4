#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {

double xp, xk, x, dx, eps, a=0, R=0, S=0;
int n=0;
/*cout << "xp = "; cin >> xp; 
cout << "xk = "; cin >> xk; 
cout << "dx = "; cin >> dx; 
cout << "eps = "; cin >> eps;
*/

while (true)
{
    cout << "xp = "; cin >> xp; 
    cout << "xk = "; cin >> xk; 
    

    if (xk>=xp && (xp<-1 && xk<-1 || xp>1 && xk>1))
    {
        break;
    }
    cout << "введіть коректні значення" << endl;
}

    cout << "dx = "; cin >> dx; 
    cout << "eps = "; cin >> eps;




cout << fixed;
cout << "-------------------------------------------------" << endl;
cout << "|" << setw(8)  << "x"      << " |"
            << setw(17) << "log((x+1)/(x-1)" << " |"
            << setw(10) << "S"      << " |"
            << setw(5)  << "n"      << " |"
            << endl;
 
 
cout << "-------------------------------------------------" << endl;
x = xp;
while (x <= xk)
{
    n = 0;
    a = 2/x;
    S = a;
    do{
        n++;
        R = (2*n-1)/((2*n+1)*x*x);
        a *= R;
        S += a;
    }while (abs(a)>=eps);
// вираз залежить від умови завдання варіанту
// вираз залежить від умови завдання варіанту
// вираз залежить від умови завдання варіанту
cout << "|"<< setw(8)  << setprecision(2) << x << " |"
<< setw(17) << setprecision(5) << log((x+1)/(x-1)) << " |"
<< setw(10) << setprecision(5) << S << " |"
<< setw(5)  << n << " |"
<< endl;
x += dx; 
}

 

cout << "-------------------------------------------------" << endl; return 0;
}