import java.util.*;

public class collection_framework {
    public static void main(String[] args) {
       ArrayList<String> arr1=new ArrayList<>();
       arr1.add("Yash");
       arr1.add("DJ");
       arr1.add("Om");
        System.out.println(arr1);

       // Iterator itr=arr1.iterator();

        for (String str:arr1) {
            System.out.println(str);
        }


    }
}
