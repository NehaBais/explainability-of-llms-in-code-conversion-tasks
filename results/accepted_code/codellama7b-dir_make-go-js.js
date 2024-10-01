function mkdirp(path) {
  // Create directory and any missing parents
  const dir = path.split("/").slice(-1)[0];
  const parent = path.substring(0, path.length - 1 - dir.length);
  if (!fs.existsSync(parent)) {
    mkdirp(parent);
  }
  fs.mkdirSync(path, { recursive: true });
}

const path = "./path/to/dir";
mkdirp(path);
