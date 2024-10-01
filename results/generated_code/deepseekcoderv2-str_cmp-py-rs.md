## Solution
The task requires that the language has a way to compare strings for equality and inequality. In Rust, this is done using the == and != operators respectively. These operators can be used on any two values of type String or &str (which are equivalent). The result of these comparisons will always evaluate to either true or false.
To demonstrate how to achieve lexical comparison, we first need to convert all of our string variables into strings:
```rust
let a = "YUP";
let b = "YUP";
let c = "BALL";
let d = "BELL";
let e = 24;
let f = 123;
let g = 5.0;
let h = 5;

// Compare for equality
assert_eq!(a, b);
assert_ne!(c, d);
// Compare for inequality (i.e., inverse of exact equality)
assert_eq!(a != b, false); // this is equivalent to saying !(a == b), which evaluates to true if a and b are equal and false otherwise
assert_eq!(c != d, true);  // similarly here we have !("BALL" == "BELL") which also evaluates to true since the strings are not equal in either case
// Compare for lexicographic order (i.e., alphabetical ordering)
assert_eq!(a < c, false); // this is equivalent to saying !(c <= a), which means that if we compare two strings using less than (<), then they must be ordered alphabetically from left-to-right; thus “YUP” will never come before "BALL" (in either case)
// Compare for lexicographic order (i.e., alphabetical ordering) in reverse direction as well as equality checks: we can use >= instead of <= since that means checking whether one string is greater than or equal to another; similarly, if you want to know whether one string comes after another, then just check whether it’s less than or equal (<=).
```

