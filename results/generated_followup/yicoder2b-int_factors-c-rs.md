This error occurred because there was an issue with how you were using variables inside the rust program. Rust is a strictly typed language, so variable types need to be declared at compile time. 

In the given code, there are several places where `i16` and `usize` cannot be added together, and there's also a mismatch in the way `Option<Vec<i32>>` was used. Rust does not allow this kind of operation on variables at runtime like it is allowed in languages such as C or Java.

The issue can be resolved by:

1) Changing the type of the variable that's being added, which should be `i16` to a `usize`:
This will panic if an overflow would occur. 

2) Or cast it into an `Option<Vec<i32>>` before using it, and unwrap the value:
This will not panic if `fctrs.list` is not found, or if it's not an option containing a vector of integers.

3) Changing the variable that's being added from `i16` to `usize`:
This might not panics because it's using static assertion check at compile time, but it can still be a good practice to handle such situations where possible overflow is happening.

Please note that you cannot add `Option<Vec<i32>>` and non-integer type in the same way as you would do for integers. For more flexibility, consider using Result instead of Option in this case.
