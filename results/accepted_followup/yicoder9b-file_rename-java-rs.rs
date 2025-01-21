use std::{fs, env}; // use correct module 'env' instead of 'process'

fn rename_file(oldname: &str, newname: &str) -> bool {
    fs::rename(oldname, newname).is_ok()
}

fn test(type_str: &str, oldname: &str, newname: &str) {
    println!(
        "The following {} called {} was renamed as {} :{}.",
        type_str,
        oldname,
        newname,
        rename_file(oldname, newname)
    );
}

fn main() {
    test("file", "input.txt", "output.txt");
    let curr_dir = env::current_dir().unwrap(); // get current directory path safely with unwrap
    test(&format!("{}{}", curr_dir.to_str().unwrap(), "\\input.txt"), 
          &format!("{}{}", curr_dir.to_str().unwrap(), "\\output.txt")); // use format! macro to concat file paths with directory path  
    test(&format!("{}{}", curr_dir.to_str().unwrap(), "\\docs"), 
          &format!("{}{}", curr_dir.to_str().unwrap(), "\\mydocs")); // same as above
}