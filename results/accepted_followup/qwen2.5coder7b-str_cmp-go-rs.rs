fn main() {
    let c = "cat";
    let d = "dog";

    if c == d {
        println!("{} is bytewise identical to {}", c, d);
    }
    if c != d {
        println!("{} is bytewise different from {}", c, d);
    }
    if c > d {
        println!("{} is lexically bytewise greater than {}", c, d);
    }
    if c < d {
        println!("{} is lexically bytewise less than {}", c, d);
    }
    if c >= d {
        println!("{} is lexically bytewise greater than or equal to {}", c, d);
    }
    if c <= d {
        println!("{} is lexically bytewise less than or equal to {}", c, d);
    }

    let case_sensitive_eq =
        "when interpreted as UTF-8 and compared under Unicode simple case folding rules.";
    if c.eq_ignore_ascii_case(d) {
        println!("{} equal to {} {}", c, d, case_sensitive_eq);
    } else {
        println!("{} not equal to {} {}", c, d, case_sensitive_eq);
    }

    // For other kinds of string comparisons that interpret UTF-8,
    // Rust's standard library provides the unicode_segmentation crate.
    // The unicode-segmentation crate provides functions for Unicode segmentation
    // and allows you to implement your own comparison logic if needed.
}
