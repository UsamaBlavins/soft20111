
#include <iostream>
#include "other.h"

int main() {
 Rectangle myRect;
 myRect.setVal(5,7);
 std::cout << "area: " << myRect.findArea() << std::endl;
 return 0;
}
