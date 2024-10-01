use std::fs;
fn main() {
    let cwd = std::env::current_dir().unwrap(); // get the current working directory
    let root = std::path::PathBuf::from("/"); // create a path to the filesystem root

    // check for input.txt and zero_length.txt in the current working directory
    let input_txt_path = cwd.join("input.txt");
    if input_txt_path.exists() {
        if input_txt_path.is_dir() {
            println!("{} is a directory", input_txt_path.display());
        } else {
            println!(
                "{} exists with a file size of {} bytes.",
                input_txt_path.display(),
                input_txt_path.metadata().unwrap().len()
            );
        }
    } else {
        println!("{} does not exist", input_txt_path.display());
    }

    let zero_length_txt_path = cwd.join("zero_length.txt");
    if zero_length_txt_path.exists() {
        if zero_length_txt_path.is_dir() {
            println!("{} is a directory", zero_length_txt_path.display());
        } else {
            println!(
                "{} exists with a file size of {} bytes.",
                zero_length_txt_path.display(),
                zero_length_txt_path.metadata().unwrap().len()
            );
        }
    } else {
        println!("{} does not exist", zero_length_txt_path.display());
    }

    // check for input.txt and zero_length.txt in the filesystem root
    let input_txt_root_path = root.join("input.txt");
    if input_txt_root_path.exists() {
        if input_txt_root_path.is_dir() {
            println!("{} is a directory", input_txt_root_path.display());
        } else {
            println!(
                "{} exists with a file size of {} bytes.",
                input_txt_root_path.display(),
                input_txt_root_path.metadata().unwrap().len()
            );
        }
    } else {
        println!("{} does not exist", input_txt_root_path.display());
    }

    let zero_length_txt_root_path = root.join("zero_length.txt");
    if zero_length_txt_root_path.exists() {
        if zero_length_txt_root_path.is_dir() {
            println!("{} is a directory", zero_length_txt_root_path.display());
        } else {
            println!(
                "{} exists with a file size of {} bytes.",
                zero_length_txt_root_path.display(),
                zero_length_txt_root_path.metadata().unwrap().len()
            );
        }
    } else {
        println!("{} does not exist", zero_length_txt_root_path.display());
    }
}
