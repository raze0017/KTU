abstract class sound{
    abstract void animalsound();
}
class bird extends sound{
    public void animalsound(){
        System.out.println("chirps");
    }
}
class fish extends sound{
    public void animalsound(){
        System.out.println("kachow");
    }
}

public class methodoverriding {
    public static void main(String[] args) {
        bird b=new bird();
        fish f=new fish();
        b.animalsound();
        f.animalsound();
    }
}
