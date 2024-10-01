const { rename } = require("fs").promises;

// Rename file from current working directory
rename("input.txt", "output.txt");

// Rename directory from current working directory
rename("docs", "mydocs");

// Rename file from root of filesystem
const { root } = require("path");

rename(root + "/input.txt", root + "/output.txt");

// Rename directory from root of filesystem
rename(root + "/docs", root + "/mydocs");
