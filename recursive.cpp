
#include "recursive.hpp"

void random_Fill_ar(int* ar, int size, int min, int max){
  srand(time(nullptr));
  for (int i = 0; i < size; i++){
    ar[i] = min + rand() % (max - min + 1);
  }
}

void show_ar(int* ar, int size, char element){
  for (int i = 0; i < size; i++){
    std::cout << ar[i] << element;
  }
  std::cout << std::endl;
}


int get_max(int* ar, int size) {
  int res1, res2;
  if (size == 1) {
    return ar[0];
  }
  res1 = get_max(&ar[0], size >> 1);
  res2 = get_max(&ar[size >> 1], size - (size >> 1));
  if (res1 >= res2) {
    return res1;
  } else {
    return res2;
  }
}


int get_min(int* ar, int size) {
  int res1, res2;
  if (size == 1) {
    return ar[0];
  }
  res1 = get_min(&ar[0], size >> 1);
  res2 = get_min(&ar[size >> 1], size - (size >> 1));
  if (res1 >= res2) {
    return res2;
  } else {
    return res1;
  }
}

