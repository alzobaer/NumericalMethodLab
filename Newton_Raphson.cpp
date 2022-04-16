#include <bits/stdc++.h>
#define EPSILON 0.001
using namespace std;
class Newton_Raphson{
        public:
                double a, b;
                double myFunc(double x){
                        return x*x*x - 5*x*x + 2;
                }

                double derivativeFunc(double x){
                        return 3*x*x - 10*x;
                }

                void newtonRaphson()
                {
                    double h = myFunc(a) / derivativeFunc(a);
                    while (abs(h) >= EPSILON)
                    {
                        h = myFunc(a)/derivativeFunc(a);
                        a = a - h;
                    }

                    cout << "The value of the root is : " << a;
                }

};

int main(){
        Newton_Raphson myObj;
        myObj.a = -20;
        myObj.newtonRaphson();
}
