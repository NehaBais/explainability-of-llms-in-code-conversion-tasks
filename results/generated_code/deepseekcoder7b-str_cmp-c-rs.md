Rust doesn't have direct equivalents for the C comparison macros. However, Rust provides methods `eq`, `ne` and `cmp` in String type that can be used to compare strings. Also, there is a function called `case_insensitive_order` provided by the itertools crate which can be used to perform case insensitive lexical ordering comparison.

Here's how you could achieve similar results:
```rust
use itertools::Itertools; // import this into your file using 'extern crate itertools'; at the top of your code

fn compare(a: &str, b: &str) {
    println!("{} {} {} {} {} {} {}", 
        a, 
        if a == b {"eq"} else {"ne"}, 
        if a > b {"gt"} else {"lt"}, 
        if !(a < b) {"ge"} else {"le"}, 
        if a < b {"lt"} else {"ge"}, 
        if !(a > b) {"le"} else {"ge"}, 
        b);
}

fn compare_case_insensitive(a: &str, b: &str) {
    println!("{} {} {} {} {} {} {} (ignoring case)", 
        a,  
        if a.to_lowercase() == b.to_lowercase() {"eq"} else {"ne"}, 
        if a.to_lowercase() > b.to_lowercase() {"gt"} else {"lt"}, 
        if !(a.to_lowercase() < b.to_lowercase()) {"ge"} else {"le"}, 
        if a.to_lowercase() < b.to_lowercase() {"lt"} else {"ge"}, 
        if !(a.to_lowercase() > b.to_lowercase()) {"le"} else {"gt"},  
        b);
}

fn main() {
    let strings = vec!["ball", "bell", "ball", "BALL", "YUP", "YEP"];
    for (a, b) in strings.iter().tuple_combinations() {
        compare(a, b);
        compare_case_insensitive(a, b);
    } 
}
```
This code will print out a comparison of each pair of the input strings using Rust's String methods for equality and ordering. The 'itertools' crate is used to create combinations of our string vector. Note that case insensitivity in lexical comparisons can be done by converting both strings to lowercase before comparing them.

