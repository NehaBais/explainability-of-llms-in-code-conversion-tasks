function mkdirp(path) {
  const parent = path.split("/").slice(-2).join("/");
  if (!fs.existsSync(parent)) {
    fs.mkdirSync(parent);
  }
  if (!fs.existsSync(path)) {
    fs.mkdirSync(path);
  }
}
