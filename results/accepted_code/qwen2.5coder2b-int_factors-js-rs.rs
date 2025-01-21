fn factors(num: u32) -> Vec<u32> {
    let mut factors = Vec::new();
    let sqrt_num = (num as f64).sqrt() as u32;

    for i in 1..=sqrt_num {
        if num % i == 0 {
            factors.push(i);
            if num / i != i {
                factors.push(num / i);
            }
        }
    }

    factors.sort_unstable();
    factors
}

fn main() {
    println!("{:?}", factors(45)); // [1, 3, 5, 9, 15, 45]
    println!("{:?}", factors(53)); // [1, 53]
    println!("{:?}", factors(64)); // [1, 2, 4, 8, 16, 32, 64]
}