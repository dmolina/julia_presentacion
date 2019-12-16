#include <stdio.h>

char msg[80];

char *getname(int num) {
  sprintf(msg, "Hello to the %d assistants", num);
  return msg;
}
