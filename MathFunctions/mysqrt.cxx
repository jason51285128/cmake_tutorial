#include <cmath>
#include "TutorialConfig.h"

double mysqrt(double x) {
#if defined(HAVE_LOG) && defined(HAVE_EXP)
  double result = x;
#else
  double result = x;
#endif
  return result;
}