#ifdef CURRENT_DIR
  #include "directorySelection.h"
  #include "directoryNames.h"
 
  void getDirectoryName(char* dirname)
  {
    return getCurrentDirectory(dirname);
  }
#endif