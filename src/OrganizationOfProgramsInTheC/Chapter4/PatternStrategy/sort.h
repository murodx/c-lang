// тип указателя на функцию сравнения - принимает два параметра типа int и возвращает число int
typedef int (*comparator)(int x, int y);
// функция сортировки, принимает функцию  сравнения, массив и длину массива
void sort(comparator compare, int* array, size_t length);