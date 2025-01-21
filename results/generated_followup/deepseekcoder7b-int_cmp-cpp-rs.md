The error occurs because Rust compiler cannot infer the type to use for `parse()` function as it is unable to determine the correct concrete type for the generic parameter 'F'. 

The fix for this issue would be to specify the type of the integer, such as i32. So the corrected code in a single block would look like:

```rust
use std::io;

fn main() {
    let mut input = String::new();
    println!("Enter two integers separated by spaces:");
    
    match io::stdin().read_line(&mut input) {
        Ok(_n) => {
            let values: Vec<&str> = input.split_whitespace().collect();
            
            if let (Some(num1), Some(num2)) = 
                (values[0].parse::<i32>().ok(), values[1].parse::<i32>().ok()) {
                
                if num1 < num2 {
                    println!("{} is less than {}", num1, num2);
                } else if num1 == num2 {
                    println!("{} is equal to {}", num1, num2);
                } else {
                    println!("{} is greater than {}", num1, num2);
                }
            } else {
                eprintln!("Invalid input");
            }
        }
        
        Err(error) => eprintln!("Could not read the numbers: {}", error),
    };
}
```
This Rust code accomplishes the same task as the provided C++ code, but it correctly specifies that integer parsing should be done for both inputs. The user is prompted to enter two integers separated by spaces and the program compares these values accordingly. If any issues occur during reading or parsing of input numbers, an appropriate error message will be displayed.

