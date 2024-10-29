The equivalent Rust code would be as follows:

```rust
fn print_logic(a: bool, b: bool){
   println!("a and b is {}", a && b);
   println!("a or b is {}", a || b);
   println!("not a is {}", !a);
}
```
Please note that in Rust we don't need to mention the type of variables when declaring them unlike Golang. The function `print_logic` takes two boolean values as arguments, and prints out results of logical operations on these values just like in your provided Go code. 

Also please be aware the naming convention in Rust is snake case not camel case. So when calling println! with variables we use underscore (_) instead of camel case (aAndB).

