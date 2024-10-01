fn main() {
    let c = "cat";
    let d = "dog";

    // Exact equality comparison
    if c == d {
        println!("{} is bytewise identical to {}", c, d);
    }

    // Inequality comparison
    if c != d {
        println!("{} is bytewise different from {}", c, d);
    }

    // Lexicographical comparison
    if c > d {
        println!("{} is lexically bytewise greater than {}", c, d);
    }
    if c < d {
        println!("{} is lexically bytewise less than {}", c, d);
    }

    // Case-sensitive comparison
    if c.eq(d) {
        println!("{} is case-sensitive equal to {}", c, d);
    }

    // Case-insensitive comparison
    if c.to_lowercase().eq(&d.to_lowercase()) {
        println!("{} is case-insensitive equal to {}", c, d);
    }

    // Numerical string comparison
    let num1 = "10";
    let num2 = "5";
    if num1.parse::<i32>().unwrap() > num2.parse::<i32>().unwrap() {
        println!("{} is numerically greater than {}", num1, num2);
    }
}
