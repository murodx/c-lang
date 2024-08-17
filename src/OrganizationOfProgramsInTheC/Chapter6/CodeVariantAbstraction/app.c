#include <stdio.h>
#include <string.h>
#include "directorySelection.h"
#include "directoryHandling.h"
 
int main(void)
{
  char dirname[60];
  char filename[120];
  char* text = "Hello METANIT.COM";
  getDirectoryName(dirname);
  createNewDirectory(dirname);
  sprintf(filename, "%s%s", dirname, "newfile");
  FILE* f = fopen(filename, "w+");
  fwrite(text, 1, strlen(text), f);
  fclose(f);
  return 0;
}