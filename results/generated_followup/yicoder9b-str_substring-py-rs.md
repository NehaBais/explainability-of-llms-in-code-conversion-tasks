The errors are due to several issues:
1) `Option` doesn't implement `Display`, therefore it cannot be printed with `println!()`. 
2) The size for values of type string is unknown at compile time. 
3) There is a mismatch in types - the expected argument should not have an ampersand (`&`) before the variable.

Here's how you can fix these issues:
```rust
fn substring(s: &str, m: usize) -> Option<&str> {
    if let Some((fst, rest)) = s.split_at(m) {
        return Some(rest);
    }
    None
}

fn main() {
    let s: String = "Hello, World!".to_string(); 
    let m = 7;
    println!("{}", substring(&s[m - 1..], m)); // prints "World!"

    let n = 3;
    if let Some((fst, rest)) = s.split_at(n) {  // removes the first `n` characters from string `s`
        println!("{}", rest);                   // and prints the rest of it
    }

    let chars: &str = "o";
    if let Some(&idx) = s.find(chars) {         // finds the first occurrence index of `chars` in string `s`
        println!("{}", substring(&s[idx..], m)); // prints from that index to end of the string 
    }

    let charss: &str = "o";                      // same as above but with a different variable name for demonstration purposes
    if let Some(indx) = s.find(charss) {       
        println!("{}", substring(&s[indx..], m)); 
    }
  
    let start = 'H';                          // find the character `start` in string `s`
    return Some(&s[0..*s.find(start).unwrap()]) // prints from that index to end of the string
}
```
