fn print_factors(n: i64) {
    if n < 1 {
        println!("Factors of {} not computed", n);
        return;
    }
    let mut fs = vec![1];
    fs.extend((0..).step_by(1)); // initializes all elements to 1
    fn apf(p: i64, e: usize) {
        for _ in 0..e {
            let mut x = p;
            while let &is = fs.first() {
                if let Err(_)= is.push(&*x as i64) {}
            }
        }
    } // end apf
    apf(n, 1);
    println!("Factors of {} are: {}", n, fs.iter().map(|x| x as i64).collect::<Vec<_>>());
    println!("Number of factors = {}", fs.len());
} // end print_factors