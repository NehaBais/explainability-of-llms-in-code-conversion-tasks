let string1 = "abcd";
let string2 = "ab";

// Part 1: Check if first string starts with second string
console.log(string1.startsWith(string2)); // Returns true

string2 = "zn";
// Part 3: Check if first string ends with second string
console.log(string1.endsWith(string2)); // Returns false

string1 = "abab";
string2 = "bb";

// Part 2: Check if first string contains the second string at any location
let loc = string1.indexOf(string2);
if (loc !== -1) {
  console.log(loc);
} else {
  console.log("The string is not found.");
}

string2 = "ab";
loc = string1.indexOf(string2);

// Handle multiple occurrences of a string for part 2.
while (loc !== -1) {
  console.log(`Location of "${string2}" is ${loc}.`);
  loc = string1.indexOf(string2, loc + 1);
}
