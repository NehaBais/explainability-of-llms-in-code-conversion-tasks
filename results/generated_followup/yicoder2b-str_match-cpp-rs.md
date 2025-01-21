This problem requires conversion from C++ to Rust, as well as understanding string matching techniques in both languages.

```rust
fn main() {
    let s1 = "abcd";
    let s2 = "abab";
    let s3 = "ab";
    //Start
    println!("{}", &s1[0..s3.len()] == &s3);
    //End
    println!("{}", &s1[&s1.len() - s3.len() as isize..] == &s3);
    //Anywhere
    let loc = s2.find(s3).unwrap_or(&s2.len()); //returns usize
    println!("{}", &s2[*loc + 1..] == &s3);
}
```

The errors in the original C++ code were due to not correctly using index ranges with "==" operator and not calling `unwrap_or` on a possible `None` value from finding method when the string does not contain the second string, hence the corrected codes and explanations are given. Note that the range for comparing the last part of a string is obtained using `s1.len() - s3.len()` instead of `s1.size()-s3.size()` due to Rust's indexing system which uses 0-based indexing.
In rust, we use `find` method which returns an Option, and if there is no match it would return `None` which needs to be unwrapped when calling `unwrap_or`. The range check in Rust also requires a direct comparison using "==" operator. For this reason, the Rust code seems to follow exactly the same logic as the C++ version does. 
This error was due to borrow issues and incorrect dereferencing during the string matching techniques.
