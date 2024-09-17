fn factors(num: u64) -> Vec<u64> {
    let mut result = Vec::new();
    for i in 1..=(num as f64).sqrt().ceil() as u64 {
        if num % i == 0 {
            result.push(i);
            if i * i != num {
                result.push(num / i);
            }
        }
    }
    result.sort_unstable();
    result
}

fn main() {
    println!("Factors of 45: {:?}", factors(45));
    println!("Factors of 53: {:?}", factors(53));
    println!("Factors of 64: {:?}", factors(64));
}
