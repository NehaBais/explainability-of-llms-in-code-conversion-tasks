use std::iter;

fn factor(n: u32) -> Vec<u32> {
    let mut factors1 = vec![];
    let mut factors2 = vec![];

    for x in 1..isqrt(n) {
        if n % x == 0 {
            factors1.push(x);
            factors2.push(n / x);
        }
    }

    let mut x = isqrt(n) + 1;

    if x * x == n {
        factors1.push(x);
    }

    factors1.extend(iter::from_fn(move |_| Some(factors2.pop().unwrap())));

    factors1
}

for i in vec![45, 53, 64] {
    println!("{}: Factors: {:?}", i, factor(i));
}