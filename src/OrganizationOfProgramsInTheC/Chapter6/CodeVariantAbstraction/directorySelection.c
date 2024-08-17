#include "directorySelection.h"
#include "directoryNames.h"
 
void getDirectoryName(char* dirname)
{
  #ifdef HOME_DIR
    getHomeDirectory(dirname);
  #elif defined CURRENT_DIR
    getCurrentDirectory(dirname);
  #endif
}