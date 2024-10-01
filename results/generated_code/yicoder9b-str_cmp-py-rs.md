In Rust, string comparison is done using the `cmp::Ord` trait and its methods which provides several ways of comparing strings:
- The `==` operator is used for exact equality comparison.
- The `!=` operator gives inequality (i.e., inverse of exact equality).
- The `<`, `<=`, `>`, `>=` operators perform lexical ordering comparisons.
- Case insensitive comparisons can be achieved by converting strings to lowercase or uppercase before comparison.
- Rust's `cmp::Ord` trait provides the `cmp_lexicographical()` method for comparing two strings in lexicographic order.
- Numeric strings are compared based on their numeric values, not their lexical representation.
Here is a direct conversion of your Python code to Rust:
```rust
fn compare(a: &str, b: &str) {
    println!("\n{:?} is of type {:?} and {:?} is of type {:?}", a, ::std::any::type_name::<&str>(), b, ::std::any::type_name::<&str>());

    if a <  b { println!("{:?} is strictly less than {:?}", a, b) };
    if a <= b { println!("{:?} is less than or equal to {:?}", a, b) };
    if a >  b { println!("{:?} is strictly greater than {:?}", a, b) };
    if a >= b { println!("{:?} is greater than or equal to {:?}", a, b) };
    if a == b { println!("{:?} is equal to {:?}", a, b) };
    if a != b { println!("{:?} is not equal to {:?}", a, b) };  

    compare_case_insensitive(a,b);
}

fn compare_case_insensitive(a: &str, b: &str){
    let lower_a = a.to_lowercase();
    let lower_b = b.to_lowercase();

    if lower_a <  lower_b { println!("{:?} (as lowercase) is strictly less than {:?}", a, b) };
    if lower_a <= lower_b { println!("{:?} (as lowercase) is less than or equal to {:?}", a, b) };
    if lower_a >  lower_b { println!("{:?} (as lowercase) is strictly greater than {:?}", a, b) };
    if lower_a >= lower_b { println!("{:?} (as lowercase) is greater than or equal to {:?}", a, b) };
    if lower_a == lower_b { println!("{:?} (in lowercase form) is equal to {:?}", a, b) };  
}

fn main() {
    compare("YUP", "YUP");
    compare("BALL", "BELL");
    // Strings are compared based on their numeric values in Rust.
    compare("24", "123");
}
```
