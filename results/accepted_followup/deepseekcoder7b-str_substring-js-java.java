String str = "abcdefgh";
int n = 3;

// System<｜begin▁of▁sentence｜>.out.println(str.substring(n));  // remove this line as it's not valid without enabling preview feature for implicit classes in Java 14+ or above.

System.out.println(str.charAt(n-1));  // to get the character at nth position. The index is 0 based, so -1 will give us (n-1)th element.