String s = "abcdefgh";
int n = 2, m = 3;
char charToFind = 'd';
String substringToFind = "cd";

// starting from n characters in and m=3 in length;
System.out.println(s.substring(n-1, n+m-1))));

// starting from n characters in, up to the end of the string;
System.out.println(s.substring(n-1)));

// whole string minus last character;
System.out.println(s.substring(0, s.length() - 1))));

// starting from a known character char="d" within the string and of m length;
int indexOfChar = s.indexOf(charToFind);
System.out.println(s.substring(indexOfChar, m))));

// starting from a known substring chars="cd" within the string and of m length. 
int indexOfSubstring = s.indexOf(chars);
System.out.println(s.substring(indexOfSubstring, m))));