In Rust, you can use the `read_line` function in combination with `parse::<i32>` to get input from users. Here's how you could write this code in Rust:

```rust
use std::io;

fn main() {
    let mut input = String::new();
    
    println!("Please enter two integers separated by a space");

    match io::stdin().read_line(&mut input) {
        Ok(_n) => {
            let (a, b) = parse_input(input.as_str());
            
            if a < b {
                println!("{} is less than {}", a, b);
            }
    
            if a == b {
                println!("{} is equal to {}", a, b);
            }
        
            if a > b {
                println!("{} is greater than {}", a, b);
            }
        },
        Err(error) => println!("Error: {}", error),
    };
}

fn parse_input(s: &str) -> (i32, i32) {
    let mut numbers = s.split(' ').map(|n| n.parse::<i32>().unwrap());
    (numbers.next().unwrap(), numbers.next().unwrap())
}
```
Please note that this code might panic if the user does not input two integers or if they do so in an incorrect format, as `parse()` function will return a Result type and unwrapping it is not handled here which can lead to runtime errors. In real-world applications you should handle these cases properly by using patterns matching on result types.

