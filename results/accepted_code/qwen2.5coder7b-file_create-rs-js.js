const fs = require("fs");
const path = require("path");

const FILE_NAME = "output.txt";
const DIR_NAME = "docs";

function create(root) {
  const fPath = path.join(root, FILE_NAME);
  const dPath = path.join(root, DIR_NAME);

  try {
    // Create the directory
    if (!fs.existsSync(dPath)) {
      fs.mkdirSync(dPath);
    }

    // Create the file
    fs.writeFileSync(fPath, "");

    console.log(`Created ${fPath}`);
  } catch (error) {
    errorHandler(error, 1);
  }
}

function errorHandler(error, code) {
  console.error("Error:", error.message);
  process.exit(code);
}

create(".");
create("/");
