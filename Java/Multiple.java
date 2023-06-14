
class m1{
    public void dis()
    {
        System.out.println("M1 classsssss");
    }

}
class m2 extends m1{
    public void dis1()
    {
        System.out.println("M2 class");
    }
}

class m3 extends m2{
    public void dis2()
    {
        System.out.println("M3 classs");
    }
}
public class Multiple {
    public static void main(String[] args) {
        m3 m=new m3();
        m.dis();
        m.dis1();
        m.dis2();
    }
}
