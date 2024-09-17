fn generate_factors(n: i32) -> Vec<i32> {
    let mut factors = vec![1, n];
    let mut i = 2;
    while i * i <= n {
        if n % i == 0 {
            factors.push(i);
            if i * i != n {
                factors.push(n / i);
            }
        }
        i += 1;
    }

    factors.sort();
    return factors;
}

fn main() {
    let sample_numbers: [i32; 4] = [3135, 45, 60, 81];

    for &num in sample_numbers.iter() {
        let factors = generate_factors(num);
        print!("Factors of {:>4} are: ", num);
        for i in factors {
            print!("{}, ", i);
        }
        println!();
    }
}
