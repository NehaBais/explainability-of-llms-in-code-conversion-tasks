function startsWith(str1, str2) {
  return str1.startsWith(str2);
}

function endsWith(str1, str2) {
  return str1.endsWith(str2);
}

function includes(str1, str2) {
  return str1.includes(str2);
}

function find(str1, str2) {
  let index = str1.indexOf(str2);

  if (index === -1) {
    console.log("The string is not found.");
  } else {
    console.log(`The string "${str2}" was found at index ${index}`);

    // Optional: to find all occurrences
    let startIndex = index;
    while ((startIndex = str1.indexOf(str2, startIndex + 1)) !== -1) {
      console.log(
        `Another occurrence of "${str2}" was found at index ${startIndex}`,
      );
    }
  }

  return index;
}

// Testing the functions

console.log(startsWith("abcd", "ab")); // returns true
console.log(endsWith("abcd", "zn")); // returns false
console.log(includes("abab", "bb")); // returns false
console.log(find("abab", "ab")); // returns 0, and prints "Another occurrence of "ab" was found at index 2"
