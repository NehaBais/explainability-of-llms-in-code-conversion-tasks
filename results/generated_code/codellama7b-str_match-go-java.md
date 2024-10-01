
Here's the Java code that matches the given string in all three ways:

```java
package main;

import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

public class Main {
	public static void main(String[] args) {
		String first = "abracadabra";
		String second = "abr";
		System.out.println("1. " + first + " starts with " + second + ": " + first.startsWith(second));
		int i = first.indexOf(second);
		if (i >= 0) {
			System.out.println("2. " + first + " contains " + second + ": true");
		} else {
			System.out.println("2. " + first + " contains " + second + ": false");
		}
		if (first.endsWith(second)) {
			System.out.println("3. " + first + " ends with " + second + ": true");
		} else {
			System.out.println("3. " + first + " ends with " + second + ": false");
		}
	}
}
```