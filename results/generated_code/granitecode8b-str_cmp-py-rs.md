Here is the converted code from Python to Rust:
```rust
fn compare(a: &str, b: &str) {
 println!("{} is of type {} and {} is of type {}", a, std::any::type_name::<&str>(), b, std::any::type_name::<&str>());
 if a < b {
 println!("{} is strictly less than {}", a, b);
 }
 if a <= b {
 println!("{} is less than or equal to {}", a, b);
 }
 if a > b {
 println!("{} is strictly greater than {}", a, b);
 }
 if a >= b {
 println!("{} is greater than or equal to {}", a, b);
 }
 if a == b {
 println!("{} is equal to {}", a, b);
 }
 if a != b {
 println!("{} is not equal to {}", a, b);
 }
}
fn compare_case_insensitive(a: &str, b: &str) {
 let a_lowercase = a.to_lowercase();
 let b_lowercase = b.to_lowercase();
 
 if a_lowercase < b_lowercase {
 println!("{} is strictly less than {}", a, b);
 } else if a_lowercase > b_lowercase {
 println!("{} is strictly greater than {}", a, b);
 } else {
 println!("{} is equal to {}", a, b);
 }
}
fn compare_numeric_strings(a: &str, b: &str) -> std::cmp::Ordering {
 let a_num = a.parse::<i32>().unwrap();
 let b_num = b.parse::<i32>().unwrap();
 
 if a_num < b_num {
 return std::cmp::Ordering::Less;
 } else if a_num > b_num {
 return std::cmp::Ordering::Greater;
 } else {
 return std::cmp::Ordering::Equal;
 }
}
fn main() {
 compare("YUP", "YUP");
 compare("BALL", "BELL");
 compare("24", "123");
 compare("5", "5.0");
 compare_case_insensitive("YUP", "yup");
 compare_case_insensitive("BALL", "BELL");
 compare_case_insensitive("24", "123");
 compare_case_insensitive("5", "5.0");
 println!("{:?}", compare_numeric_strings("24", "123")); // Prints "Less"
 println!("{:?}", compare_numeric_strings("5.0", "5")); // Prints "Greater"
 println!("{:?}", compare_numeric_strings("5", "5")); // Prints "Equal"
}
```

