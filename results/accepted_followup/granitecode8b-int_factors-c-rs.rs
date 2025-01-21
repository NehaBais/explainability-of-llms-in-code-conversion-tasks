struct Factors {
    list: Vec<i32>,
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
                factor(num / dvsr, fctrs); // recursively call the factor function with a new Factors struct
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
    let mut fctrs = Factors::new();
    factor(12, &mut fctrs);
    println!("factors of 12 are: {:?}", fctrs.list);
}
