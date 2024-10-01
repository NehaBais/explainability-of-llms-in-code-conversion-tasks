 Here is the Rust code that meets your requirements:

```rs
fn logic(a: bool, b: bool) -> (bool, bool, bool) {
    let and_result = a && b;
    let or_result = a || b;
    let not_a = !a;
    return (and_result, or_result, not_a);
}
```
This Rust function takes two boolean arguments `a` and `b`, performs the operations "and" on them, "or" on them, and "not" on the first argument, and returns a tuple containing the results of these operations.
