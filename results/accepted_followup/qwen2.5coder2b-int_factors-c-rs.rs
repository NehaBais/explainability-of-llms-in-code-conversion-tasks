fn main() {
    let nums2factor: Vec<i32> = vec![2059, 223092870, 3135, 45];
    for num in &nums2factor {
        let mut factors: Vec<i32> = compute_factors(*num);
        println!("factors of {} are: {}", *num, factors.join(", "));
    }
}

fn compute_factors(num: i32) -> Vec<i32> {
    let mut factors: Vec<i32> = Vec::new();
    for dvsr in 1..=((num as f64).sqrt() as i32) {
        if num % dvsr == 0 {
            factors.push(dvsr);
            factors.push(num / dvsr);
        }
    }
    if num.pow(2) == num {
        factors.push(num);
    }
    factors
}
