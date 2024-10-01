// Rename:
fs.rename("input.txt", "output.txt", (err) => {
  if (err) {
    console.log(`Error renaming file: ${err}`);
  } else {
    console.log("File renamed successfully.");
  }
});

fs.rename("docs", "mydocs", (err) => {
  if (err) {
    console.log(`Error renaming folder: ${err}`);
  } else {
    console.log("Folder renamed successfully.");
  }
});

// Rename in the filesystem root
fs.rename("/input.txt", "/output.txt", (err) => {
  if (err) {
    console.log(`Error renaming file: ${err}`);
  } else {
    console.log("File renamed successfully.");
  }
});

fs.rename("/docs", "/mydocs", (err) => {
  if (err) {
    console.log(`Error renaming folder: ${err}`);
  } else {
    console.log("Folder renamed successfully.");
  }
});
