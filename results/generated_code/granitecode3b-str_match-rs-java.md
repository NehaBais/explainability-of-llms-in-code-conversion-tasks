Sure, here's the Java code that performs the same tasks as the given Rust code:
```java
public class StringMatchingExample {
 
 public static void printMatch(Integer possibleMatch) {
 	switch (possibleMatch) {
 		case null:
 			System.out.println("Did not find any matches");
 			break;
 		default:
 			System.out.println("Found match at pos " + possibleMatch);
 	}
 }
 
 public static void main(String[] args) {
 	String s1 = "abcd";
 	String s2 = "abab";
 	String s3 = "ab";
 	
 	// Determining if the first string starts with second string
 	System.out.println("Does s1 start with s3? " + s1.startsWith(s3));
 	
 	// Determining if the first string contains the second string at any location
 	System.out.println("Does s1 contain s3? " + s1.contains(s3));
 	
 	// Print the location of the match 
 	Integer matchPos = s1.indexOf(s3);
 	
 	printMatch(matchPos); // Found match at pos 0
 	
 	matchPos = s1.indexOf(s2);
 	
 	printMatch(matchPos); // Did not find any matches
 	
 	// Determining if the first string ends with the second string
 	System.out.println("Does s2 end with s3? " + s2.endsWith(s3));
 }
}
```

