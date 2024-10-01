Sure! Here's the code in Rust:
```
fn sconcat(s1: &str, s2: &str) -> String {
 let mut s0 = String::new();
 s0.push_str(s1);
 s0.push_str(s2);
 s0
}

fn main() {
 let s = "hello";
 let s2 = format!("{} literal", s);
 
 println!("{}", s);
 // or
 println!("{}{}", s, " literal");
 
 let s3 = sconcat(s, " literal");
 println!("{}", s3);
}
```
In Rust, we use the `String::new()` method to create an empty string and the `push_str()` method to add a string literal to the end of another string. The `format!` macro is used to format a string with variables in Rust. In this case, we're using the curly braces `{}` to indicate placeholders for the variables `s`.

