The error occurs because the `shr` method is not in the current scope. To fix this, import the `Shr` trait from the `std::ops` module.

```rs
use std::ops::Shr;

fn bitwise(a: i32, b: i32) {
    // ...
    println!("a >>> b: {}", a.shr(b)); // logical right shift
    // ...
}
```
