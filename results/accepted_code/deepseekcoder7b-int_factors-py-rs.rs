extern crate itertools;
use itertools::Itertools;

fn factor(n: u32) -> Vec<u32> {
    let mut factors1 = vec![];
    let mut x = 1;
    while x * x < n {
        if n % x == 0 {
            factors1.push(x);
            factors1.push(n / x);
        }
        x += 1;
    }
    if x * x == n {
        factors1.push(x);
    }
    factors1.sort_unstable(); // Sorting the list to get same output as original python code because we can't guarantee order of push operations
    let factors2 = factors1.drain((factors1.len() / 2)..).collect::<Vec<_>>();
    factors1.append(&mut factors2); // Merge the two halfs of list in reverse order
    factors1
}

fn main() {
    for i in [45, 53, 64] {
        println!("{}: factors: {:?}", i, factor(i));
    }
}
