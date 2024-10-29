The equivalent Java code would be as follows:

```java
public class Main {
    public static void main(String[] args) {
        // text assigned to a String variable
        String s = "hello";
        
        // output String variable
        System.out.println(s);
        
        // concatenate variable and literal, assign result to another String variable
        String s2 = s + " literal";
        
        // output second string variable
        System.out.println(s2);
    }
}
```
This code does the same thing as your Golang code: it creates two strings and prints them out. The line `String s2 = s + " literal";` concatenates the first string (which contains "hello") with a second string (" literal"), assigning the result to a new variable, `s2`. Finally, this new string is printed out with `System.out.println(s2);`.

