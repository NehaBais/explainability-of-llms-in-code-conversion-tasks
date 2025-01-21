The error occurred because the Rust code was trying to use `CStr::find` and `CStr::find_str`, which return `Option<usize>`, as functions that return `Result<String, &str>`. The fix is to change these function calls to return `Result<String, ()>` instead, since they don't need the index.

The corrected code block is as follows:
```rust
fn str_fromstr(s: &str, in: &str, m: isize) -> Result<String, ()> {
    let idx = s.find(in).ok_or("--error--")?;
    substring(s, idx as usize, m)
}


fn main() {
    let s = "hello world shortest program";

    println!("{}", str_fromstr(&s, "ro", 3)); // "rog"
}
```

