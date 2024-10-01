The equivalent code in Rust would be:

```rust
fn sconcat(s1: &str, s2: &str) -> String {
    let mut s0 = String::from(s1);
    s0.push(' '); // add a space for the separator 
    s0.extend_from_static(&s2 as [char]);
    return s0;
}

fn main() {
    let s: &str = "hello";
    let mut s2: String = s.to_string();

    println!("{} literal", s);
    /* or */
    println!("{} {} literal", s, "literal");
    
    s2 = sconcat(&s, " literal").to_string();
    println!("{}", s2);
}
```
In the Rust version, the function `sconcat` receives two strings as parameters. It creates a new string from these two strings and returns it.

Note that in Rust we can't directly concatenate &str (string literal) with another string; we need to convert it into String before. Also, in Rust, memory is not freed automatically when the variable goes out of scope like C, so we must manually manage the memory allocation using the `.to_string()` method and deallocating memory using `free(s2)`.
