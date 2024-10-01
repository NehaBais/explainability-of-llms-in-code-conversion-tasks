fn main() {
    let c = "cat";
    let d = "dog";

    if c == d {
        println!("{} is bytewise identical to {}", c, d);
    } else {
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

    let eqf = "when interpreted as UTF-8 and compared under Unicode\nsimple case folding rules.";
    if c.to_lowercase() == d.to_lowercase() {
        println!("{} equal to {}: {}", c, d, eqf);
    } else {
        println!("{} not equal to {}: {}", c, d, eqf);
    }
}
