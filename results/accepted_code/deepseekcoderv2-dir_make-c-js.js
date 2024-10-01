function mkdirp(path) {
  let dirname, basename;
  // If path is already absolute, use it directly (skip strtok() processing).
  if (path.charAt(0) === "/") {
    dirname = path;
  } else {
    // Normalize the path
    const tokens = path.split("/");
    for (let i = 1; i < tokens.length; ++i) {
      if (!tokens[i]) {
        tokens[i] = ".";
      }
    }
    dirname = tokens.join("/");
  }
  // Get the last token
  basename = dirname.replace(/^.*[\/\\]/, "");
  const newpath = dirname.substr(0, dirname.length - basename.length);
  if (!newpath) {
    return false;
  }
  try {
    fs.mkdirSync(newpath);
    return true;
  } catch (err) {
    switch (err.code) {
      case "ENOENT":
        // ENOENT means that parent didn't exist, don't suppress the error for this case
        if (mkdirp(newpath)) fs.mkdirSync(dirname); // retry
        break;
      default:
        throw err; // something else weird happened
    }
  }
}
