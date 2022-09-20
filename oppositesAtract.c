#include <stdbool.h>

bool lovefunc(int flower1, int flower2) {
	bool flower1_odd = flower1 % 2 != 0;
  bool flower2_odd = flower2 % 2 != 0;
  if (flower1_odd ^ flower2_odd)
  {
    return true;
  }
  return false;
}