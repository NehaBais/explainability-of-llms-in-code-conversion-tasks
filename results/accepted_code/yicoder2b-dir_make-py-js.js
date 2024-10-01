function mkdirp(path) {
  fs.mkdirSync(path, { recursive: true });
}
