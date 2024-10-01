```
import java.util.Scanner;
public class StringComparison {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the first string:");
        String str1 = sc.next();
        System.out.println("Enter the second string:");
        String str2 = sc.next();
        System.out.println("Checking if the first string starts with the second string...");
        System.out.println(str1.startsWith(str2));
        System.out.println("Checking if the first string contains the second string at any location...");
        System.out.println(str1.contains(str2));
        System.out.println("Checking if the first string ends with the second string...");
        System.out.println(str1.endsWith(str2));
    }
}
```
