
interface bicycle{
    void bre();
    void spp();

}
class avon implements bicycle{
    public void bre()
    {
        System.out.println("Applying break");
    }

    @Override
    public void spp() {
        System.out.println("speed not up");
    }
}

class jupiter implements bicycle{

    public void spp() {
        System.out.println("Speed up....");
    }

    @Override
    public void bre() {
        System.out.println("Break not apply");
    }
}
public class learn_interface {
    public static void main(String[] args) {
        avon a=new avon();
        a.bre();
        a.spp();
        jupiter j=new jupiter();
        j.bre();
        j.spp();
    }
}
