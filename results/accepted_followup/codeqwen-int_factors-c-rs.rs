#[derive(Debug)]
struct Factors {
    list: [i32; 301],
    count: usize,
}

impl Factors {
    fn new() -> Self {
        Factors {
            list: [0; 301],
            count: 0,
        }
    }

    // ... (rest of the code is the same as before)
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
