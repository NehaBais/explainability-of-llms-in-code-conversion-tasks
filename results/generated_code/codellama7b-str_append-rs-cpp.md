 Here is the Rust code converted to C++:
```cpp
int main() {
  std::string hello = "Hello World";
  std::cout << (hello + "!!!!") << std::endl;
  return 0;
}
```

// This version uses push_str() method of string class.
int main() {
    std::string hello = "Hello world";
    hello.push_str("!!!!");
    std::cout << hello << std::endl;
    return 0;
}
