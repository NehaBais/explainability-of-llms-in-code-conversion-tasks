--enable-preview
String s1 = "abcd";
String s2 = "abab";
String s3 = "ab";
// Beginning
boolean startsWith = s1.startsWith(s3);
System.out.println("Does s1 start with s3? " + startsWith);
// End
boolean endsWith = s1.endsWith(s3);
System.out.println("Does s1 end with s3? " + endsWith);
// Anywhere
int index = s1.indexOf(s2);
if (index != -1) {
 System.out.println("s2 is found at index " + index);
} else {
 System.out.println("s2 is not found");
}
// Anywhere with multiple occurrences
index = s1.indexOf(s3);
while (index != -1) {
 System.out.println("s3 is found at index " + index);
 index = s1.indexOf(s3, index + 1);
}