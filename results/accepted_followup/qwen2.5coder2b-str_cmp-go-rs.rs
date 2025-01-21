fn main() {
    let c = "cat";
    let d = "dog";

    println!("{} is bytewise identical to {}", c, d);
    println!("{} is bytewise different from {}", c, d);
    println!("{} is lexically bytewise greater than {}, {}", c, d, c > d);
    println!("{} is lexically bytewise less than {}, {}", c, d, c < d);
    println!(
        "{} is lexically bytewise greater than or equal to {}, {}",
        c,
        d,
        c >= d
    );
    println!(
        "{} is lexically bytewise less than or equal to {}, {}",
        c,
        d,
        c <= d
    );

    let num_c: i32 = c.parse().unwrap();
    let num_d: i32 = d.parse().unwrap();

    println!("{} equals {} as numbers {}", c, d, num_c == num_d);
}
