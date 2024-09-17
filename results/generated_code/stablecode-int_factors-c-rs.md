Here is the equivalent Rust code for your C program:

```rust
pub struct Factors {
    list: Vec<i32>,
    count: i32,
}

impl Factors {
    pub fn new() -> Self {
        Self {
            list: vec![],
            count: 0,
        }
    }

    fn xfer_factors(&mut self, flist: &[i32], flix: usize) {
        let mut new_size = self.count as usize + flix;
        if new_size > flix {
            self.list = Vec::with_capacity(new_size));
        } else {
            self.list = vec![0; new_size];
        }

        for (ij, dvsr) in flist.iter().enumerate() {
            let ij_index = ij as usize;
            if self.count <= ij_index {
                self.list[new_size - 1] = *dvsr;
                self.count += 1;
            } else {
                self.list[ij_index] = *dvsr;
                self.list[ij_index + 1] = num / *dvsr;
            }
        }
    }
}

fn factor(num: i32, fctrs: &mut Factors) {
    let flist: [i32; 301];
    let mut flix = 0;

    fctrs.count = 0;
    free(fctrs.list);
    fctrs.list = vec![].into_boxed_slice();

    for dvsr in 2..=num {
        if num % dvsr != 0 {
            continue;
        }

        if flix == 300 {
            fctrs.xfer_factors(&mut fctrs, &flist, flix));
            flix = 0;
        }

        flist[flix] = dvsr;
        flist[flix + 1] = num / dvsr;
        flix += 2;
    }

    if let Some(last_dvsr) = flist.get(flix - 1) {
        if *last_dvsr * *last_dvsr == num {
            flist[flix] = *last_dvsr;
            flix += 1;
        }
    }

    fctrs.xfer_factors(&mut fctrs, &flist, flix));
}

fn main() {
    let nums2factor: [i32; 4] = [2059, 223092870, 3135, 45];

    let mut fctrs = Factors::new();
    for i in 0..4 {
        factor(nums2factor[i], &mut fctrs));
    }
}
```

This Rust program will compute the factors of a positive integer.

It uses `Vec` to create and manage an array (`list`) containing the factors. It also utilizes the `enumerate()` method to iterate through the `flist` array, which contains the divisors.
