#include <stdio.h>
#include <tgmath.h>
int main() {
  const double ε = 1E-9;
  double const a = 34.0;
  double x = 0.5;
  while (fabs(1.0 - a * x) >= ε) {
    x *= (2.0 - a * x);
		printf ("%f", x);
  }
}
