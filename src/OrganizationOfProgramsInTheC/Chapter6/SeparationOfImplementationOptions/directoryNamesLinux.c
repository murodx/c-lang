#ifdef __unix__
  #include "directoryNames.h"
  #include <string.h>
  #include <stdio.h>
  #include <stdlib.h>
 
  void getHomeDirectory(char* dirname)
  {
    sprintf(dirname, "%s%s", getenv("HOME"), "/newdir/");
  }
 
  void getCurrentDirectory(char* dirname)
  {
    strcpy(dirname, "newdir/");
  }
#endif