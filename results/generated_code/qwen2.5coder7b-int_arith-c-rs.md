Here is the equivalent code in Rust:

```rust
fn main() {
    let mut input1 = String::new();
    let mut input2 = String::new();

    println!("Enter the first integer:");
    io::stdin().read_line(&mut input1).expect("Failed to read line");
    println!("Enter the second integer:");
    io::stdin().read_line(&mut input2).expect("Failed to read line");

    let a: i32 = input1.trim().parse().expect("Please type a number!");
    let b: i32 = input2.trim().parse().expect("Please type a number!");

    println!("a + b = {}", a + b);
    println!("a - b = {}", a - b);
    println!("a * b = {}", a * b);
    println!("a / b = {}", a / b); // Rounds towards zero
    println!("a % b = {}", a % b); // Matches the sign of the first operand
}
```
This Rust code does almost exactly what your C code does. It reads two integers from the user, performs the requested operations, and prints out the results.

As for the specific rounding modes and sign behavior mentioned in your question:

- In Rust's division operation (`/`), the result is rounded towards zero, just like in C99.
- The remainder operator (`%`) matches the sign of the first operand, also like in C99. If you want a different behavior for negative numbers, you'll need to implement that manually.

Keep in mind that Rust requires explicit error handling with functions like `read_line` and `parse`. In this code, we're using `expect`, which will crash the program if an error is encountered (like entering non-numeric characters). This matches the behavior of your C code when it uses `atoi` and exits on failure.
