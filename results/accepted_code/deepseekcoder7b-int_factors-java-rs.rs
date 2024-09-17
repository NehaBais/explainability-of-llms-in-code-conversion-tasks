use std::cmp::Ordering;

fn factors(n: u64) -> Vec<u64> {
    let mut factors = vec![n, 1];
    for test in (2..((n as f64).sqrt() as u64 + 1)).rev() {
        match n.checked_rem(test).map_or(false, |r| r == 0) {
            true => factors.push(test),
            false => {}
        }
        if let Some(idx) = factors.binary_search(&n / test) {
            factors.insert(idx + 1, n / test);
        } else {
            match factors.binary_search_by(|f| f.cmp(&n / test)) {
                Ok(_) => {}
                Err(e) => {
                    if let Ordering::Less = &factors[e] {
                        return factors;
                    } else {
                        factors.insert(e, n / test);
                    }
                }
            }
        }
    }
    factors.dedup();
    factors
}
