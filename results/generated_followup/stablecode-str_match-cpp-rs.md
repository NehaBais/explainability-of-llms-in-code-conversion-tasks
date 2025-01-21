The error is caused by an unclosed delimiter at the start of the `main()` function. The fix is to add an opening bracket `(` after `fn main() {`. 

Here's the corrected code in a single code block:
```rust
fn main() {

    let s1 = "abcd".to_string();
    let s2 = "abab".to_string();
    let s3 = "ab".to_string();
    
    // Beginning
    println!("{}", s1.starts_with(&s2)));
    // End

    // Anywhere
    if let Some(loc) = s1.find(&s2)) {
        println!("Location of match: {}", loc);
    } else {
        println!("No match found");
    }


    let mut s4 = "abcd".to_string();
    let s5 = "ab".to_string();

    // Anywhere with multiple occurrences
    while let Some(loc) = s4.find(&s5)) {
        println!("Location of match: {}", loc));
        s4.remove(loc..loc+s5.len())));
    } else {
        println!("No subsequent match found");
    }
}
```
