#[derive(Debug)]
struct Factors {
    list: Vec<i32>,
}

impl Factors {
    fn new() -> Factors {
        Factors { list: vec![] }
    }

    fn xfer_factors(&mut self, flist: &Vec<i32>) {
        for i in flist.iter() {
            self.list.push(*i);
        }
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
}

fn main() {
    let nums2factor = vec![2059, 223092870, 3135, 45];
    let mut ftors = Factors::new();

    for num in nums2factor.iter() {
        let factors = ftors.factor(*num);
        println!("Factors of {} are: {:?}\n", num, factors);
    }
}
