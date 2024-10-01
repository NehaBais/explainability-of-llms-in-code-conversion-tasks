```
use std::vector;
use std::string;

fn main() {
    let mut my_strings = vector::<string>{"prepended to", "my string"};
    let prepended = my_strings.iter().fold(String::from(""), |a, b| a + b);
    println!("{}", prepended);
    return 0;
}
```
Here's the code in Rust:
* We have to use `mut` since we are going to modify the vector.
* We use `let` to declare the variable `my_strings`.
* We create a vector of strings using the `std::vector` module and initialize it with two string literals.
* We declare the `prepended` variable, which is a `String` containing the concatenated values of all the elements in the `my_strings` vector.
* We use the `fold()` function to concatenate all the elements in the `my_strings` vector and store the result in the `prepended` variable. The `fold()` function takes three arguments: the initial value of the accumulator (`String::from("")`), a closure that takes two arguments, and an iterator over the values to fold. In this case, we are using the `+` operator as the closure, which concatenates strings.
* We print the result using the `println!()` macro.
* The function returns 0 to indicate successful execution.
