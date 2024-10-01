fn main() {
    let c = "cat";
    let d = "dog";

    // Comparing two strings for exact equality
    if c == d {
        println!("{} is bytewise identical to {}", c, d);
    }

    // Comparing two strings for inequality (i.e., the inverse of exact equality)
    if c != d {
        println!("{} is bytewise different from {}", c, d);
    }

    // Comparing two strings to see if one is lexically ordered before than the other
    if c < d {
        println!("{} is lexically bytewise less than {}", c, d);
    }

    // Comparing two strings to see if one is lexically ordered after than the other
    if c > d {
        println!("{} is lexically bytewise greater than {}", c, d);
    }

    // Comparing two strings to see if one is lexically ordered before or equal to the other
    if c <= d {
        println!("{} is lexically bytewise less than or equal to {}", c, d);
    }

    // Comparing two strings to see if one is lexically ordered after or equal to the other
    if c >= d {
        println!("{} is lexically bytewise greater than or equal to {}", c, d);
    }

    // A case insensitive compare can be done using the `eq_ignore_ascii_case` method from the Rust standard library:
    let eqf = "when interpreted as UTF-8 and compared under Unicode simple case folding rules.";
    if c.to_lowercase() == d.to_lowercase() {
        println!("{} is equal to {} {}", c, d, eqf);
    } else {
        println!("{} is not equal to {} {}", c, d, eqf);
    }

    // There are other ways to compare strings in Rust, such as the `partial_cmp` method, which compares two strings based on their lexicographical order. The ` Ord` trait provides a way to compare strings based on their lexicographical order, and the `cmp` method can be used to compare strings based on their lexicographical order.
}
