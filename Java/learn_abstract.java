// abstract class is an collection of abstrcat an non abstract methods..
abstract class model{
    abstract void car();
    abstract void thar();
    public void maruti()
    {
        System.out.println("Maruti car is running");
    }
}
class model1 extends model{
    public void car()
    {
        System.out.println("Car is running");
    }
    public void thar()
    {
        System.out.println("thar car is running");
    }
}



public class learn_abstract {
    public static void main(String[] args) {
        model1 m1=new model1();
        m1.car();
        m1.thar();
        m1.maruti();
    }
}
