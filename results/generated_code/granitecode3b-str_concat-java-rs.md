Sure, here's the Rust code that accomplishes the same task as the Java code:
```
fn main() {
 let s = "hello";
 println!("{} literal", s);
 let s2 = format!("{} literal", s);
 println!("{}", s2);
}
```
This code creates a string variable `s` with the value "hello" and prints it to the console along with the literal string "literal". It then concatenates `s` with the literal string "literal" using the `+` operator, creating a new string variable `s2` with the value "hello literal". Finally, it prints `s2` to the console.

