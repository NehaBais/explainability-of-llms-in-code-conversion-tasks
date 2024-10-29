Rust code to compare two strings in Rust is given below:

```rust
fn compare<T: std::cmp::Ord>(a: &str, b: &str){
    println!("{} is of type {} and {} is of type {}", a, a.get_type(), b, b.get_type());
    
    if a < b {println!("{} is strictly less than  {}", a, b)}
    if a <= b {println!("{} is less than or equal to {}", a, b)}
    if a > b {println!("{} is strictly greater than  {}", a, b)}
    if a >= b {println!("{} is greater than or equal to {}", a, b)}
    if a == b {println!("{} is equal to {}", a, b)}
    if a != b {println!("{} is not equal to {}", a, b)}
    
}

fn main(){
   compare("YUP","YUP");
   compare("BALL","BELL");
   // For non-string types of comparison we need to cast them into String then compare.
   compare(&String::from("24"), &String::from("123"));
   
   let a = Box::new(5.0);
   let b = Box::new(5);
   // For numeric types of comparison we need to convert them into string first then compare.
   compare(&a.to_string(), &b.to_string()); 
}
```
The function `compare` checks lexical ordering, equality and order using Rust's built-in traits such as Ord (for ordering), Eq (for equality) for strings. It is also possible to use PartialEq or PartialOrd if you want more control over how the comparisons are done.

Note: There's no equivalent "is" operator in Rust because there isn't a direct way to compare memory locations with objects (unlike Python). Also, unlike Python, Rust does not convert data types automatically when comparing them. If you want automatic type conversion for comparison operation, you would need to use external libraries or implement a more complex function that can handle this.

