**Error:** Immutable argument assignment in `print_factors` function.
**Fix:** Make the argument mutable using the `mut` keyword.
**Corrected Code:**

```rust
use std::fmt;

fn main() {
    print_factors(-1);
    // ...
}

fn print_factors(mut nr: i64) {
    // ...
}
```
