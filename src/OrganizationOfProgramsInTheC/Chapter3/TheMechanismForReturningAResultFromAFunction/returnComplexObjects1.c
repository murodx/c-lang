#include <stdio.h>
 
typedef struct{
  int x;
  int y;
  int z;
} Point3D;
// данные структуры также копируются.
Point3D getCenter()
{
  Point3D point;
  point.x = 3;
  point.y = 5;
  point.z = 7;
  return point;
}
 
int main(void)
{
  Point3D center = getCenter(); // получаем стуктуру в локальную переменную
  printf("x=%d\n", center.x);
  printf("y=%d\n", center.y);
  printf("z=%d\n", center.z);
}