extern crate itertools;
use itertools::Itertools;

fn factor(n: u32) -> Vec<u32> {
    let mut factors1 = (1..((n as f64).sqrt() as u32 + 1))
        .filter(|x| n % x == 0)
        .collect_vec();
    factors1.append(&mut factors1.iter().map(|&x| n / x).collect_vec());
    factors1.sort_unstable();
    factors1 = factors1
        .into_iter()
        .rev()
        .chain(factors1.into_iter())
        .skip_while(|&x| x == 0)
        .collect();
    factors1
}

fn main() {
    for i in [45, 53, 64] {
        println!("{}: factors: {:?}", i, factor(i));
    }
}
