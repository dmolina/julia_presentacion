#include <stdio.h>

char msg[80];

char *getname(int num) {
  sprintf(msg, "Hola a los %d asistentes", num);
  return msg;
}
