#include <stdio.h>
#include <stdlib.h>
const double epslm01 = 1.0 - 0x1P-01;
const double epslp01 = 1.0 + 0x1P-01;
const double epslm24 = 1.0 - 0x1P-24;
const double epslp24 = 1.0 + 0x1P-24;

int main(int argc, char *argv[argc + 1]) {
  for (int i = 1; i < argc; i++) {
    double const a = strtod(argv[i], nullptr);
    double x = 1.0;
    for (;;) {
      double prod = a * x;
      if (prod < epslm01) {
        x *= 2.0;
      } else if (epslp01 < prod) {
				x *= 0.5;
      } else {
				break;
      }
    }
    for (;;) {
      double prod = a * x;
      if ((prod < epslm24) || (epslp24 < prod)) {
				x *= (2.0 - prod);
      } else {
				break;
      }
    }
    printf("heron: a=%.5e, \tx=%.5e, \ta*x=%.12f\n",
           a, x, a*x);
  }
	return EXIT_SUCCESS;
}
