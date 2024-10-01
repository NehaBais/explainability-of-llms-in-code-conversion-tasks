use std::os::rename;

fn main() {
    let _result = rename("input.txt", "output.txt");
    let _result = rename("docs", "mydocs");

    // Assuming you have the permissions to access "/input.txt" and "/docs".
    let _result = rename("/input.txt", "/output.txt");
    let _result = rename("/docs", "/mydocs");
}
