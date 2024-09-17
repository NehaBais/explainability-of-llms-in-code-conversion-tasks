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