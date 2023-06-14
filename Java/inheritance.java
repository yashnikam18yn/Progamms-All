

public class inheritance {

    static class Demo
    {
        public void print()
        {
            System.out.println("This is an Class MEthod");
        }
    }

    static class child extends Demo {
       public void display()
       {
           System.out.println("This is an Display method");
       }

    }


    public static void main(String[] args) {

        child c1=new child();
        c1.print();
        c1.display();
    }
}
