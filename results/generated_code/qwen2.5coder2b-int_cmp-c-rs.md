Sure! Below is the equivalent Rust code for the given C code:

```rust
fn main() {
    // Get two integers from the user
    let mut a = input("Enter the first integer: ");
    let mut b = input("Enter the second integer: ");

    // Convert inputs to integers
    a = a.parse::<i32>().unwrap();
    b = b.parse::<i32>().unwrap();

    // Display message based on comparison
    if a < b {
        println!("{} is less than {}", a, b);
    } else if a == b {
        println!("{} is equal to {}", a, b);
    } else {
        println!("{} is greater than {}", a, b);
    }
}

fn input(prompt: &str) -> String {
    print!("{}", prompt);
    std::io::stdout().flush().unwrap();
    let mut input = String::new();
    std::io::stdin().read_line(&mut input).unwrap();
    input.trim_end().to_string()
}
```

### Explanation:
1. **Input Handling**: The `input` function is defined to handle user input as a string and then convert it to an integer using `.parse::<i32>()`.
2. **Comparison**: Three if-else statements are used to compare the two integers and print the appropriate message.
3. **Output**: The `println!` macro is used for formatting the output.

### Usage:
- This Rust code will prompt the user to enter two integers, then it will display a message based on the comparison of these integers.

To run this code, you can use the following command in your terminal:

rustc main.rs
./main
