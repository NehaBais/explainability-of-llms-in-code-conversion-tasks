 In Rust, the `cmp` crate provides several types of string comparison functionality. Here's how to implement this code in Rust. 

For case-sensitive and case-insensitive comparisons, we can use `to_uppercase()` for case-insensitive comparisons and `to_lowercase()` for case-sensitive comparisons. Also note that the lexicographical comparison is performed by calling the `cmp` method on a string slice `&str`.

```rust
fn compare(A: &str, B: &str) {
    if A == B {
        println!("'{}' and '{}' are lexically equal.", A, B);
    } else {
        println!("'{}' and '{}' are not lexically equal.", A, B);
    }

    let a = A.to_uppercase();
    let b = B.to_uppercase();
    if &a == &b {
        println!("'{}' and '{}' are case-insensitive lexically equal.", A, B);
    } else {
        println!("'{}' and '{}' are not case-insensitive lexically equal.", A, B);
    }
    
    if A < B {
        println!("'{}' is lexically before '{}'.", A, B);
    } else if A > B {
        println!("'{}' is lexically after '{}'.", A, B);
    }

    let cmp_result = A.cmp(B);
    
    match cmp_result {
        std::cmp::Ordering::Less => println!("The lexical relationship is: Less"),
        std::cmp::Ordering::Equal => println!("The lexical relationship is: Equal"),
        std::cmp::Ordering::Greater => println!("The lexical relationship is: Greater"),
    }
}

fn main() {
    compare("Hello", "Hello");
    compare("5", "5.0");
    compare("java", "Java");
    compare("ĴÃVÁ", "ĴÃVÁ");
    compare("ĴÃVÁ", "ĵãvá");
}
```
This Rust version of the code will behave exactly as your Java code, and should print out the same results.
