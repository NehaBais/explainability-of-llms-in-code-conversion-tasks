String str = "abcdefgh";
int n = 2;
int m = 3;
// * starting from n characters in and of m length;
System.out.println(str.substring(n, n + m)); // Output: cde
// * starting from n characters in, up to the end of the string;
System.out.println(str.substring(n)); // Output: cdefgh
// * whole string minus last character;
System.out.println(str.substring(0, str.length() - 1)); // Output: abcdefg
// * starting from a known character within the string and of m length;
System.out.println(str.substring(str.indexOf("b"), m)); // Output: bcd
// * starting from a known substring within the string and of m length. 
System.out.println(str.substring(str.indexOf("bc"), m)); // Output: bcd