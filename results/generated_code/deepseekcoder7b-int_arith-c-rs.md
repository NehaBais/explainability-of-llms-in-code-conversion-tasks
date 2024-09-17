Rust code to perform the operations is given below. Note that Rust doesn't have an equivalent of 'atoi', so it uses the `parse` function for parsing strings into integers. Error handling has been omitted as per your request.

Here are the functions used - `println!()`, `read_line!()` and `unwrap()`: 
- The `println!()` macro is like printf from C language to print output on console in Rust.
- The `read_line!()` macro reads a line from the standard input.
- The `unwrap()` method converts an Option into its inner value, if it exists and returns Ok(value), or panics with a custom error message if there is nothing to return. 

```rust
use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    
    io::stdin().read_to_string(&mut input).expect("Read line");
    let a: i32 = input.trim().parse().unwrap();
    input.clear(); 
        
    io::stdin().read_line(&mut input).expect("Read line");
    let b: i32 = input.trim().parse().unwrap();
    
    println!("a+b  = {}", a + b); // sum
    println!("a-b  = {}", a - b); // difference 
    println!("a*b  = {}", a * b); // product
    println!("a/b  = {}", a / b); // quotient (rounded towards zero)
    println!("a%b  = {}", a % b); // remainder, if they are different.
}
``` 

In the above code:
- The `read_to_string()` method reads from stdin until an EOF is reached, storing what it read into 'input'. It returns Result with number of bytes read or error that occurred.
- Similarly, `read_line()` reads a line (including newline) from the standard input and stores them in 'input', returns result containing number of bytes read/written or error.
- The `trim()` method removes leading and trailing whitespace characters. 
- If the parsing fails to convert string into integer, parse function will return a Result with Err value which we then unwrap resulting in program termination via panic.

