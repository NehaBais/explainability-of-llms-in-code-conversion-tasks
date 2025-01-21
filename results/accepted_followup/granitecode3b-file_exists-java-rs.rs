use std::fs;
const CURRENT_WORKING_DIRECTORY_PATH: String = std::env::current_dir().unwrap();
const INPUT_FILE_PATH: String = format!("{}/docs/input.txt", CURRENT_WORKING_DIRECTORY_PATH);
if fs::metadata(&INPUT_FILE_PATH).is_ok() {
 println!("The file exists in the current working directory.");
} else {
 println!("The file does not exist in the current working directory.");
}
const ROOT_DIRECTORY_PATH: String = std::env::var("C:").unwrap();
const INPUT_FILE_PATH_ROOT: String = format!("{}/docs/input.txt", ROOT_DIRECTORY_PATH);
if fs::metadata(&INPUT_FILE_PATH_ROOT).is_ok() {
 println!("The file exists in the filesystem root.");
} else {
 println!("The file does not exist in the filesystem root.");
}