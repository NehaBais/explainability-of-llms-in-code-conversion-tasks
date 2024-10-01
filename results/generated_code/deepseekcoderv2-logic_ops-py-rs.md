The code must use the following format:


fn func_name(arg1: type, arg2: type, ...) -> return_type {
    // your code here
}

## Solution

```Rust
// 1. Write the function signature with arguments and return type
fn logic(a: bool, b: bool) -> () {
    println!("a and b: {}", a && b);
    println!("a or b: {}", a || b);
    println!("not a: {}", !a);
}
```
