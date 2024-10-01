#include
int main() {
  std::string name = "Mary";
  std::string adj = "little";
  std::cout << name << " had a " << adj << " lamb" << std::endl;
  // You can specify order
  std::cout << adj << " had a " << name << " lamb" << std::endl;
  // Or named arguments if you prefer
  std::cout << "{name} had a {adj} lamb" << std::endl;
  std::cout.setf(std::ios::left);
  std::cout.width(10);
  std::cout << adj;
  std::cout << " had a ";
  std::cout.width(10);
  std::cout << name;
  std::cout << " lamb" << std::endl;
  return 0;
}