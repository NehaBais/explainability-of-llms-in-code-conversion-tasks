 The error occurred because the `find` method in Rust can take an optional second argument, but the provided example has two arguments (1st being "ab" & 2nd being loc.unwrap_or(0) + 1). According to the function signature of find, only one argument is allowed (the substring to search for), so we need to remove the extra argument from our call.

Corrected Code:

```rs
fn main() {
    println!("{}", "abcd".starts_with("ab")); // returns true
    println!("{}", "abcd".ends_with("cd")); // returns false
    println!("{}", "abab".contains("ab")); // returns true
    println!("{}", "abab".contains("bb")); // returns false
    let loc = "abab".find("ab");
    match loc {
        Some(index) => println!("{}", index),
        None => println!("No Match"),
    }
    let loc2 = "abab".find("ab").unwrap_or(0);
    match loc2 {
        Some(index) => println!("{}", index),
        None => println!("No Match"),
    }
}
```

In the corrected code, we removed the second argument from the `find` call for 'loc2'. We also added `.unwrap_or(0)` to default to 0 if no match is found.
