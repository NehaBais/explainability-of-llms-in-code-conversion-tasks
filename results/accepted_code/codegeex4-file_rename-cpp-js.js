const fs = require("fs");

// In current working directory
fs.renameSync("input.txt", "output.txt");
fs.renameSync("docs", "mydocs");

// In filesystem root (requires admin rights)
try {
  fs.accessSync("/", fs.constants.W_OK);

  // Use path.resolve to get absolute paths for root
  const inputRoot = require("path").resolve("/input.txt");
  const outputRoot = require("path").resolve("/output.txt");
  const docsRoot = require("path").resolve("/docs");
  const mydocsRoot = require("path").resolve("/mydocs");

  fs.renameSync(inputRoot, outputRoot);
  fs.renameSync(docsRoot, mydocsRoot);
} catch (err) {
  console.error(
    "You do not have the required permissions to access the filesystem root.",
  );
}
