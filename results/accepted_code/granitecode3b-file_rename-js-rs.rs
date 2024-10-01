use std::env;
use std::fs::{read_to_string, write, File};
fn main() {
    let input = "input.txt";
    let output = "output.txt";

    // Rename in current working directory
    rename(input, output).expect("Could not rename file");

    // Rename in root filesystem directory
    let root = env::current_dir().unwrap();
    let input = format!("{}{}", root.display(), input);
    let output = format!("{}{}", root.display(), output);
    rename(&input, &output).expect("Could not rename file");

    fn rename(old: &str, new: &str) -> Result<(), std::io::Error> {
        let content = read_to_string(old)?;
        write(new, &content)?;
        Ok(())
    }
}
