fn main() {
    let c = "cat";
    let d = "dog";

    println!("{} is bytewise identical to {}", c, d);
    println!("{} is bytewise different from {}", c, d);
    println!("{} is lexically bytewise greater than {}, {}", c, d, c > d);
    println!("{} is lexically bytewise less than {}, {}", c, d, c < d);
    println!("{} is lexically bytewise greater than or equal to {}, {}", c, d, c >= d);
    println!("{} is lexically bytewise less than or equal to {}, {}", c, d, c <= d);

    // A case insensitive compare can be done with a function in the standard
    // library's `str` module:
    let eqf = "when interpreted as UTF-8 and compared under Unicode\nsimple case folding rules.";
    if strings::eq_ignore_ascii_case(c, d) {
        println!("{} equal to {}{}", c, d, eqf);
    } else {
        println!("{} not equal to {}{}", c, d, eqf);
    }

    // In Rust, the comparison of numeric strings is handled by using the `parse` method
    // which can convert a string into a number. If the conversion fails, it returns `None`.
    let num_c: i32 = c.parse().unwrap();
    let num_d: i32 = d.parse().unwrap();

    println!("{} equals {} as numbers {}", c, d, num_c == num_d);
}