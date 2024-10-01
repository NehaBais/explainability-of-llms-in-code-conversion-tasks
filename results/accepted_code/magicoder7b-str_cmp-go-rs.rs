fn main() {
    let c = String::from("cat");
    let d = String::from("dog");

    if c == d {
        println!("{} is identical to {}", &c, &d);
    }

    if c != d {
        println!("{} is different from {}", &c, &d);
    }

    if c < d {
        println!("{} is lexicographically less than {}", &c, &d);
    }

    if c > d {
        println!("{} is lexicographically greater than {}", &c, &d);
    }

    // Rust does not have a direct equivalent to Go's `strings.EqualFold`. However,
    // we can use the `.to_lowercase()` method in combination with the `==` operator
    if c.to_lowercase() == d.to_lowercase() {
        println!("{} is identical to {}", &c, &d);
    } else {
        println!("{} is different from {}", &c, &d);
    }
}
