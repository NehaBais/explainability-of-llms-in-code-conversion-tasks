The equivalent Rust code would be:

```rust
use std::io;

fn main() {
    let mut input = String::new();
    println!("Enter two integers: ");
    io::stdin().read_line(&mut input).unwrap();
    let (a, b) = parse_input(input.as_str());
    
    println!("{} + {} = {}", a, b, a + b);
    println!("{} - {} = {}", a, b, a - b);
    println!("{} * {} = {}", a, b, a * b);
  
    // Rust follows truncation towards zero for integer division.
    // For more specific rounding (towards negative infinity), 
    // you need to handle it explicitly with if-else statements. 
    println!("{} / {} = {}", a, b, if b != 0 { a / b } else {0});  
    
    // Unlike Go language, Rust does not have an operator for remainder with sign change on second operand.
    // So we need to calculate it explicitly by using the % operator and then check the signs of a and b. 
    let rem = if b != 0 { a % b } else {a};
    println!("{} % {} = {}", a, b, rem);  
}

fn parse_input(s: &str) -> (i32, i32) {
    let nums: Vec<&str> = s.split_whitespace().collect();
    return (nums[0].parse::<i32>().unwrap(), nums[1].parse::<i32>().unwrap());
}
```

Please note that Rust requires handling of parse errors, and the code assumes a correct user input.
For integer division remainder, unlike Golang, which can have different behavior based on rounding method (towards zero, towards negative infinity), Rust follows truncation towards zero. This is why there's no specific "round towards negative infinity" logic implemented in the provided Rust code, you would need to write additional if-else statements for such a case.

