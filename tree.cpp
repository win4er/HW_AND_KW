#include<iostream>

void drawTree(int height, int x_center, char* sym) {
  int id = 0;
  for (int i=0; i < height; i++) {
    if (sym[id] == '-') {
      id -= 2;
    }
    for (int j=0; j < x_center-i-1; j++) {
      std::cout << " ";
    }
    for (int j=0; j < i*2+1; j++) {
      std::cout << sym[id];
    }
    std::cout << "\n";
    id += 1;
  }
}

int main() {
  char temp[3] = {'0', '+', '-'};
  drawTree(5, 25, &temp[0]);
  return 0;
}