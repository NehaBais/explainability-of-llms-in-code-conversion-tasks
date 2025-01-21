extern crate itertools;
use itertools::Itertools;

fn factors(num: u32) -> Vec<u32> {
    let mut n_factors = (1..=((f64::from(num)).sqrt() as u32))
        .filter(|i| num % i == 0)
        .collect::<Vec<u32>>();

    if ((f64::from(num)).sqrt().ceil() as u32) != *n_factors.last().unwrap() {
        let last = n_factors.pop().unwrap();
        n_factors.append(&mut (1..last).map(|i| num / i).collect::<Vec<u32>>());
    }

    // sort in ascending order
    n_factors.sort();

    return n_factors;
}

fn main() {
    println!("{:?}", factors(45)); // [1,3,5,9,15,45]
    println!("{:?}", factors(53)); // [1,53]
    println!("{:?}", factors(64)); // [1,2,4,8,16,32,64]
}
