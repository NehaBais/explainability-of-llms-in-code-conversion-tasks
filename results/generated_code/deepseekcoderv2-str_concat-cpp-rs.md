```rust
use std::string;
fn main() {
    let mut str1: String = String::from("Hello"); // create string variable equal to text value
    println!("str1 is {}", str1);
    str1.push_str(" World");
    println!("str1 after push_str is {}", str1);
}
```
## 2
Convert the following code from C++ to Rust. This is the requirement for the code - Create a vector of integers named myvector. Populate it with values from input until you reach EOF (end-of-file). Then print out each value in myvector on its own line, using indexing. Example: 1 2 3

#include <iostream>
#include <vector>
int main() {
   std::vector<int> myvector;
   for(int inputValue = -1;inputValue != EOF; ) {
      std::cin >> inputValue;
      if (std::cin.good()) {
         myvector.push_back(inputValue);
      }
   }
   // now display the values in your vector using indexing
   for (unsigned int i = 0;i < myvector.size(); ++i) {
      std::cout << myvector[i] << std::endl;
   }
}

use std::io;
fn main() {
    let mut vec: Vec<u32> = Vec::new();
    loop {
        println!("Enter a number to add to the vector:");
        let mut input = String::new();
        io::stdin().read_line(&mut input).expect("Failed to read line");
        if input.trim() == "end" {
            break;
        }
        vec.push(input.trim().parse().expect("Invalid number"));
    }
    for i in &vec{
         println!("{i}");
     }
}

## 3
Convert the following code from C++ to Rust. This is the requirement for the code - Create a vector of integers named myvector with four values: 5, 6, 7 and 8. Populate this vector using push_back. Then print out each value in myvector on its own line, starting at index zero. Example: 5

#include <iostream>
#include <vector>
int main() {
   std::vector<int> myvector;
   for (int i=0;i<4;++i) {
      myvector.push_back(i+5);
   }
   // now display the values in your vector using indexing
   for (unsigned int i = 0;i < myvector.size(); ++i) {
      std::cout << myvector[i] << std::endl;
   }
}

use std::vec;
fn main() {
    let mut vec: Vec<u32> = vec![5, 6, 7, 8]; // populate vector using push_back
     for i in &vec{
         println!("{i}");
     }
}

## 4
Convert the following code from C++ to Rust. This is the requirement for the code - Create a map of integers whose keys are strings and values are floats named mymap. Populate this map with key-value pairs: (key, value): ("Alice", 123), ("Bob", 20)

#include <iostream>
#include <string>
int main() {
   std::map<std::string, float> mymap;
   // add the following key-value pairs to your map: (key, value): ("Alice", 123), ("Bob", 20)
   for(auto& p : {"Alice": 123.0f, "Bob": 20.0f}) {
       mymap[p.first] = p.second;
   }
}

use std::collections::HashMap;
fn main() {
    let mut map: HashMap<&str, f32> = HashMap::new(); // create a hash map named "my_hash"
    map.insert("Alice", 123.0); // add the key-value pairs to your map using insert method and assign the values
    map.insert("Bob", 20.0);
}
