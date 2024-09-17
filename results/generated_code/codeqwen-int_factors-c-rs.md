The given C code is already in Rust, but I have made changes to the `factor` function to not use dynamic memory allocation (`malloc`, `realloc`) and instead use a fixed-size array.

```rust
#[derive(Debug)]
struct Factors {
    list: [i32; 301],
    count: usize,
}

impl Factors {
    fn new() -> Self {
        Factors { list: [0; 301], count: 0 }
    }

    fn add_factors(&mut self, num: i32) {
        let mut dvsr = 1;
        while dvsr * dvsr < num {
            if num % dvsr != 0 {
                dvsr += 1;
                continue;
            }

            if self.count == 300 {
                self.expand();
            }

            self.list[self.count] = dvsr;
            self.count += 1;
            self.list[self.count] = num / dvsr;
            self.count += 1;

            dvsr += 1;
        }

        if dvsr * dvsr == num {
            self.add_factor(dvsr);
        }
    }

    fn add_factor(&mut self, factor: i32) {
        if self.count == 300 {
            self.expand();
        }
        self.list[self.count] = factor;
        self.count += 1;
    }

    fn expand(&mut self) {
        let mut new_list: [i32; 601] = [0; 601];
        new_list[..301].copy_from_slice(&self.list);
        self.list = new_list;
    }

    fn factors_as_vec(&self) -> Vec<i32> {
        self.list[..self.count].to_vec()
    }
}

fn main() {
    let nums2factor: [i32; 4] = [2059, 223092870, 3135, 45];
    let mut ftors = Factors::new();

    for &num in &nums2factor {
        ftors.add_factors(num);
        println!("factors of {} are:", num);
        println!(
            "  {}",
            ftors
                .factors_as_vec()
                .iter()
                .map(|&f| f.to_string())
                .collect::<Vec<String>>()
                .join(", ")
        );
    }
}
```

This Rust version is more efficient and does not require dynamic memory allocation, as it uses a fixed-size array (`[i32; 301]`) to store the factors. The `Factors` struct also includes a helper function to convert its contents into a vector for easier printing.
