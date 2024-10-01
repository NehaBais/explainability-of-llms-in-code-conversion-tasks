use std::collections::BinaryHeap;

fn main() {
    print_factors(-1);
    print_factors(0);
    print_factors(1);
    print_factors(2);
    print_factors(3);
    print_factors(53);
    print_factors(45);
    print_factors(64);
    print_factors(600851475143);
    print_factors(999999999999999989);
}

fn print_factors(nr: u64) {
    if nr < 1 {
        println!("Factors of {} not computed", nr);
        return;
    }

    let mut factors = BinaryHeap::new();
    factors.push(1);

    let mut nr_copy = nr;
    loop {
        if let Some(&factor) = factors.peek() {
            if factor * factor > nr_copy {
                break;
            }
            nr_copy /= factor;
            factors.push(factor);
        } else {
            break;
        }
    }
    let mut result: Vec<u64> = vec![];
    while let Some(&factor) = factors.pop() {
        result.push(nr_copy * factor);
    }
    println!("Factors of {}: {:?}", nr, &result[..]);
    println!("Number of factors = {}", result.len())
}
