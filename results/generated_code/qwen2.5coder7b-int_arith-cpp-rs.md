Here is the equivalent code in Rust:

fn main() {
    let mut input = String::new();
    println!("Please enter the first number:");
    std::io::stdin().read_line(&mut input).unwrap();
    let a: i32 = input.trim().parse().unwrap();

    let mut input = String::new();
    println!("Please enter the second number:");
    std::io::stdin().read_line(&mut input).unwrap();
    let b: i32 = input.trim().parse().unwrap();

    println!("a + b = {}", a + b);
    println!("a - b = {}", a - b);
    println!("a * b = {}", a * b);

    // Rust uses floor division for the `/` operator
    println!("a / b = {}, remainder {}", a / b, a % b);
}

Please note that Rust does not directly support exponentiation out of the box. You will have to write a custom function for this:

```rust
fn power(base: i32, exp: i32) -> i32 {
    (1..exp).fold(1, |prod, _| prod * base)
}

fn main() {
    let mut input = String::new();
    println!("Please enter the first number:");
    std::io::stdin().read_line(&mut input).unwrap();
    let a: i32 = input.trim().parse().unwrap();

    let mut input = String::new();
    println!("Please enter the second number:");
    std::io::stdin().read_line(&mut input).unwrap();
    let b: i32 = input.trim().parse().unwrap();

    println!("a + b = {}", a + b);
    println!("a - b = {}", a - b);
    println!("a * b = {}", a * b);
    println!("a / b = {}, remainder {}", a / b, a % b);
    println!("a ^ b = {}", power(a, b));
}
```

For the `power` function in the above code, we're using `fold`, which is a powerful iterator method that can apply a function cumulatively to all items in an iterator. In this case, it's being used to multiply the base by itself exp number of times.

Regarding quotient and remainder, Rust uses floor division for `/` and calculates the remainder with `%`. This means that the quotient rounds towards zero and the sign of the remainder is the same as the sign of the first operand if they are different.
