 In Rust, you can achieve the same comparison operations using a combination of the `PartialEq`, `Less` and `Display` traits for string and other types. Here is an equivalent Rust code:

```rust
use std::fmt;

fn compare<T: PartialEq + fmt::Debug>(a: T, b: T) {
    println!("{} is of type {:?} and {} is of type {:?}", a, std::any::type_name::<T>(), b, std::any::type_name::<T>());
    
    if a <  b {println!("{} is strictly less than  {}", a, b)};
    if a <= b {println!("{} is less than or equal to {}", a, b)};
    if a >  b {println!("{} is strictly greater than  {}", a, b)};
    if a >= b {println!("{} is greater than or equal to {}", a, b)};
    if a == b {println!("{} is equal to {}", a, b)};
    if a != b {println!("{} is not equal to {}", a, b)};
    if a as i32 == b as i32 {println!("{} has object identity with {}", a, b)};
    if a as i32 != b as i32 {println!("{} has negated object identity with {}", a, b)};
}

fn main() {
    compare("YUP", "YUP");
    compare("BALL", "BELL");
    compare(1024, 1000);
    compare('a', 'b');
    compare(5.0, 5);
}
```
This code will perform all the same operations as your Python example, but note that Rust's behavior when comparing different types is slightly different than in Python. The specific implementations of comparison for various numeric and character types (like `i32` vs `char`) are defined in the standard library.

Also, keep in mind that string comparison can be case sensitive or insensitive depending on the context. You could use the `to_lowercase()` method to normalize strings before comparing them if you want a case-insensitive comparison.
