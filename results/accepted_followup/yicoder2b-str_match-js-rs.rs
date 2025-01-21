fn main() {
    let stringA = "tacoloco";
    let stringB = "co";
    let mut q1: bool = false;
    let mut q2: i32 = -1;
    let mut q2matches = vec![];
    let mut q3: bool = false;
 
    if &stringA[0..1] == &stringB{ q1 = true;  }
   
    match stringA.find(&stringB) {
        Some(i) => q2 = i as i32,
        None=> ()
    }

    while let Some(&m) = stringB.as_str().find(&stringB) {
        q2matches.push(m);
    }
   
    if &stringA[&stringA.len() - stringB.len()..] == &stringB{ q3 = true; }
  
    println!("1: Does '{}' start with '{}'? {}.", stringA, stringB, if q1 { "Yes." } else { "No." });
    if q2 != -1 {
        println!("2: The index of first occurrence is {}", q2);
    }else{
        println!("2: The index of first occurrence is -1 (not found)");
    }
    if let Some(&m) = stringB.as_str().find(&stringB) {
        println!("3: First match is {}", m);
    }else{
        println!("3: First match is not found");
    }
   
    println!("4: The matches are {}", q2matches);
    if q3 {
        println!("5: '{}' contains '{}'", stringA, stringB);
    }else{
        println!("5: '{}' does not contain '{}'", stringA, stringB);
    }
}