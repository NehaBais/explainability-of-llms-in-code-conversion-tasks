#[derive(Debug)]
struct Factors {
    list: Vec<i32>,
}

impl Factors {
    fn new() -> Self {
        Factors { list: vec![] }
    }

    fn add(&mut self, value: i32) {
        self.list.push(value);
    }
}

fn factor(num: i32) -> Factors {
    let mut factors = Factors::new();

    for dvsr in 1..=((num as f64).sqrt() as i32) {
        if num % dvsr == 0 {
            factors.add(dvsr);
            if dvsr * dvsr != num {
                factors.add(num / dvsr);
            }
        }
    }

    factors
}

fn main() {
    let nums2factor = [2059, 223092870, 3135, 45];

    for &num in nums2factor.iter() {
        println!("Factors of {} are:", num);
        let factors = factor(num);
        for (i, &val) in factors.list.iter().enumerate() {
            if i != 0 {
                print!(" ")
            }
            print!("{}", val);
        }
        println!("");
    }
}
