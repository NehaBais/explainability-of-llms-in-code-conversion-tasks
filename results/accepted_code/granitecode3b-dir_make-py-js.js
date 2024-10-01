function mkdirp(path) {
  const parts = path.split("/");
  let currentDir = "";
  for (const part of parts) {
    currentDir += part + "/";
    try {
      fs.accessSync(currentDir, fs.constants.F_OK);
    } catch (error) {
      fs.mkdirSync(currentDir);
    }
  }
}
