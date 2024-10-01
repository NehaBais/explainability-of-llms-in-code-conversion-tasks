Sure, here's the equivalent Rust code for the given task:
```
fn main() {
 println!("{} == {} {}",
 "abcd",
 "abcd",
 if "abcd" == "abcd" { "true" } else { "false" });
 
 println!("{} === {} {}",
 "abcd",
 "abcd",
 if "abcd" === "abcd" { "true" } else { "false" });
 
 println!("{} == {} {}",
 "123",
 "123",
 if "123" == "123" { "true" } else { "false" });
 
 println!("{} === {} {}",
 "123",
 "123",
 if "123" === "123" { "true" } else { "false" });
 
 println!("{} == {} {}",
 "ABCD",
 "abcd",
 if "ABCD" == "abcd" { "true" } else { "false" });
 
 println!("{} != {} {}",
 "123",
 "123",
 if "123" != "123" { "true" } else { "false" });
 
 println!("{} !== {} {}",
 "123",
 "123",
 if "123" !== "123" { "true" } else { "false" });
 
 println!("{} < {} {}",
 "abcd",
 "dcba",
 if "abcd" < "dcba" { "true" } else { "false" });
 
 println!("{} > {} {}",
 "abcd",
 "dcba",
 if "abcd" > "dcba" { "true" } else { "false" });
 
 println!("{} == {} {}",
 "ABCD".to_lowercase(),
 "abcd".to_lowercase(),
 if "ABCD".to_lowercase() == "abcd".to_lowercase() { "true" } else { "false" });
}
```
The Rust code compares two strings using the `==`, `===`, `<`, `>`, and `!=` operators. It also converts both strings to lowercase using the `to_lowercase()` method before comparing them with the `==` operator.

