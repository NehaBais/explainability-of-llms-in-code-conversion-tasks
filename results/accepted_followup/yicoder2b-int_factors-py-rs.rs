use std::collections::VecDeque;

fn main() {
    let nums = vec![45, 53, 64];
    for num in &nums {
        let mut result = VecDeque::new();
        let limit: u64 = *num as u64;
        for x in 1..=limit {
            if *num % x == 0 {
                result.push_back(x);
                result.push_front((*num / x) as u64);
            }
        }
        println!("{}: factors: {:?}", num, result);
    }
}