Here is the equivalent Rust code:

```rust
use std::vec::Vec;

struct Factors {
    list: Vec<i32>,
    count: usize,
}

fn xfer_factors(fctrs: &mut Factors, flist: &[i32]) {
    let new_size = fctrs.list.len() + flist.len();
    if new_size > fctrs.count {
        fctrs.list.extend_from_slice(&flist);
    } else {
        fctrs.list.clear();
        fctrs.list.extend_from_slice(&flist);
    }
    fctrs.count = new_size;
}

fn factor(num: i32, fctrs: &mut Factors) {
    let mut flist = Vec::new();
    let mut flix = 0;
    fctrs.list.clear();
    fctrs.count = 0;

    for dvsr in 1..=((num as f64).sqrt() as i32) {
        if num % dvsr == 0 {
            flist.push(dvsr);
            if num / dvsr != dvsr {
                flist.push(num / dvsr);
            }
            flix += 2;
        }
    }

    xfer_factors(fctrs, &flist);
}

fn main() {
    let nums_to_factor = vec![2059, 223092870, 3135, 45];
    let mut ftors = Factors { list: Vec::new(), count: 0 };

    for num in nums_to_factor {
        factor(num, &mut ftors);
        println!("
factors of {} are:
", num);

        for (j, &factor) in ftors.list.iter().enumerate() {
            if j > 0 { print!(", ") }
            print!("{}", factor);
        }
        println!("\n");
    }
}
```

This code computes the factors of a positive integer and prints them. Note that Rust doesn't need to use dynamic memory as C, it has built-in support for vectors which are more safe and efficient in terms of memory management. Also, Rust's ownership system helps avoid many common errors found in languages like C, such as segmentation faults or double free bugs.
