The error occurs because the closing curly brace for the `helper_funcs()` function is placed outside the function body. The fix is to indent the closing brace to match the opening brace.

```rust
fn helper_funcs(width: usize, a: i32) {
    println!(r#"    SIGN-EXTENDING ARITHMETIC SHIFT RIGHT");

    for n in [1, 2, 4] {
        println!(
            r#"               asr({width}, 0b{:0widthb}, {n})
               =      0b{:0widthb}"#,
            a,
            asr(width, a, n)
        );

        println!(
            r#"               asr({width}, 0b{:0widthb}, {n})
               =      0b{:0widthb}"#,
            a + 0x80,
            asr(width, a + 0x80, n)
        );
    }
}
```
