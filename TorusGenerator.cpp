#include "TorusGenerator.h"

float *torusMeshFnc(int vRes, int hRes, float outerCicumference,
                     float innerCircumference) {
  return new float[]{-1, -1, 0, 1, -1, 0, 1, 1, 0, -1, 1, 0};
}
