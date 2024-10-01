fn main() {
    std::fs::rename(
        "src/ch12-file_and_filesystem_management/ex7-renaming/input.txt",
        "src/ch12-file_and_filesystem_management/ex7-renaming/output.txt",
    )
    .expect("Failed to rename file");
    std::fs::rename(
        "src/ch12-file_and_filesystem_management/ex7-renaming/docs",
        "src/ch12-file_and_filesystem_management/ex7-renaming/mydocs",
    )
    .expect("Failed to rename directory");
    std::fs::rename("/input.txt", "/output.txt").expect("Failed to rename file in root dir");
    std::fs::rename("/docs", "/mydocs").expect("Failed to rename directory in root dir");
}
