Sure! Here's the equivalent Rust code for the given Python code snippet:
```
fn compare(a: &str, b: &str) {
 println!("{} is of type {:?} and {} is of type {:?}", a, a.get_type(), b, b.get_type());
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
 if a as *const str == b as *const str {
 println!("{} has object identity with {}", a, b);
 }
 if a as *const str != b as *const str {
 println!("{} has negated object identity with {}", a, b);
 }
}
fn main() {
 compare("YUP", "YUP");
 compare("BALL", "BELL");
 compare("24", "123");
 compare(24, 123);
 compare(5.0, 5);
}
```
Note that in Rust, there is no need to use the `get_type()` method like in Python. Instead, you can use the built-in `type` keyword to get the type of a variable. Also, the `<` and `>` operators are used for lexical comparison in Rust, while the `<=` and `>=` operators are used for comparison with equality. Finally, the `is` operator is used to check object identity between two variables.

