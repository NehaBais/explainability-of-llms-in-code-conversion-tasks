use std::cmp::sqrt;

fn factor(n: i32) -> Vec<i32> {
    let mut factors1 = vec![];
    let mut factors2 = vec![];

    for x in 1..=(sqrt(n) as i32) {
        if n % x == 0 {
            factors1.push(x);
            factors2.push(n / x);
        }
    }

    if (sqrt(n) as i32).pow(2) == n {
        factors1.push(sqrt(n) as i32);
    }

    factors1.extend(factors2.iter().rev().cloned());

    factors1
}

fn main() {
    for i in 45, 53, 64 {
        println!("{}: factors: {:?}", i, factor(i));
    }
}