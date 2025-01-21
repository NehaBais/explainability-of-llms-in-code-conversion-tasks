Error: Rust's borrowing rules prevent mutable borrow when an immutable reference is also present.

Fix: Make `xfer_factors` method take an ownership of `self`.

```rust
#[derive(Debug)]
struct Factors {
    list: Vec<i32>,
}

impl Factors {
    fn new() -> Self {
        Factors { list: vec![] }
    }

    fn factor(mut self, num: i32) -> Vec<i32> {
        let mut flix = 0;
        self.list.clear();
        for dvsr in 1..=((num as f64).sqrt() as i32) {
            if num % dvsr != 0 {
                continue;
            }
            if flix == 300 {
                self.xfer_factors(&self.list);
                flix = 0;
            }
            self.list.push(dvsr as i32);
            self.list.push(num / dvsr);
        }

        if (num as f64).sqrt() as i32 * (num as f64).sqrt() as i32 == num {
            self.list.push((num as f64).sqrt() as i32);
        }
        if !self.list.is_empty() {
            self.xfer_factors(&self.list);
        }

        self.list
    }

    fn xfer_factors(self, flist: &Vec<i32>) -> Self {
        let mut new = Factors::new();
        for i in flist.iter() {
            new.list.push(*i);
        }
        new
    }
}

fn main() {
    let nums2factor = vec![2059, 223092870, 3135, 45];
    for num in nums2factor.iter() {
        let mut ftors = Factors::new();
        let factors = ftors.factor(*num);
        println!("Factors of {} are: {:?}\n", num, factors);
    }
}
```
