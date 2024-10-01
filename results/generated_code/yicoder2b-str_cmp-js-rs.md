Sure, here is the equivalent code in Rust:

```rust
fn main() {
    println!("{}", string_compare());
}

fn string_compare() -> bool {
    let str1 = "abcd";
    let str2 = "abcd";
    // Equal value check
    if *str1 == *str2 {
        true
    } else if str1.len() != str2.len() {
        false
    } else {
        // Compare lexically for strings
        let result = str1.chars().next_back();
        match result {
            Some(last1) => {
                let last2 = str2.chars().next_back();
                match last2 {
                    Some(_) => last1.cmp(&last2) == Some(order), 
                    // Case sensitive comparison of the strings
                    None if last1.is_lowercase() && last2.is_uppercase() || last2.is_lowercase() && last1.is_uppercase() => {
                        true
                    } else { 
                        last1.cmp(&last2) == Some(order),
                    }
                }
            },
            None if str1.chars().next_back().unwrap().is_lowercase() && str2.chars().next_back().unwrap().is_uppercase() || str2.chars().next_back().unwrap().is_lowercase() && str1.chars().next_back().unwrap().is_uppercase() => {
                true
            } else { 
                str1.chars().next_back().unwrap().cmp(&str2.chars().next_back().unwrap()),
            }
        };
    };
};
```

Note: In the Rust language, it doesn't have exact equality check for numerical strings as JavaScript does. But we can achieve a similar result by converting them to numeric values and then comparing. The language ensures that only string of comparable types are compared lexically. We use `next_back()` function to get the last character from the string. This is case sensitive because it compares in terms of ASCII value comparison, not Unicode value comparisons.

Rust's type system allows us to work with different types, so we can compare strings and numeric strings lexically. It also ensures that these strings are converted to the same format before being compared. Also, it handles the conversion for numerical string to its numeric equivalent automatically in case of comparison.
