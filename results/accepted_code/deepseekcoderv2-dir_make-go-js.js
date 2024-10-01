function makeDirs(path) {
  // Check if the path already exists
  const stats = fs.statSync(path);

  if (stats.isDirectory()) {
    return true;
  } else if (stats.isFile()) {
    throw new Error("The specified file is not a directory.");
  }

  // Create the parent directory if it doesn't exist
  const dir = path.substring(0, path.lastIndexOf("/"));

  fs.mkdirSync(dir);
  return makeDirs(path);
}
