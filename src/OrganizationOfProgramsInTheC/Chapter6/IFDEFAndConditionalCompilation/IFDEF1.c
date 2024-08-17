#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#ifdef __unix__
  #include <sys/stat.h>
  #include <fcntl.h>
  #include <unistd.h>
#elif defined _WIN32
  #include <windows.h>
#endif
 
void getDirectoryName(char* dirname)
{
  #ifdef __unix__
    #ifdef HOME_DIR
      sprintf(dirname, "%s%s", getenv("HOME"), "/newdir/");
    #elif defined CURRENT_DIR
      strcpy(dirname, "newdir/");
    #endif
  #elif defined _WIN32
    #ifdef HOME_DIR
      sprintf(dirname, "%s%s%s", getenv("HOMEDRIVE"), getenv("HOMEPATH"), "\newdir\\");
    #elif defined CURRENT_DIR
      strcpy(dirname, "newdir\\");
    #endif
  #endif
}
 
void createNewDirectory(char* dirname)
{
  #ifdef __unix__
    mkdir(dirname,S_IRWXU);
  #elif defined _WIN32
    CreateDirectory (dirname, NULL);
  #endif
}
 
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