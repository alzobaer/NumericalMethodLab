#include<bits/stdc++.h>
#define e 0.01
using namespace std;
class Bisection_method{
        public:
        double a, b;
        double Func(double x){
                return x*x*x - x*x + 2;
        }
        void Bisection(){
                if(Func(a) * Func(b) >= 0){
                        cout << "Incorrect a and b !!! ";
                }
                double c = a;
                while ((b - a) >= e){
                        c = (a + b) / 2;
                        if(Func(c) == 0.0){
                                break;
                        }
                        else if (Func(c) * Func(a) < 0.0){
                                b = c;
                        }
                        else
                                a = c;
                }
                cout << "The root of the function is = " << c << endl;
        }
};
int main(){
        Bisection_method myObj;
        myObj.a = -500.0;
        myObj.b = 300.0;
        myObj.Bisection();
        return 0;
}
