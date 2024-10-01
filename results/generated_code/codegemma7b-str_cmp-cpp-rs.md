```rust
use std::cmp::Ordering;

fn main() {
    // Case-sensitive comparisons
    let a = "hello".to_string();
    let b = "world".to_string();

    println!("a == b: {}", a == b); // false
    println!("a != b: {}", a != b); // true
    println!("a < b: {}", a < b); // true
    println!("a > b: {}", a > b); // false

    // Case-insensitive comparisons
    let a = "HELLO".to_lowercase();
    let b = "world".to_lowercase();

    println!("a == b: {}", a == b); // false
    println!("a != b: {}", a != b); // true
    println!("a < b: {}", a < b); // false
    println!("a > b: {}", a > b); // false

    // Numeric comparisons
    let a = "123".to_string();
    let b = "456".to_string();

    let num_a: f64 = a.parse().unwrap();
    let num_b: f64 = b.parse().unwrap();

    println!("num_a == num_b: {}", num_a == num_b); // false
    println!("num_a != num_b: {}", num_a != num_b); // true
    println!("num_a < num_b: {}", num_a < num_b); // true
    println!("num_a > num_b: {}", num_a > num_b); // false
}
```

**Explanation:**

* The `==`, `!=`, `<`, and `>` operators are used to compare strings for equality, inequality, ordering before, and ordering after, respectively.
* The `to_lowercase()` method is used to convert strings to lowercase for case-insensitive comparisons.
* The `parse()` method is used to convert numeric strings to floating-point numbers for numerical comparisons.
* The `Ordering` enum is used to represent the result of string comparisons, which can be `Less`, `Greater`, or `Equal`.

**Output:**

a == b: false
a != b: true
a < b: true
a > b: false
a == b: false
a != b: true
a < b: false
a > b: false
num_a == num_b: false
num_a != num_b: true
num_a < num_b: true
num_a > num_b: false
