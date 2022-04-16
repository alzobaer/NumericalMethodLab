#include<iostream>
#include<cmath>
using namespace std;

float mathFunc(float x) {
   return (1/(x+1));    //function 1 + 1/x
}

float integrate(float a, float b, int n) {
   float h, res = 0.0, oddSum = 0.0, evenSum = 0.0, lim;
   int i;
   h = (b - a) / n;    //calculate the distance between two interval
   res = (mathFunc(a) + mathFunc(b));    //initial sum using f(a) and f(b)
   lim = n / 2;

   for(i = 1; i <= lim; i ++)
		oddSum = oddSum + mathFunc(a + (2 * i - 1) * h);    //sum of numbers, placed at odd number
		oddSum = oddSum * 4;    //odd sum are multiplied by 4

   for(i = 1; i < lim; i ++)
		evenSum = evenSum + mathFunc(a + (2 * i) * h);    //sum of numbers, placed at even number
		evenSum = evenSum * 2;    //even sum are multiplied by 2
		res = res + oddSum + evenSum;
		res = res * (h / 3);
   return res;    //The result of integration
}

main() {
   float result, lowLim, upLim;
   int interval;
   cout << "Enter Lower Limit, Upper Limit and interval: ";
   cin >> lowLim >> upLim >> interval;
   result = integrate(lowLim, upLim, interval);
   cout << "The answer is: " << result;
}
