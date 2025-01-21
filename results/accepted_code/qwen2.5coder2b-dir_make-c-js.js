function mkdirp(path) {
  const pathArray = path.split("/");

  function mkdirRecursive(currentPath, currentLevel, maxLevel) {
    if (currentLevel >= maxLevel) return;

    if (!fs.existsSync(currentPath)) {
      fs.mkdirSync(currentPath);
    } else if (fs.statSync(currentPath).isDirectory()) {
      mkdirRecursive(pathArray[currentLevel], currentLevel + 1, maxLevel);
    }
  }

  mkdirRecursive(pathArray[0], 1, pathArray.length);
}
