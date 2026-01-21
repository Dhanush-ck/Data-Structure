import java.io.*;
class T1 extends Thread {
    public void run() {
        for(int i=0; i<3; i++)
        System.out.println("I'm from T1");
    }
}
class T2 extends Thread {
    public void run() {
        for(int i=0; i<3; i++)
        System.out.println("I'm from T2");
    }
}

public class ThreadSample {
    public static void main(String args[]){
        T1 O1 = new T1();
        T2 O2 = new T2();
        O1.start();
        O2.start();
        for(int i=0; i<3; i++)
            System.out.println("I'm from Main Thread");
    }
}
 