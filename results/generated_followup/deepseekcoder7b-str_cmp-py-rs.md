The error message indicates that Rust does not provide a built-in function to get the type of an object. It also fails to infer the type parameter `T` for the `compare` function, as it is required by the bound on `Ord` trait. 

The fix involves specifying the generic argument and adding type annotations:

Rewrite in single code block:
```rs
fn compare<T>(a: &str, b: &str) where T: std::cmp::PartialEq + std::fmt::Debug {  // Specify generic argument and add constraints on PartialEq and Debug traits.
    println!(
        "{} is of type {} and {} is of type {}",
        a,
        std::any::type_name::<T>(),     // Use the function `type_name` to obtain run-time type information
        b,
        std::any::type_name::<T>()      // Use the function `type_name` to obtain run-time type information
    );

    if a < b  { println!("{} is strictly less than {}", a, b) }
    if a <= b { println!("{} is less than or equal to {}", a, b) }
    if a > b  { println!("{} is strictly greater than {}", a, b) }
    if a >= b { println!("{} is greater than or equal to {}", a, b) }
    if a == b { println!-- "{} equals to {}", a, b }           // Equivalent to Python's `==` for strings
    if a != b { println!-- "{} not equals to {}", a, b}        // Equivalent to Python's `！=` for strings
}

fn main() {
  compare::<str>("YUP","YUP");
}
```

Explanation: Corrected the `compare` function by specifying its type parameter and adding constraints on `PartialEq` (for equality comparison) and `Debug` (for printing debug information about a value). It now uses `std::any::type_name` to get run-time type information, which is equivalent to Python's `type()` function. This allows the function to print out the types of the parameters when invoked, as required by the original code in backticks.

