Rust version of the code is as follows:

#![Cargo.toml]
[dependencies]
libc = "^0.2"
itertools = "0.9.0"
num-traits = "0.2.8"
num-derive = "0.3.1"
num-integer = "0.1.41"
num-rational = "0.2.4"
num-bigint = "0.2.6"
num-bigint-dig = "0.5.2"
num = { version = "0.3", features = ["serde"] }
num-complex = "0.2.4"
ndarray = "^0.13.0"
nalgebra = "^0.20.7"
libm = { version = "0.2.6", default_features = false, optional = true, features = ["with-cblas"] }

```
#![rustfmt::skip]
#![allow(dead_code)]
use itertools::Itertools;
use num_bigint::BigUint;
use std::fs::File;
use std::io::{BufRead, BufReader};
use std::iter::Iterator;
use std::ops::Div;
use std::path::PathBuf;
use std::time::SystemTime;

pub fn main() {
    let SampleNumbers = [3135, 45, 60, 81];

    for i in 0..SampleNumbers.len() {
        println!("Factors of {:?}:", SampleNumbers[i]);
        for factor in GenerateFactors(SampleNumbers[i]) {
            println!("{:?}", factor);
        }
    }
}

fn GenerateFactors(n: int) -> Vec<int> {
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
    factors
}
```