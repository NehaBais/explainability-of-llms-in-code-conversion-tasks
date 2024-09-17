fn print_factors(nr: i64) {
    if nr < 1 {
        println!("Factors of {} not computed", nr);
        return;
    }

    println!("Factors of {: }: ", nr);
    let mut fs = vec![1];
    let mut e = 0;

    for d in 2..=nr {
        if nr % d == 0 {
            for i in 0..e {
                fs[i] *= d;
            }
            e += 1;
            fs.push(d);
            nr /= d;
            d -= 1;
        }
    }

    if e > 0 {
        fs.insert(0, 1);
        fs.push(nr);
    } else {
        fs.push(nr);
    }

    println!("{:?}", fs);
    println!("Number of factors = {}", fs.len());
}
