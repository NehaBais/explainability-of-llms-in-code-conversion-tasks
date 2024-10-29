use std::fs;

fn main() {
    let file_a = fs::metadata("fileA.txt");
    match file_a {
        Ok(val) => println!("{:,} B", val.len()),
        Err(error) => eprintln!("Couldn't read the file: {}", error),
    }

    let file_b = fs::metadata("/fileB.txt");
    match file_b {
        Ok(val) => println!("{:,} B", val.len()),
        Err(error) => eprintln!("Couldn't read the file: {}", error),
    }
}
