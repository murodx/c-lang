#ifdef HOME_DIR
  #include "directorySelection.h"
  #include "directoryNames.h"
 
  void getDirectoryName(char* dirname)
  {
    getHomeDirectory(dirname);
  }
#endif