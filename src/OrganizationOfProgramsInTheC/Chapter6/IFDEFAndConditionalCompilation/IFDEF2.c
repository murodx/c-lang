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
 
 
void getHomeDirectory(char* dirname)
{
  #ifdef __unix__
    sprintf(dirname, "%s%s", getenv("HOME"), "/newdir/");
  #elif defined _WIN32
    sprintf(dirname, "%s%s%s", getenv("HOMEDRIVE"), getenv("HOMEPATH"), "\\newdir\\");
  #endif
}
 
void getCurrentDirectory(char* dirname)
{
  #ifdef __unix__
    strcpy(dirname, "newdir/");
  #elif defined _WIN32
    strcpy(dirname, "newdir\\");
  #endif
}
 
void getDirectoryName(char* dirname)
{
  #ifdef HOME_DIR
    getHomeDirectory(dirname);
  #elif defined CURRENT_DIR
    getCurrentDirectory(dirname);
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