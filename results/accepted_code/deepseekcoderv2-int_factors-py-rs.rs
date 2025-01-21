fn main() {
    fn factors(n: i32) -> Vec<i32> {
        let mut factors = Vec::new();
        let sqrt_n = (n as f64).sqrt() as i32;
        
        for x in 1..=sqrt_n {
            if n % x == 0 {
                factors.push(x);
                if x != n / x {
                    factors.push(n / x);
                }
            }
        }
        
        factors.sort();
        factors
    }
    
    let test_cases = [45, 53, 64];
    for &i in &test_cases {
        println!("{}: factors: {:?}", i, factors(i));
    }
}