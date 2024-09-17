use std::convert::TryInto;
fn factors(num: i32) -> Vec<i32> {
    let mut n_factors = vec![];
    for i in 1..(num / 2 + 1) {
        if num % i == 0 {
            n_factors.push(i);
            if (num / i != i) && ((num / i).try_into().unwrap() > i) {
                n_factors.push((num / i));
            }
        }
    }
    n_factors.sort(); // numeric sort
    n_factors
}
fn main() {
    println!("{:?}", factors(45));
    println!("{:?}", factors(64));
    println!("{:?}", factors(73));
}
