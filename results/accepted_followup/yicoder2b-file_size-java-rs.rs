use std::fs::File;

fn main() -> Result<(), Box<dyn std::error::Error>> {
    let file_a = File::open("file.txt")?;
    let mut size_a = 0;
    for _ in file_a.bytes() {
        size_a += 1;
    }

    let file_b = File::open("/home/user/file.txt")?;
    let mut size_b = 0;
    for _ in file_b.bytes() {
        size_b += 1;
    }
    println!("The size of the first file is {} bytes", size_a);
    println!("The size of the second file is {} bytes", size_b);

    Ok(())
}