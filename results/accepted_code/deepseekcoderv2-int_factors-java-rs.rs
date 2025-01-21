use std::collections::HashSet;

fn factors(n: u64) -> HashSet<u64> {
    let mut factors = HashSet::new();
    factors.insert(n);
    factors.insert(1);
    
    for test in (1..).take_while(|&x| x * x <= n) {
        if n % test == 0 {
            factors.insert(test);
            let other_factor = n / test;
            if other_factor != test {
                factors.insert(other_factor);
            }
        }
    }
    
    factors
}

fn main() {
    let number = 28;
    let factor_set = factors(number);
    println!("Factors of {} are: {:?}", number, factor_set);
}