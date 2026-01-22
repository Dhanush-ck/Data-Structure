import java.io.*;
interface Shape {
    double pi = 3.14;
    public void area(double r);
}
class Circle implements Shape {
    public void area(double r) {
        System.out.println("Area = "+(pi*r*r));
    }
}

public class InterfaceSample {
    public static void main(String args[]) {
        Circle C = new Circle();
        C.area(5);
    }
}