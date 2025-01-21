use std::ptr;

struct Factors {
    list: Vec<i32>,
    count: i32,
}

impl Factors {
    fn new() -> Self {
        let mut factors = Factors {
            list: vec![],
            count: 0,
        };
        factors.list.reserve(1); // Preallocate memory for better performance
        return factors;
    }

    fn xfer_factors(&mut self, flist: &Vec<i32>, flix: i32) {
        let new_size = self.count + flix;
        if new_size > flix {
            self.list.reserve(new_size as usize - self.list.len());
        } else {
            self.list.clear(); // Clear the list to free up memory
        }

        for &ix in flist.iter() {
            self.list[ix as usize] = ix; // Fix: dereference the expression
        }
    }
}

fn factor(num: i32) -> Vec<i32> {
    let mut factors = Factors::new();

    for dvsr in 1..=num / 2 {
        if num % dvsr == 0 {
            factors.xfer_factors(&vec![dvsr], 1);
            factors.count += 1;
        }
    }

    // Fix: return the list of factors
    return factors.list;
}
