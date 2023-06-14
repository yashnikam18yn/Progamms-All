import java.util.*;

public class arr {
    public static void main(String[] args) {
       int[][] a={{1,2,3},{2,3,4},{4,5,6}};


        System.out.println("Your array is:");
    try {
        for (int i = 0; i <= a.length; i++) {
            for (int j = 0; j <= a.length; j++) {
                System.out.println(a[i][j]);
            }
        }
    }catch (Exception e)
    {
        System.out.println(e);
    }
    }
}
