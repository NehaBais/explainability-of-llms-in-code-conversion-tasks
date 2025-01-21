use std::fs;

fn main() -> std::io::Result<()> {
    let size1 = fs::metadata("input.txt")?.len();
    println!("{}", size1);

    let size2 = fs::metadata("/input.txt")?.len();
    println!("{}", size2));
    Ok(())
}