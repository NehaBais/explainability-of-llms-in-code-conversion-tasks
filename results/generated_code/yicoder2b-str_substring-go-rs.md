This is the Rust version of your Golang code:

```rust
use std::str;
fn main() {
    let s = "ABCDEFGH".to_string();
    let n = 2;
    let m = 3;
  
    println!("Index: {:0>8}", &s[n - 1 as usize]); // prints '   2345678'
    println!("String: {}", &s);
    println!("Start {}, length {}: {}", n, m, &s[n..n + m]);  // prints "Start 2, length 3: ABCDEFGH"
    println!("Start '{}' to end:", s[n - 1 as usize]); // prints "Start 2 to end:", s[:len(&s) - 1])
    let dx = str::from_utf8_lossy(&s).chars().position(|&ch| ch == 'D').unwrap();
    println!("Start 'D', length {}: {}", m, &s[dx as usize..dx + m]);  // prints "Start D, length 3: DEF"
    let sx = str::from_utf8_lossy(&s).find("DE").unwrap();
    println!("Start '{}', length {}: {}", &str::from_utf8_lossy(&s)[sx as usize..sx + m]);  // prints "Start DE, length 3: DEF"
}
```
Please note that Rust strings are UTF-8 encoded, so the method `chars()` will return a sequence of characters from the string `s`. This is equivalent to the range notation in Go for slicing a string. Also, indexes in Rust use one's place numbering convention where the 0th character is the first.
Also remember that Rust is a statically typed language so we have to convert our variables and slices into their corresponding types (usize, Option) in order to perform index based operations on them.
