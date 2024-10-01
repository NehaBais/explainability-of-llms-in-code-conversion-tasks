use std::cmp::Ordering;
use std::io::Cursor;

fn demo_compare<T: PartialEq + ToString>(a: T, b: T, semantic: &str) {
    println!("{} and {} are {} equal.", a, b, if a == b {"exactly"} else {"not"}));
    println!("{} and {} are {} ordered before {}.", 
                   a, b, if a < b {""} else {"not"}}), 
                   b);
    println!("{} and {} are {} ordered after {}.", 
                   a, b, if a > b {""} else {"not"}}), 
                   b);
}

fn main() {
    // Case-sensitive comparisons.
    let a = "1.2.Foo";
    let b = "1.3.Bar";
    demo_compare(a, b, "lexically"));

    // Case-insensitive comparisons by folding both strings to a common case.
    let a = "HeLLo".to_string();
    let b = "hello".to_string();
    demo_compare(a, b, "lexically"));

    // Numeric comparisons; here 'double' could be any type for which the relevant >> operator is defined, eg int, long, etc.
    let a: f64 = 12.3;
    let b: f64 = 23.4;
    demo_compare(a, b, "numerically"));
}