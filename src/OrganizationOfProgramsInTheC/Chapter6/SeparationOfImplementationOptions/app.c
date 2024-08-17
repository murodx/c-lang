#include "directorySelection.h" // API для установки пути к папке
#include "directoryHandling.h" // API для создания папки
#include <string.h>
#include <stdio.h>
 
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