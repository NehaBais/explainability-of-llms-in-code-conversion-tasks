const fs = require("fs");
const path = require("path");

// Function to create a directory and write to a new file
async function create(root) {
  const fPath = path.join(root, "output.txt");
  const dPath = path.join(root, "docs");

  try {
    fs.promises.mkdir(dPath, { recursive: true });
    fs.promises.writeFile(fPath, "");

    console.log(`Directory created at ${dPath}`);
    console.log(`File created at ${fPath}`);
  } catch (error) {
    console.error(
      "An error occurred while creating the file or directory:",
      error,
    );
    process.exit(1); // Exit with an error status code
  }
}

// Call the function twice: once for "here" and once for "/"
create(".").then(() => {
  create("/");
});
