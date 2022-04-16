#include <bits/stdc++.h>
#define MaxIter 1000000
using namespace std;
class False_Position{
        public:
        double a, b;

        double func(double x){
                return x*x*x - x*x + 2;
        }

        void regulaFalsi(){
                    if (func(a) * func(b) >= 0){
                        cout << "You have not assumed right a and b\n";
                        return;
                    }

                    double c = a;  // Initialize result

                    for (int i=0; i < MaxIter; i++){
                        // Find the point that touches x axis
                        c = (a*func(b) - b*func(a))/ (func(b) - func(a));

                        // Check if the above found point is root
                        if (func(c)==0)
                            break;

                        // Decide the side to repeat the steps
                        else if (func(c)*func(a) < 0)
                            b = c;
                        else
                            a = c;
                    }
                    cout << "The value of root is : " << c;
        }
};
int main(){
        False_Position myObj;
        myObj.a = -200;
        myObj.b = 300;
        myObj.regulaFalsi();
        return 0;
}
