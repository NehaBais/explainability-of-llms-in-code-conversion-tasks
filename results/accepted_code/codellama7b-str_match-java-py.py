# Java code:
String str1 = "abcd";
String str2 = "ab";
System.out.println(str1.startsWith(str2)); // returns true
System.out.println(str1.endsWith(str2));   // returns false

String str3 = "abab";
String str4 = "bb";
System.out.println(str3.contains(str4));  // returns false

String str5 = "abab";
String str6 = "ab";
int loc = str3.indexOf(str6);   // returns 0
loc = str3.indexOf(str6, loc+1); // returns 2