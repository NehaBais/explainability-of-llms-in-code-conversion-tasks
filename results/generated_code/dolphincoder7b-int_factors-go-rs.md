This is a challenging task as it involves multiple Golang code conversions to Rust. Here's the step-by-step translation:

1. Import "fmt" package in Rust.
2. Create a function named "main" which contains the same Golang code for defining main() function. 
3. Define a new function named "printFactors" which has two parameters of type int64. This function will be used later as part of the main() function.
4. The rest of the code is the conversion from Golang to Rust. It includes data types, control flow statements, and mathematical operations. 
5. The Rust code should follow the same logic as the original Golang code and provide equivalent functionality.
6. Ensure that the Rust code does not include any unused or unnecessary imports or variables.
7. Make sure all syntax elements and keywords used in the original Golang program are translated into Rust's respective equivalents. 
8. Lastly, run the Rust code with 'cargo run' to compile and execute it.
Here is the translated Rust code:

```rust
use std::fmt;

fn main() {
    print_factors(-1);
    print_factors(0);
    print_factors(1);
    print_factors(2);
    print_factors(3);
    print_factors(53);
    print_factors(45);
    print_factors(64);
    print_factors(600851475143);
    print_factors(999999999999999989);
}

fn print_factors(nr: i64) {
    if nr < 1 {
        fmt::println!("Factors of {} not computed", nr);
        return;
    }
    println!("Factors of {}:", nr);
    let mut fs = vec![1];
    let mut apf = |p: u32, e: usize| {
        let n = fs.len();
        for _ in 0..e {
            for j in 0..n {
                fs.push(fs[j] * p as i64);
            }
        }
    };
    let mut e = 0;
    while nr % 2 == 0 {
        nr /= 2;
        e += 1;
    }
    apf(2, e);

    for d in (3..).step_by(2) {
        if d * d > nr {
            break;
        }
        let mut e = 0;
        while nr % d == 0 {
            nr /= d;
            e += 1;
        }
        if e > 0 {
            apf(d, e);
        }
    }

    println!("{:?}", fs);
    println!("Number of factors = {}", fs.len());
}
```

Note: This translation may not be perfect as Rust is generally more verbose and has fewer built-in functions for factoring numbers than Golang. You might need to adjust the code accordingly if you want to match the original functionality exactly.
