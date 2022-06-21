#include<algorithm>
#include<numeric>
#include<iostream>

int gcd(int x, int y) {
  return std::__gcd(x,y);
}
int main() {
  std::vector<int> vec{10,2,180,6}; 
  std::cout << "Sum of elements: " << std::accumulate(vec.begin(),vec.end(),0) <<std::endl;
  std::cout << "Greates common divisor: " << std::accumulate(vec.begin(),vec.end(),gcd)<<std::endl;
  return 0;
}
