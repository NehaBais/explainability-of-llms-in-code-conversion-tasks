use std::iter;
use std::vec::Vec;

#[derive(Debug)]
struct Factors {
    list: Vec<i32>,
}

impl Factors {
    fn new() -> Self {
        Factors { list: vec![] }
    }

    fn transfer(&mut self, flist: &Vec<i32>) {
        for &value in flist.iter() {
            self.list.push(value);
        }
    }
}

fn factor(num: i32, factors: &mut Factors) -> Factors {
    let mut flist = vec![];
    let mut dvsr = 1;
    while dvsr * dvsr < num {
        if num % dvsr != 0 {
            dvsr += 1;
            continue;
        }
        flist.push(dvsr);
        flist.push(num / dvsr);
    }
    if dvsr * dvsr == num {
        flist.push(dvsr);
    }
    factors.transfer(&flist);
    *factors
}

fn main() {
    let nums2factor = vec![2059, 223092870, 3135, 45];
    let mut ftors = Factors::new();
    for &num in nums2factor.iter() {
        factor(num, &mut ftors);
        println!("factors of {} are: {:?}", num, ftors.list);
        ftors.list.clear();
    }
}
