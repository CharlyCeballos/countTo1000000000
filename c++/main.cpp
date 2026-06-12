#include <iostream>
#include <cstddef>
#include <chrono>
/*
Make a program that counts to 1 000 000 000 in C++
*/

int main() 
{
  constexpr std::size_t kLimit = 1'000'000'000; 
  
  auto start = std::chrono::high_resolution_clock::now();

  std::size_t n = 0;
  while (n < kLimit) {
      n++;
  }

  auto end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double, std::milli> total_time = end - start;

  std::cout << "Result: " << n << '\n'; 
  std::cout << "Executed time: " << total_time.count() << " ms\n";
  
  std::cout << "\nPress Enter to exit...";
  std::cin.get(); 
}
