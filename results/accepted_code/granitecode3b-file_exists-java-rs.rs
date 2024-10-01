use std::fs;
let current_working_directory_path = std::env::current_dir().unwrap();
let input_file_path = current_working_directory_path.join("docs/input.txt");
if fs::metadata(&input_file_path).is_ok() {
 println!("The file exists in the current working directory.");
} else {
 println!("The file does not exist in the current working directory.");
}
let root_directory_path = std::env::var("C:").unwrap();
let input_file_path = format!("{}/docs/input.txt", root_directory_path);
if fs::metadata(&input_file_path).is_ok() {
 println!("The file exists in the filesystem root.");
} else {
 println!("The file does not exist in the filesystem root.");
}