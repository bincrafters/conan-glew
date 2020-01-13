#include <stdio.h>
#include "GL/glew.h"

int main () {
  printf("Status: Using GLEW %s\n", glewGetString(GLEW_VERSION));
  return 0;
}
