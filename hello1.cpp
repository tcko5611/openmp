#include <omp.h>
#include <iostream>

int main(int argc, char** argv) {
  #pragma omp parallel
  {
    int ID = omp_get_thread_num();
    std::cout << "hello(" << ID << ") " << "world(" << ID << ")" << std::endl; 
  }
  return 0;
}
