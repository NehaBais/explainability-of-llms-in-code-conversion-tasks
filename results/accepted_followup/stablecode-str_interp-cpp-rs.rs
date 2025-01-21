fn main() 
{
    let original = "Mary had a X lamb.";
    let to_be_replaced = "X";
    let replacement = "little";

    // Using format! for string interpolation
    let new_string = format!(
        "{} {} {}",
        original.replace(original.find(to_be_replaced)),
        to_be_replaced.len(),
        replacement
    );

    println!("String after replacement: 
{}", new_string);
}