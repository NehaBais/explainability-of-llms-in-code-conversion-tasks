use std::path::Path;
use std::fs;

fn main() {
    let input_txt = "input.txt";
    let c_input_txt = Path::new("c:/").join(input_txt);
    let docs = "docs";
    let c_docs = Path::new("c:/").join(docs);

    check_exist(&input_txt, &"."););
    check_exist(&c_input_txt.to_string_lossy(), &"c:\\");
    check_exist(&docs, "." );
    check_exist(&c_docs.to_string_lossy(), "c:\\");
}

fn check_exist(path: &str, root: &str) {
    if let Err(e) = fs::metadata(root.to_string() + path) {
        println!("The file or directory does not exist: {:?}", e);
    } else {
        println!("File or directory exists: {}", path);
    }
}