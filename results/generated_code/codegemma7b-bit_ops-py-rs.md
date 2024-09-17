```rust
use std::mem;

fn bitwise_built_ins(width: usize, a: i32, b: i32) {
    let mask = (1 << width) - 1;
    println!(
        r#"    AND:     0b{:0widthb} 
           & 0b{:0widthb} 
           = 0b{:0widthb}"#,
        a,
        b,
        (a & b) & mask
    );

    println!(
        r#"    OR:      0b{:0widthb} 
           | 0b{:0widthb} 
           = 0b{:0widthb}"#,
        a,
        b,
        (a | b) & mask
    );

    println!(
        r#"    XOR:     0b{:0widthb} 
           ^ 0b{:0widthb} 
           = 0b{:0widthb}"#,
        a,
        b,
        (a ^ b) & mask
    );

    println!(
        r#"    NOT:   ~ 0b{:0widthb} 
           = 0b{:0widthb}"#,
        a,
        (~a) & mask
    );

    println!(r#"    SHIFTS");

    println!(
        r#"      RIGHT:   0b{:0widthb} >> 1
             = 0b{:0widthb}"#,
        a,
        (a >> 1) & mask
    );

    println!(
        r#"      LEFT:    0b{:0widthb} << 1
             = 0b{:0widthb}"#,
        a,
        (a << 1) & mask
    );
}

fn rotr(width: usize, a: i32, n: i32) -> i32 {
    if n < 0 {
        rotl(width, a, -n)
    } else if n == 0 {
        a
    } else {
        let mask = (1 << width) - 1;
        (a >> n) | (a << width - n) & mask
    }
}

fn rotl(width: usize, a: i32, n: i32) -> i32 {
    if n < 0 {
        rotr(width, a, -n)
    } else if n == 0 {
        a
    } else {
        let mask = (1 << width) - 1;
        (a << n) | (a >> width - n) & mask
    }
}

fn asr(width: usize, a: i32, n: i32) -> i32 {
    let sign_bit = a >> (width - 1);
    let value = (a as u32 >> n) as i32;
    if sign_bit == 1 {
        value | !0 << (width - n)
    } else {
        value
    }
}

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

fn main() {
    bitwise_built_ins(8, 27, 125);
    helper_funcs(8, 27);
}
```


