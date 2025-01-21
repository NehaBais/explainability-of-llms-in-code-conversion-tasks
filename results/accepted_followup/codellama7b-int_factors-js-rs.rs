fn factors(num: u32) -> Vec<u32> {
    (1..=num as u32).filter(|&i| num % i == 0).collect()
}

fn main() {
    assert_eq!(factors(45), vec![1, 3, 5, 9, 15, 45]);
    assert_eq!(factors(53), vec![1, 53]);
    assert_eq!(factors(64), vec![1, 2, 4, 8, 16, 32, 64]);
}
