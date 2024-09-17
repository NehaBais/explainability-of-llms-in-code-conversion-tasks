 Here is the equivalent Java code for your JavaScript function:

```java
import java.util.*;
import java.lang.Math;

public class Main {
    public static void main(String[] args) {
        System.out.println(Arrays.toString(factors(45)));  // [1,3,5,9,15,45]
        System.out.println(Arrays.toString(factors(53)));  // [1,53]
        System.out.println(Arrays.toString(factors(64)));  // [1,2,4,8,16,32,64]
    }
    
    public static int[] factors(int num) {
        ArrayList<Integer> n_factors = new ArrayList<>();
        for (int i=1; i<=Math.floor(Math.sqrt(num));i++){
            if(num%i==0){
                n_factors.add(i);
                if(num/i!=i)
                    n_factors.add((int)(num/i));
            }
        }
        
        Collections.sort(n_factors);  // numeric sort
        
        int[] array = new int[n_factors.size()];
        for (int i=0; i<n_factors.size(); i++) {
            array[i] = n_factors.get(i);
        }
        return array;
    }
}
```
