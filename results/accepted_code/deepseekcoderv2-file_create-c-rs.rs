use std::fs;
use std::os::unix::fs::PermissionsExt;

fn main() {
    // Create "output.txt" file with permissions 0640 (rw-r-----).
    fs::write("output.txt", b"").expect("Failed to create file");
    let mut perms = fs::metadata("output.txt").unwrap().permissions();
    perms.set_mode(0o640);
    fs::set_permissions("output.txt", perms).expect("Failed to set permissions");

    // Create "docs" directory with permissions 0750 (rwxr-x---).
    fs::create_dir("docs").expect("Failed to create directory");
    let mut dir = fs::metadata("docs").unwrap();
    dir.permissions().set_mode(0o750);
    fs::set_permissions("docs", dir).expect("Failed to set permissions");
}
