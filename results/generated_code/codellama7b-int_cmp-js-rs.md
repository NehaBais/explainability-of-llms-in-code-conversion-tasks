To convert this code from JavaScript to Rust, you can use the `std::cmp` module to perform the comparisons. Here is an example of how you can do this:
```
use std::cmp;

fn compare(a: i32, b: i32) {
    if cmp::eq(a, b) {
        println!("{} equals {}", a, b);
    } else if cmp::lt(a, b) {
        println!("{} is less than {}", a, b);
    } else if cmp::gt(a, b) {
        println!("{} is greater than {}", a, b);
    }
}
```
This code uses the `eq`, `lt`, and `gt` functions from the `std::cmp` module to compare the two integers. These functions return true if the conditions are met, and false otherwise. The `println!` macro is used to print the comparison results to the console.

Note that in Rust, you don't need to check for type coercion like you would in JavaScript because the language enforces strict typing rules. If you try to compare two values of different types, the compiler will catch it and prevent the code from compiling.
