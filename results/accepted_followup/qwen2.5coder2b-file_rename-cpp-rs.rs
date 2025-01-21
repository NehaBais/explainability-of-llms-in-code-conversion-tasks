use std::fs;

fn main() {
    fs::rename(
        "qwen2.5coder2b_file_rename_cpp_rs.input.txt",
        "qwen2.5coder2b_file_rename_cpp_rs.output.txt",
    )
    .unwrap();
    fs::rename(
        "qwen2.5coder2b_file_rename_cpp_rs.docs",
        "qwen2.5coder2b_file_rename_cpp_rs.mydocs",
    )
    .unwrap();
    fs::rename(
        "/qwen2.5coder2b_file_rename_cpp_rs/input.txt",
        "/qwen2.5coder2b_file_rename_cpp_rs/output.txt",
    )
    .unwrap();
    fs::rename(
        "/qwen2.5coder2b_file_rename_cpp_rs/docs",
        "/qwen2.5coder2b_file_rename_cpp_rs/mydocs",
    )
    .unwrap();
}
