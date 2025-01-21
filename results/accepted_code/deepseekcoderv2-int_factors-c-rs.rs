use std::alloc::{self, realloc};
use std::fmt;

struct Factors {
    list: Vec<i32>,
}

impl Factors {
    fn new() -> Self {
        Factors { list: Vec::new() }
    }

    fn xfer_factors(&mut self, flist: &[i32], flix: usize) {
        let new_size = self.list.len() + flix;
        if new_size > flix {
            self.list.reserve(new_size - self.list.len());
            unsafe {
                alloc::realloc(
                    self.list.as_mut_ptr(),
                    self.list.capacity() * std::mem::size_of::<i32>(),
                    new_size * std::mem::size_of::<i32>(),
                );
            }
        } else {
            self.list = Vec::with_capacity(new_size);
        }
        for (ij, &ix) in flist.iter().enumerate() {
            self.list.push(ix);
        }
    }
}

fn factor(num: i32, fctrs: &mut Factors) -> &Factors {
    let mut flist = Vec::with_capacity(301);
    let mut flix = 0;

    for dvsr in 1..=((num as f64).sqrt() as i32) {
        if num % dvsr != 0 {
            continue;
        }
        if flix >= 300 {
            fctrs.xfer_factors(&flist, flix);
            flix = 0;
        }
        flist.push(dvsr);
        flist.push(num / dvsr);
        flix += 2;
    }

    if (dvsr * dvsr) == num {
        flist.push(dvsr);
    }

    if !flist.is_empty() {
        fctrs.xfer_factors(&flist, flix);
    }

    fctrs
}

fn main() {
    let nums2factor = [2059, 223092870, 3135, 45];
    let mut ftors = Factors::new();

    for &num in &nums2factor {
        factor(num, &mut ftors);
        println!("Factors of {} are:", num);
        let sep = ' ';
        for (j, &f) in ftors.list.iter().enumerate() {
            if j > 0 {
                print!(", ");
            }
            print!("{} {}", sep, f);
        }
        println!();
    }
}