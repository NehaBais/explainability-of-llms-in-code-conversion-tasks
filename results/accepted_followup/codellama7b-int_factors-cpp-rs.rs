fn generate_factors(n: i32) -> Vec<i32> {
    // Initialize the factors vector
    let mut factors = vec![1, n];

    // Iterate from 2 to the square root of n
    for i in 2..(n as f64).sqrt().ceil() as i32 {
        // Check if n is divisible by i
        if n % i == 0 {
            // Add i and n/i to the factors vector
            factors.push(i);
            factors.push(n / i);
        }
    }

    // Sort the factors vector in ascending order
    factors.sort();

    return factors;
}

fn main() {
    let sample_numbers = [3135, 45, 60, 81];

    for i in 0..sample_numbers.len() {
        println!("Factors of {} are: ", sample_numbers[i]);
        let factors = generate_factors(sample_numbers[i] as i32);
        for factor in factors {
            println!("{}", factor);
        }
    }
}
