fn main() {
    let s1 = "hello";
    let s2 = "world";
    println!("{s1} {s2}", s1, s2);

    let s3 = "hello".repeat(6);
    let s4 = s3.chars().rev().collect::<String>();
    println!("{s3} {s4}", s3, s4);

    let s5 = "world";
    let s6 = "dlorw";
    println!("{s5} {s6}", s5, s6);

    let s7 = "12345".chars().rev().collect::<String>();
    let s8 = "54321".repeat(3);
    println!("{s7} {s8}", s7, s8);

    let s9 = "cargo test";
    let s10 = "test cargo";
    println!("{s9} {s10}", s9, s10);
}
