function renameFiles() {
  // Rename file "input.txt" to "output.txt" in current working directory
  fs.rename("input.txt", "output.txt", (err) => {
    if (err) {
      console.error(err);
    } else {
      console.log("File renamed successfully!");
    }
  });

  // Rename directory "docs" to "mydocs" in current working directory
  fs.rename("docs", "mydocs", (err) => {
    if (err) {
      console.error(err);
    } else {
      console.log("Directory renamed successfully!");
    }
  });

  // Rename file "input.txt" to "output.txt" in filesystem root
  fs.rename("/input.txt", "/output.txt", (err) => {
    if (err) {
      console.error(err);
    } else {
      console.log("File renamed successfully!");
    }
  });

  // Rename directory "docs" to "mydocs" in filesystem root
  fs.rename("/docs", "/mydocs", (err) => {
    if (err) {
      console.error(err);
    } else {
      console.log("Directory renamed successfully!");
    }
  });
}
