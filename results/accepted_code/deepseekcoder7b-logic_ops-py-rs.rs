fn logic(mut a: bool, b: bool) {
    // 'and' operator is written as && in Rust
    println!("a and b: {}", a && b);

    // 'or' operator is written as || in Rust
    println!("a or b: {}", a || b);

    // 'not' operator is prefixed with ! in Rust. We need to mark the variable mutable (with `mut` keyword) because it needs to be modified by not operation. Immutable values can't be changed, so we need to make this variable mutable.
    a = !a;
    println!("not a: {}", a);
}
