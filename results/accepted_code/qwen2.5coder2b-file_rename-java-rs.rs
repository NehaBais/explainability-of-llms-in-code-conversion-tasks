use std::fs;

fn rename_file(old_name: &str, new_name: &str) -> bool {
    fs::rename(old_name, new_name).is_ok()
}

fn test(type_: &str, old_name: &str, new_name: &str) {
    println!(
        "The following {} called {}",
        type_,
        old_name,
        if rename_file(old_name, new_name) {
            format!("was renamed as {}", new_name)
        } else {
            String::from("could not be renamed into ")
        }
    );
}

fn main() {
    test("file", "input.txt", "output.txt");
    test("file", std::path::Separator::new().to_string().concat(&"input.txt"), std::path::Separator::new().to_string().concat(&"output.txt"));
    test("directory", "docs", "mydocs");
    test("directory", std::path::Separator::new().to_string().concat("docs"), std::path::Separator::new().to_string().concat("mydocs"));
}