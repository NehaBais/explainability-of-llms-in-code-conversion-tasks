fn main() {
    let s1 = "ball";
    let s2 = "bell";
    println!("{s1} {s1} {s1} {s1} {s1} {s1}", s1 = s1, s2 = s2); // exact equality

    println!(
        "{s1} {s1} {s1} {s1} {s1} {s1}",
        s1 = s1,
        s2 = s2.chars().rev().collect::<String>()
    );
    // case insensitive (ignoring case)

    let s3 = "YUP";
    let s4 = "YEP";
    println!("{s3} {s3} {s3} {s3} {s3} {s3}", s1 = s3, s2 = s4); // exact equality

    println!(
        "{s3} {s3} {s3} {s3} {s3} {s3}",
        s1 = s3,
        s2 = s4.chars().rev().collect::<String>()
    );
    // case insensitive (ignoring case)

    let s5 = "ball";
    let s6 = "BELL";
    println!("{s5} {s5} {s5} {s5} {s5} {s5}", s1 = s5, s2 = s6); // lexical comparison

    println!(
        "{s5} {s5} {s5} {s5} {s5} {s5}",
        s1 = s5,
        s2 = s6.chars().rev().collect::<String>()
    );
    // case insensitive (ignoring case)

    let s7 = "ball";
    let s8 = "BALL";
    println!("{s7} {s7} {s7} {s7} {s7} {s7}", s1 = s7, s2 = s8); // lexical comparison

    println!(
        "{s7} {s7} {s7} {s7} {s7} {s7}",
        s1 = s7,
        s2 = s8.chars().rev().collect::<String>()
    );
    // case insensitive (ignoring case)

    let s9 = "YUP";
    let s10 = "yep";
    println!("{s9} {s9} {s9} {s9} {s9} {s9}", s1 = s9, s2 = s10); // lexical comparison

    println!(
        "{s9} {s9} {s9} {s9} {s9} {s9}",
        s1 = s9,
        s2 = s10.chars().rev().collect::<String>()
    );
    // case insensitive (ignoring case)
}
