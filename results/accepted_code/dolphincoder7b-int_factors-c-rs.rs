use std::ptr;

struct Factors {
    list: Vec<i32>,
    count: i32,
}

impl Factors {
    fn new() -> Self {
        Factors {
            list: vec![],
            count: 0,
        }
    }

    fn xfer_factors(&mut self, flist: &Vec<i32>, flix: i32) {
        let new_size = self.count + flix;
        if new_size > flix {
            self.list = Vec::with_capacity(new_size as usize);
        } else {
            self.list = vec![];
        }

        for (ij, ix) in flist.iter().enumerate() {
            self.list[ix as usize] = *ix;
        }
        self.count = new_size;
    }
}

fn factor(num: i32) -> Vec<i32> {
    let mut flix: i32 = 0;
    let mut flist = vec![];

    for dvsr in (1..num).rev() {
        if num % dvsr != 0 {
            continue;
        }

        if flix == 300 {
            Factors::xfer_factors(&mut fctrs, &flist, flix);
            flix = 0;
        }
        flist.push(dvsr);
        flist.push(num / dvsr);
    }

    if dvsr * dvsr == num {
        flist.push(dvsr);
    }

    if flix > 0 {
        Factors::xfer_factors(&mut fctrs, &flist, flix);
    }

    return fctrs;
}

fn main() {
    let nums2factor = vec![2059, 223092870, 3135, 45];
    let mut ftors: Factors = Factors::new();
    let sep: char = ' ';

    for num in &nums2factor {
        factor(*num);
        println!("factors of {} are:", *num);

        print!("{}", fctrs.list[0]);
        for i in 1..fctrs.count as usize {
            print!("{}, {}", sep, fctrs.list[i]);
        }
        println!();
    }
}
