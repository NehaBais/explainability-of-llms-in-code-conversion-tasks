function main() {
  var a = "abc";
  var b = "Bac";

  if (a === b) { console.log("The strings are equal"); } else if (a !== b) { console.log("The strings are not equal"); }
  if (a > b) { console.log("The first string is lexically after the second"); } else if (a < b){console.log("The first string is lexically before the second")};
  if (a >= b) { console.log("The first string is not lexically before the second");}else{console.log("The first string is less than or equal to the second")} ; 
  if (a <= b) { console.log("The first string is not lexically after the second"); }else{console.log("The first string is greater than or equal to the second")}; 

  // case insensitive comparison
  var a2 = a.toUpperCase();
  var b2 = b.toUpperCase();

  if (a2 === b2) { console.log("Both strings are equal when ignoring case"); } else if (a2 < b2){console.log("The first string is lexically before the second when ignoring case")}; 
  else{console.log("The first string is not lexically before/after the second when ignoring case and it's greater than or equal to the second");};
}