struct Factors {
    list: Vec,
    count: usize,
}
impl Factors {
    fn new() -> Self {
        Self {
            list: vec![],
            count: 0,
        }
    }

    fn add_factor(&mut self, factor: i32) {
        self.list.push(factor);
        self.count += 1;
    }

    fn merge(&mut self, other: &Factors) {
        for factor in &other.list {
            self.add_factor(*factor);
        }
    }
}
fn factor(num: i32, fctrs: &mut Factors) {
    let mut dvsr = 1;
    while dvsr * dvsr <= num {
        if num % dvsr == 0 {
            if fctrs.list.len() >= 300 {
                fctrs.merge(&factor(num / dvsr, &mut Factors::new()));
            } else {
                fctrs.add_factor(dvsr);
            }
        }
        dvsr += 1;
    }
    if dvsr * dvsr == num {
        fctrs.add_factor(dvsr);
    }
}
fn main() {
    let nums2factor = vec![2059, 223092870, 3135, 45];
    let mut ftors = Factors::new();
    for num in nums2factor {
        factor(num, &mut ftors);
        println!("factors of {} are: {:?}", num, ftors.list);
    }
}
