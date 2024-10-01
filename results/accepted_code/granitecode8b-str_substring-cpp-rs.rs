fn main() {
    let s = "0123456789";
    let n = 3;
    let m = 4;
    let c = '2';
    let sub = "456";

    println!("{}", s.chars().skip(n).take(m).collect::<String>());
    println!("{}", s.chars().skip(n).collect::<String>());
    println!("{}", s.chars().rev().skip(1).collect::<String>());
    println!(
        "{}",
        s.match_indices(c)
            .nth(0)
            .map(|(i, _)| s.chars().skip(i + 1).take(m).collect::<String>())
            .unwrap_or("".to_string())
    );
    println!(
        "{}",
        s.match_indices(sub)
            .nth(0)
            .map(|(i, _)| s.chars().skip(i).take(m).collect::<String>())
            .unwrap_or("".to_string())
    );
}
