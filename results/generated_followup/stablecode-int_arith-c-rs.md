The error is caused by an unclosed delimiter at line 3, where the `fn main()` function declaration started. The fix for this error would be to add a closing delimiter `}` after the `a: i32 = match a.trim().parse() {` line to properly close the function declaration.

Here is the corrected code in a single fenced code block:
```rust
use std::io;

fn main() 
{
    let mut a = String::new();
    println!("Enter first integer:");
    io::stdin().read_line(&mut a)).expect("Failed to read line");

    let mut b = String::new();
    println!("Enter second integer:");
    io::stdin().read_line(&mut b)).expect("Failed to read line");

    let a: i32 = match a.trim().parse() 
    {
        Ok(num) => num,
        Err(_) => panic!("Failed to parse input"),
    };

    let b: i32 = match b.trim().parse() 
    {
        Ok(num) => num,
        Err(_) => panic!("Failed to parse input"),
    };

    println!(
        "a+b={}, a-b={}, a*b={}, a/b={}, a%%b={}",
        a + b,
        a - b,
        a * b,
        a / b,
        a % b,
    );
}
```
