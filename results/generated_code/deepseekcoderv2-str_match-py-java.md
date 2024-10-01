# Solution
### Java Code:
```java
import java.io.*;
public class Main {
	public static void main(String[] args) throws IOException {
		String str1 = "abcd";
		String str2 = "bc";
		boolean startsWith = false;
		if (str1.startsWith(str2)) {
			System.out.println("First string starts with second string");
			startWiith = true;
		} else if (!startWiith) {
			System.out.println("First string does not start with second string");
		}
		if (str1.contains(str2)) {
			System.out.println("First string contains the second string at any location");
		} 
		boolean endsWith = false;
		String str3="ab";
		if (str1.endsWith(str2)){
		    System.out.println("The first String Ends with Second String:True");
		    endsWith=true;
		} else if (!endsWith) {
			System.out.println("First string does not end with second string");
		}
		//Optional requirements
		if (str1.contains(str2)) {
            int loc = str1.indexOf(str2);
            System.out.println("The first string contains the second string at location: " + loc);
        } 
	}
}
```

