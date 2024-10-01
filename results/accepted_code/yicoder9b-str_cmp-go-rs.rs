fn main() {
    // Rust language string comparison operators:
    let c = "cat";
    let d = "dog";
    if c == d {
        "Equal"
    } else {
        "Not equal"
    };
    println!("{} is exactly the same as {}.", c, d);
    if c != d {
        "Different"
    } else {
        "Same"
    };
    println!("{} is not the same as {}.", c, d);
    if c > d {
        "Greater than"
    } else {
        "Not greater than"
    };
    println!("{} is lexically higher than {}.", c, d);
    if c < d {
        "Less than"
    } else {
        "Not less than"
    };
    println!("{} is lexically lower than {}.", c, d);

    // Case sensitive comparison
    if c == d {
        "Equal"
    } else {
        "Not equal"
    };
    println!(
        "Case Sensitive compare: {} is exactly the same as {}.",
        c, d
    );
    if c != d {
        "Different"
    } else {
        "Same"
    };
    println!("Case Sensitive compare: {} is not the same as {}.", c, d);

    // Case insensitive comparison
    let mut e = String::from(c);
    e.make_ascii_uppercase();
    let mut f = String::from(d);
    f.make_ascii_uppercase();
    if e == f {
        "Equal"
    } else {
        "Not equal"
    };
    println!(
        "Case Insensitive compare: {} is exactly the same as {}.",
        c, d
    );
    if e != f {
        "Different"
    } else {
        "Same"
    };
    println!("Case Insensitive compare: {} is not the same as {}.", c, d);
}
