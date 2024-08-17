#include "directoryNames.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
// получаем путь к домашнему каталогу в зависимости от системы
void getHomeDirectory(char* dirname)
{
  #ifdef __unix__
    sprintf(dirname, "%s%s", getenv("HOME"), "/newdir/");
  #elif defined _WIN32
    sprintf(dirname, "%s%s%s", getenv("HOMEDRIVE"), getenv("HOMEPATH"),"\newdir\\");
  #endif
}
// получаем путь к текущему каталогу в зависимости от системы
void getCurrentDirectory(char* dirname)
{
  #ifdef __unix__
    strcpy(dirname, "newdir/");
  #elif defined _WIN32
    strcpy(dirname, "newdir\\");
  #endif
}