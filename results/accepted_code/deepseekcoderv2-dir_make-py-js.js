function mkdirp(pathString) {
  // Split the string into an array of individual path components
  const paths = pathString.split("/");

  let currentPath = "";

  for (const pathComponent of paths) {
    if (!currentPath) {
      currentPath = pathComponent;
    } else {
      currentPath += "/" + pathComponent;
    }

    try {
      // Try to create the directory with fs.mkdirSync()
      fs.mkdirSync(currentPath);
    } catch (err) {
      if (err.code !== "EEXIST") {
        throw err;
      }
    }
  }
}
