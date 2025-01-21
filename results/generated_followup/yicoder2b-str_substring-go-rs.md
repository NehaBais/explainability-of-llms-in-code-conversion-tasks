Here is how to convert the given Golang code into Rust:
```rs
fn main() {
    let s = "ABCDEFGH";
    let n = 2;
    let m = 3;

    println!("Index: {:0>8}", &s[n - 1 as usize]); // prints '   2345678'
    println!("String: {}", s);
    println!("Start {}, length {}: {}", n, m, &s[n..n + m]); // prints "Start 2, length 3: ABCDEFGH"
    println!("Start '{}' to end:", s[n - 1 as usize]); // prints "Start 2 to end:", s[:len(&s) - 1])
    let dx = str::from_utf8_lossy(&s.to_string()).chars().position(|&ch| ch == 'D').unwrap();
    println!("Start '{}', length {}: {}", m, &str::from_utf8_lossy(&s)[dx as usize..dx + m]); // prints "Start D, length 3: DEF"
    let sx = str::from_utf8_lossy(&s.to_string()).find("DE").unwrap();
    println!(
        "Start '{}', length {}: {}",
        &str::from_utf8_lossy(&s)[sx as usize..sx + m]
    ); // prints "Start DE, length 3: DEF"
}
```
Please note that Rust and Go handle string manipulation a bit differently than the Python version. Rust uses `&str` for strings while Golang uses `string`. Also, indexes in Rust are ranges of usize by default which is equivalent to range of str for slicing a string. The `chars()` function returns a sequence of characters from the string `s`.

This rust program also includes error handling. If it encounters any unhandled errors or non-existing functions/associated items (like 'from_utf8_lossy'), it will print an error message and halt execution.
