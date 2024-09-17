Rust version:

```rust
use std::io; // Importing the io module to use features related to input and output.

fn main() {
    let mut a = String::new();   // Declare variable 'a'
    let mut b = String::new();  // Declare variable 'b'
    
    println!("Please enter two integers: ");
    io::stdin().read_line(&mut a).expect("Read line failed!"); // Read integer from std input and store in 'a'.
    io::stdin().read_line(&mut b).expect("Read line failed!");  // Read integer from std input and store in 'b'.
    
    let a: i32 = a.trim().parse().unwrap();   // Convert the string to integer.
    let b: i32 = b.trim().parse().unwrap();   // Convert the string to integer.
       
    let sum = a + b;         // The result of adding 'a' and 'b'.
    let difference = a - b;  // The result of subtracting 'b' from 'a'.
    let product = a * b;     // The result of multiplying 'a' and 'b'.
    let division = a / b;    // The integer part of dividing 'a' by 'b', truncating towards zero. 
    let remainder = a % b;   // The remainder of dividing 'a' by 'b'. If the second operand is not positive, it rounds to zero.
    
    println!("{} + {}  = {}" , a, b, sum);                   
    println!("{} - {}  = {}" , a, b, difference);            
    println!("{} * {} = {}" , a, b, product);                
    println!("Quotient of {} / {} = {}", a, b, division);     
    println!("Remainder of {} / {}  = {} ", a, b, remainder); 
}
```
In Rust:
- Division rounds towards zero. For example, truncating -7 divided by -2 results in 3 because the result is closer to zero than it would be if we rounded towards negative infinity.
- The sign of the remainder depends on whether `b` (the divisor) was positive or negative at the time of division. If `b` is negative, then the remainder will also be negative even when the dividend is positive and vice versa. 

