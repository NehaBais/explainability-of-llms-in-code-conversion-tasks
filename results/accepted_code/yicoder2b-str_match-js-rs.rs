fn main() {
    let stringA = "tacoloco";
    let stringB = "co";
    let mut q1: bool = false;
    let mut q2: i32 = -1;
    let mut q2multi: RegExp = match regex::compile(stringB) { _ => panic!("Invalid pattern for string B"), _ -> () };
    let mut q2matches = vec![];
    let mut q3: bool = false;
 
    if &stringA[0..1] == &stringB{ q1 = true;  }
   
    match stringA.find(&stringB) { 
        Some(i) => q2 = i as i32,
        None=> ()
    }

    while let Some(&m) = q2multi.exec(&stringA){
        q2matches.push(m);
    }
   
    if &stringA[&stringA.len() - stringB.len()..] == &stringB{ q3 = true; }
  
    println!("1: Does '{}' start with '{}'? {}.", stringA, stringB, if q1 { "Yes." } else { "No." });
    if q2 != -1 {
        println!("2: Is '{}' contained in '{}'? Yes, at index {}.", stringB, &stringA, q2);
        if q2matches.len() > 1 {
            println!("   In fact, it happens {} times within '{}', at index {}.", q2matches.len(), stringA, if q2matches.len()>1{&stringB}else{&stringB});  
        }
    } else {
        println!("2: Is '{}' contained in '{}'? No.", stringB, &stringA);
    }
    println!("3: Does '{}' end with '{}'? {}.", &stringA, stringB, if q3 { "Yes." } else { "No." });
}