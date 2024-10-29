The Rust programming language has similar features to the C++ language. This includes comparison of strings and handling numeric strings in a lexical order manner. Here's how you can convert your provided C++ code into Rust:

Rust Code:
```rust
fn demo_compare<T: std::cmp::PartialEq + std::fmt::Debug + std::cmp::PartialOrd>(a: &T, b: &T, semantically: &str) {
    println!("{} and {} are {}exactly equal.", a, b, if *a == *b {"not "});
    
    println!("{} and {} are {}inequal.", a, b, if *a != *b {"not "});
  
    println!("{} is {}ordered before {}.", a, if *a < *b {"not "} else {"un"}, b);
  
    println!("{} is {}ordered after {}.", a, if *a > *b {"not "} else {"un"}, b);
}
  
fn main() {
    let args: Vec<String> = std::env::args().collect();
    let a = &args.get(1).unwrap_or(&"1.2.Foo".to_string());
    let b = &args.get(2).unwrap_or(&"1.3.Bar".to<｜begin▁of▁sentence｜>tring());
    
    // Case-sensitive comparisons.
    demo_compare(&a, &b, "lexically");
  
    // Case-insensitive comparisons by creating a new string with the characters in lowercase.
    let lowercased_a = &a.chars().map(|c| c.to_ascii_lowercase()).collect::<String>();
    let lowercased_b = &b.chars().map(|c| c.to_ascii_lowercase()).collect::<String>();
    
    demo_compare(&lowercased_a, &lowercased_b, "lexically");
  
    // Numeric comparisons
    let numA: f64 = match a.parse() { Ok(n) => n, Err(_) => 0f64 };
    let numB: f64 = match b.parse() { Ok(n) => n, Err(_) => 0f64 };
    
    demo_compare(&numA, &numB, "numerically");
}
```
This code does the following things: 
- It uses `std::cmp::PartialEq` for equality checks. For inequality it uses `std::cmp::PartialOrd`. For ordering it again uses both traits together.
- The Rust way of comparing strings is using pattern matching and the comparison operators.
- As in C++, you can use the `to_ascii_lowercase()` method to convert a character into lowercase. It's done here with map().
- In the main function, we get command line arguments as a vector of strings using `std::env::args()` and parse them as numeric values if possible. If not, default values are used which will be zero in this case. 

In Rust, there is no need to explicitly specify template parameters for the generic function like you did in C++. It can determine its type automatically based on arguments passed during runtime. This makes code more flexible and less error-prone as compared to languages where explicit type information has to be provided at compile time.

