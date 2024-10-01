I have translated the given C code into Rust as follows:
```
fn print_logic(a: i32, b: i32) {
    println!("a and b is {}", a && b);
    println!("a or b is {}", a || b);
    println!("not a is {}", !a);
}
```
This Rust function prints the logic values (i.e., "and", "or", "not") of two logical (boolean) values 'a' and 'b'. The use of the logical operators &&, ||, and ! in Rust follows C's conventions for boolean expressions.
