The equivalent code in Java would look like this:

```java
import java.io.BufferedReader;
import java.io.IOException;
import java.util.List;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(System.in);
        
        // Get two integers from the user
        List<String> input = new ArrayList<>();
        for(int i=0; i<2; i++) {
            System.out.print("Enter number " + (i+1) + ": ");
            String strNum = reader.readLine();
            input.add(strNum);
        }
        
        // Convert strings to integers and store in an array
        int[] nums = new int[input.size()];
        for(int i=0; i<input.size(); i++) {
            nums[i] = Integer.parseInt(input.get(i));
        }
        
        // Get the two numbers from the array
        int a = nums[0];
        int b = nums[1];

        if(a < b) 
            System.out.println("a is less than b");
        else if(a == b)
            System.out.println("a equals b");
        else 
            System.out.println("a is greater than b");        
    }
}
```

This code performs the same functionality as the Rust code you provided. It prompts the user to enter two integers, converts them from strings to integers, and then compares these numbers using if-else statements. The result is printed to the console.
