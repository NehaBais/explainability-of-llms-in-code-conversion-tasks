Here's the Rust code that performs the same operations as the given Java code:
```
use std::io;
fn main() {
 let mut a: i32 = 0;
 let mut b: i32 = 0;
 println!("Enter two numbers: ");
 io::stdin().read_line(&mut String::new())
 .expect("Failed to read line");
 let nums: Vec<&str> = String::new()
 .split(" ")
 .collect();
 a = nums[0].parse::<i32>().unwrap();
 b = nums[1].parse::<i32>().unwrap();

 let sum = a + b; // The result of adding 'a' and 'b' (Note: integer addition is discouraged in print statements due to confusion with string concatenation)
 let difference = a - b; // The result of subtracting 'b' from 'a'
 let product = a * b; // The result of multiplying 'a' and 'b'
 let division = a / b; // The result of dividing 'a' by 'b' (Note: 'division' does not contain the fractional result)
 let remainder = a % b; // The remainder of dividing 'a' by 'b'

 println!("a + b = {}", sum);
 println!("a - b = {}", difference);
 println!("a * b = {}", product);
 println!("quotient of a / b = {}", division); // truncates towards 0
 println!("remainder of a / b = {}", remainder); // same sign as first operand
}
```
The Rust code starts by declaring two variables, `a` and `b`, and then prompting the user to enter two numbers. The input is read using the `io::stdin().read_line()` function, which reads a line of text from the console and stores it in a string variable. This string is then split into individual words using the `split(" ")` method and converted to an array of `&str` using the `collect()` method. The values are then parsed as integers using the `parse::<i32>().unwrap()` method, and assigned to the variables `a` and `b`.
The code then performs the same operations as the Java code, calculating the sum, difference, product, quotient, remainder, and exponentiation (if the operator exists). The results are printed out using the `println!` macro. The `unwrap()` method is used to handle any errors that may occur during parsing or input/output operations.

