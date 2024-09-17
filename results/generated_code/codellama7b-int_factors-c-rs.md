 This code is in C and it computes the factors of a positive integer using the Sieve of Eratosthenes algorithm. Here's the Rust version of the code:
```rust
use std::vec::Vec;

fn xfer_factors(fctrs: &mut Vec<i32>, flist: &[i32], flix: usize) {
    let mut ix = 0;
    for item in flist.iter() {
        fctrs.push(*item);
        ix += 1;
    }
}

fn factor(num: i32, fctrs: &mut Vec<i32>) -> i32 {
    let mut flist = vec![];
    let mut flix = 0;
    for dvsr in 1.. {
        if num % dvsr != 0 { continue; }
        if flix == 300 { xfer_factors(fctrs, flist.as_slice(), flix); }
        flist.push(dvsr);
        flist.push(num / dvsr);
        flix += 1;
    }
    if num == dvsr * dvsr {
        flist.push(dvsr);
    }
    if flix > 0 { xfer_factors(fctrs, flist.as_slice(), flix); }
}

fn main() {
    let mut nums2factor = vec![2059, 223092870, 3135, 45];
    for i in 0..nums2factor.len() {
        factor(nums2factor[i], &mut Vec::new());
        println!("factors of {} are: ", nums2factor[i]);
        for j in 0..fctrs.count {
            print!("{}", fctrs[j]);
        }
        println!();
    }
}
```
The code above is more idiomatic Rust and uses the standard library's `Vec` type instead of the C-style array. The `xfer_factors` function takes a mutable reference to a vector `fctrs` and pushes the elements from `flist` into it, while the `factor` function first initializes an empty vector `flist` to store the factors and then iterates over all possible divisors of `num` using a for loop. If a divisor is found, it is pushed onto `flist`. The `flix` variable keeps track of the number of elements in `flist`. If `flix` exceeds 300, the vector is reallocated to accommodate more elements and the previous elements are moved to the new location. Finally, if `flix` is greater than zero, the factors are transferred from `flist` to the `fctrs` vector using the `xfer_factors` function.
