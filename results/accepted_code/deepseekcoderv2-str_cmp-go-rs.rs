fn main() {
    let c = "cat";
    let d = "dog";

    // Comparing two strings for exact equality
    if c == d {
        println!("{} is bytewise identical to {}", c, d);
    } else {
        println!("{} is not equal to {}", c, d);
    }

    // Comparing two strings for inequality (i.e., the inverse of exact equality)
    if c != d {
        println!("{} is bytewise different from {}", c, d);
    } else {
        println!("{} is equal to {}", c, d);
    }

    // Comparing two strings to see if one is lexically ordered before than the other
    match c.cmp(&d) {
        std::cmp::Ordering::Less => println!("{} is lexically less than {}", c, d),
        std::cmp::Ordering::Equal => println!("{} is equal to {}", c, d),
        std::cmp::Ordering::Greater => println!("{} is lexically greater than {}", c, d),
    }

    // Comparing two strings to see if one is lexically ordered after than the other
    match c.cmp(&d) {
        std::cmp::Ordering::Less => println!("{} is lexically less than {}", c, d),
        std::cmp::Ordering::Equal => println!("{} is equal to {}", c, d),
        std::cmp::Ordering::Greater => println!("{} is lexically greater than {}", c, d),
    }

    // Case insensitive comparison using `to_lowercase` and `eq`
    let eqf = "when interpreted as UTF-8 and compared under Unicode simple case folding rules.";
    if c.to_lowercase() == d.to_lowercase() {
        println!("{} equal to {} {}", c, d, eqf);
    } else {
        println!("{} not equal to {} {}", c, d, eqf);
    }
}