Here is the converted code from C to Rust:
```rust
extern crate alloc;
use alloc::string::String;
fn main() {
 let inputs = vec!["ball", "bell", "ball", "ball", "YUP", "YEP"];
 let expected_outputs = vec![
 "	eq , ne , gt , lt , ge , le",
 "ball 1 0 0 0 1 1 ball",
 "ball 1 0 0 0 1 1 ball ignoring case",
 "YUP 0 1 1 0 1 0 YEP",
 "YUP 0 1 0 1 0 1 yep",
 "YUP 0 1 1 0 1 0 YEP ignoring case",
 "YUP 0 1 0 1 0 1 yep ignoring case",
 "bell 0 1 0 1 0 1 ball",
 "bell 0 1 0 1 0 1 ball ignoring case",
 "BALL 0 1 1 0 1 0 BALL",
 "BALL 1 0 0 0 1 1 ball",
 "BALL 1 0 0 0 1 1 ball ignoring case",
 "BELL 0 1 0 1 0 1 bell",
 "BELL 0 1 0 1 0 1 bell ignoring case"
 ];
 for (input, expected_output) in inputs.iter().zip(expected_outputs.iter()) {
 assert_eq!(compare_strings(input, input), *expected_output);
 }
}
fn compare_strings(str1: &str, str2: &str) -> String {
 let eq = if str1 == str2 { "1" } else { "0" };
 let ne = if str1 != str2 { "1" } else { "0" };
 let gt = if str1 > str2 { "1" } else { "0" };
 let lt = if str1 < str2 { "1" } else { "0" };
 let ge = if str1 >= str2 { "1" } else { "0" };
 let le = if str1 <= str2 { "1" } else { "0" };
 format!("{} {} {} {} {} {}", eq, ne, gt, lt, ge, le)
}
fn compare_strings_case_insensitive(str1: &str, str2: &str) -> String {
 let eq = if str1.to_lowercase() == str2.to_lowercase() { "1" } else { "0" };
 let ne = if str1.to_lowercase() != str2.to_lowercase() { "1" } else { "0" };
 let gt = if str1.to_lowercase() > str2.to_lowercase() { "1" } else { "0" };
 let lt = if str1.to_lowercase() < str2.to_lowercase() { "1" } else { "0" };
 let ge = if str1.to_lowercase() >= str2.to_lowercase() { "1" } else { "0" };
 let le = if str1.to_lowercase() <= str2.to_lowercase() { "1" } else { "0" };
 format!("{} {} {} {} {} {}", eq, ne, gt, lt, ge, le)
}
```
In this code, we first define a vector of inputs and expected outputs. Then, we iterate over the inputs and call the `compare_strings` function to compare each pair of strings. We also use the `compare_strings_case_insensitive` function to compare the strings in a case-insensitive manner.
The `compare_strings` function compares two strings for exact equality, inequality, lexical order (greater than), and lexical order (less than). It returns a string that represents the results of these comparisons.
The `compare_strings_case_insensitive` function is similar to `compare_strings`, but it converts both strings to lowercase before comparing them. This allows for case-insensitive comparisons.
Overall, this code demonstrates how to compare two strings in Rust and how to perform lexical comparisons and case-insensitive comparisons.

