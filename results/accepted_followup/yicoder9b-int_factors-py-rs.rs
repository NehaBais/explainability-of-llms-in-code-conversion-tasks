fn factor(n: u32) -> Vec<u32> {
    let mut factors1 = Vec::new();
    for x in 1..=((n as usize).sqrt() as u32) {
        if n % x == 0 {
            factors1.push(x.try_into().unwrap());
            let y = (n / x).try_into().unwrap();
            if y != x {
                factors1.push(y);
            }
        }
    }

    let mut factors2: Vec<u32> = factors1.into();
    factors2.sort();
    factors2
}