fn main() {
    let stringA = "tacoloco";
    let stringB = "co";

    // Determine if stringA starts with stringB
    if stringA.starts_with(stringB) {
        println!("Does '{}' start with '{}'? Yes.", stringA, stringB);
    } else {
        println!("Does '{}' start with '{}'? No.", stringA, stringB);
    }

    // Determine if stringB is contained in stringA
    if stringA.contains(stringB) {
        let index = stringA[..stringB.len():].find(stringB));
        println!("Does '{}' contain '{}'? Yes, at index {}.", stringA, stringB, starts_with ? index + stringA[..stringA.len() - stringB.len():].len() : -1);
    } else {
        println!("Does '{}' contain '{}'? No.", stringA, stringB);
    }

    // Determine if stringA ends with stringB
    if stringA.ends_with(stringB) {
        println!("Does '{}' end with '{}'? Yes.", stringA, stringB);
    } else {
        println!("Does '{}' end with '{}'? No.", stringA, stringB);
    }
}