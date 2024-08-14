#include <stdio.h>
 
 // если структура вдруг располагается в статической или динамической памяти,
 //  то в целях экономии памяти эффективнее возвращать указатель на структуру.
typedef struct{
  int x;
  int y;
  int z;
} Point3D;

Point3D* getCenter()
{
  static Point3D point;
  point.x = 3;
  point.y = 5;
  point.z = 7;
  return &point;    // возвращаем адрес структуру
}
int main(void)
{
  Point3D* center = getCenter();
  printf("x=%d\n", center->x);
  printf("y=%d\n", center->y);
  printf("z=%d\n", center->z);
}