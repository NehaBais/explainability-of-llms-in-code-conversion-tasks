use nix::unistd::rename;
use nix::NixPath;
use std::path::Path;

fn main() {
    rename(Path::new("input.txt"), Path::new("output.txt")).expect("Could not rename file");
    rename(Path::new("docs"), Path::new("mydocs")).expect("Could not rename directory");

    let root = Path::new("/");
    rename(
        root.join("input.txt").as_nix(),
        root.join("output.txt").as_nix(),
    )
    .expect("Could not rename file in the root");
    rename(root.join("docs").as_nix(), root.join("mydocs").as_nix())
        .expect("Could not rename directory in the root");
}
