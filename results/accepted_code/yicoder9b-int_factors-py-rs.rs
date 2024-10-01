use std::cmp::PartialOrd;

fn factor(n: u32) -> Vec<u32> {
    let mut factors1 = vec![];
    let mut factors2 = vec![];
    for (x, _) in (1..((n as f64).sqrt() as u32 + 1)).enumerate() {
        if n % x == 0 {
            factors1.push(x);
            factors2.push(n / x);
        }
    }
    // Reverse factors2 and add to factors1
    let mut rev = factors2.into_iter().rev().collect::<Vec<_>>();
    if let Some((last, _)) = rev.iter().last() {
        if *last > &factors1.last().unwrap() && n % *last == 0 {
            factors1.push(*last);
        }
    }
    factors1.extend(rev);
    factors1
}

fn main() {
    for i in vec![45, 53, 64] {
        println!("{}: factors: {:?}", i, factor(i));
    }
}
