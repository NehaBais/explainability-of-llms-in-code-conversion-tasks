use std::cmp::Ordering;

fn main() {
    let c = "cat";
    let d = "dog";

    if c == d {
        println!("{} is bytewise identical to {}", c, d);
    } else {
        println!("{} is bytewise different from {}", c, d));
    }

    match c.cmp(d) {
        Ordering::Equal => println!("{} is lexically bytewise identical to {}", c, d)),
        Ordering::Greater => println!("{} is lexically bytewise greater than {}", c, d)),
        Ordering::Less => println!("{} is lexically bytewise less than {}", c, d))
    }

    let insensitive_c: &str = "Cat";
    let insensitive_d: &str = "dog";
   
    if insensitive_c.casecmp(insensitive_d) == 0 {
        println!("{} is case-insensitively equal to {}", insensitive_c, insensitive_d));
    } else {
        println!("{} is case-insensitively different from {}", insensitive_c, insensitive_d));
    }
}