fn main() {
    let c = "cat";
    let d = "dog";

    // Comparing two strings for exact equality
    if c == d {
        println!("{} is bytewise identical to {}", c, d);
    }

    // Comparing two strings for inequality
    if c != d {
        println!("{} is bytewise different from {}", c, d);
    }

    // Comparing two strings to see if one is lexically ordered before than the other
    if c > d {
        println!("{} is lexically bytewise greater than {}", c, d);
    }

    // Comparing two strings to see if one is lexically ordered after than the other
    if c < d {
        println!("{} is lexically bytewise less than {}", c, d);
    }

    // Rust does not support case-sensitive comparison in string. You would have to implement it yourself:
    let case_cmp = c.to_lowercase().cmp(&d.to_lowercase());

    match case_cmp {
        std::cmp::Ordering::Equal => {
            println!("{} is equal to {} in case insensitive comparison", c, d)
        }
        std::cmp::Ordering::Less => {
            println!("{} is less than {} in case insensitive comparison", c, d)
        }
        std::cmp::Ordering::Greater => {
            println!("{} is greater than {} in case insensitive comparison", c, d)
        }
    }

    // Rust does not have built-in support for numeric strings lexical comparison unlike Go.
}
