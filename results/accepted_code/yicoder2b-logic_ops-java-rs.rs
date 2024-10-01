fn logic(mut a: bool, mut b: bool) {
    let mut res1 = a && b;
    let mut res2 = a || b;
    let mut res3 = !a;

    println!("a AND b: {}", res1);
    println!("a OR b: {}", res2);
    println!("NOT a: {}", res3);
}
