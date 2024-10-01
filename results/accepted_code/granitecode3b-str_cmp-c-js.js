// Define comparison functions for different types of comparisons
function string_equals(str1, str2) {
  return str1 === str2;
}
function string_notequals(str1, str2) {
  return str1 !== str2;
}
function string_greaterthan(str1, str2) {
  return str1 > str2;
}
function string_lessthan(str1, str2) {
  return str1 < str2;
}
function string_greaterequals(str1, str2) {
  return str1 >= str2;
}
function string_lessequals(str1, str2) {
  return str1 <= str2;
}
// Define comparison functions for case insensitive comparisons
function string_caseequals(str1, str2) {
  return str1.toLowerCase() === str2.toLowerCase();
}
function string_casenotequals(str1, str2) {
  return str1.toLowerCase() !== str2.toLowerCase();
}
function string_casegreaterthan(str1, str2) {
  return str1.toLowerCase() > str2.toLowerCase();
}
function string_caselessthan(str1, str2) {
  return str1.toLowerCase() < str2.toLowerCase();
}
function string_casegreaterequals(str1, str2) {
  return str1.toLowerCase() >= str2.toLowerCase();
}
function string_caselessequals(str1, str2) {
  return str1.toLowerCase() <= str2.toLowerCase();
}
// Define a function to compare two strings and print out the results
function compare_strings(str1, str2) {
  console.log(
    `${str1}: ${string_equals(str1, str2)}, ${string_notequals(str1, str2)}, ${string_greaterthan(str1, str2)}, ${string_lessthan(str1, str2)}, ${string_greaterequals(str1, str2)}, ${string_lessequals(str1, str2)}`,
  );
  console.log(
    `${str2}: ${string_caseequals(str1, str2)}, ${string_casenotequals(str1, str2)}, ${string_casegreaterthan(str1, str2)}, ${string_caselessthan(str1, str2)}, ${string_casegreaterequals(str1, str2)}, ${string_caselessequals(str1, str2)}`,
  );
}
// Define a function to read input from the user and call the compare_strings function
function main() {
  let str1 = prompt("Enter first string: ");
  let str2 = prompt("Enter second string: ");
  compare_strings(str1, str2);
}
// Call the main function to start the program
main();
