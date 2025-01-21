switch (true) {
  case a2 < b2:
    console.log(
      "The first string is lexically before the second when ignoring case",
    );
    break;
  case a2 > b2:
    console.log(
      "The first string is not lexically before/after the second when ignoring case and it's greater than or equal to the second",
    );
    break;
  default:
    console.log("Both strings are equal when ignoring case");
}
