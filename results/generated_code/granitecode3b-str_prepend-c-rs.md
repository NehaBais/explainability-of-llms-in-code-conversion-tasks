Sure, here's the equivalent Rust code for the given C code snippet:
```
fn main() {
 let str = "my String".to_string();
 let cstr = "Changed ".to_string();
 let dup = format!("{}{}", cstr, str);
 println!("{}", dup);
}
```
This Rust code creates a string variable `str` with the value "my String", a second string variable `cstr` with the value "Changed ", and then uses the `format!` macro to concatenate them into a new string `dup`. The resulting string is then printed to the console.

