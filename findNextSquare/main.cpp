#include <cmath>
#include <iostream>


long int findNextSquare(long int sq) {
 long double number = std::sqrt(sq);
  if (number == int(number)){
    return (number + 1) * (number + 1);
  }
  return -1;
}

int main(){
    std::cout << findNextSquare(121)<<'\n'; 

return 0;
}