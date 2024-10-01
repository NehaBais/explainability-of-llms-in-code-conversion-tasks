Sure! Here's the Rust equivalent of the code you provided:
```
fn logic(a: bool, b: bool) {
    println!("a AND b: {}", a && b);
    println!("a OR b: {}", a || b);
    println!("NOT a: {}", !a);
}
```
Here's how the code works:

* The `fn` keyword defines a function named `logic`.
* The `bool` type is used for both parameters, `a` and `b`, which represent the input values.
* The `println!` macro is used to print the results of the operations on the two input values.
* The `&&` operator is used for logical "and", while the `||` operator is used for logical "or".
* The `!` operator is used for logical "not".
