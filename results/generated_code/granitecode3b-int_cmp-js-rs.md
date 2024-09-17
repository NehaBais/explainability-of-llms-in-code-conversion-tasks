Sure, here's the Rust code that does the same thing as the JavaScript code:
```
fn main() {
 let mut a = 0;
 let mut b = 0;
 
 println!("Enter first integer:");
 std::io::stdin().read_line(&mut a).expect("Failed to read line");
 a = a.trim().parse::<i32>().unwrap();
 
 println!("Enter second integer:");
 std::io::stdin().read_line(&mut b).expect("Failed to read line");
 b = b.trim().parse::<i32>().unwrap();
 
 if a < b {
 println!("{} is less than {}", a, b);
 } else if a == b {
 println!("{} equals {}", a, b);
 } else {
 println!("{} is greater than {}", a, b);
 }
}
```
The Rust code takes in two integers from the user using `std::io::stdin().read_line()`, parses them into integers with `trim().parse::<i32>().unwrap()`, and then uses conditional statements to compare them. The output message is displayed based on which condition is true.

