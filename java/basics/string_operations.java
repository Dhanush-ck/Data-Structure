import java.io.*;
class Select {
    public static void main(String args[])throws IOException {
        DataInputStream ob = new DataInputStream(System.in);
        String S1=new String();
        String S2=new String();
        char temp;
        int choice;
        System.out.print("Enter a String : ");
        S1=ob.readLine();
        System.out.print("1.Length\n2.ToUpperCase\n3.ToLowerCase\n4.Concatenation\n5.IndexOf\n6.Substring\n");
        System.out.print("Enter your choice : ");
        choice = Integer.parseInt(ob.readLine());
        switch(choice) {
            case 1: 
                System.out.println("Length of the string is "+S1.length());
                break;
            case 2: 
                System.out.print("To Upper Case converted string is "+S1.toUpperCase());
                break;
            case 3: 
                System.out.print("To Lower Case converted string is "+S1.toLowerCase());
                break;
            case 4: 
                System.out.print("Enter the string for concatenation : ");
                S2=ob.readLine();
                System.out.println("Concatenated String is "+S1.concat(S2));
                break;
            case 5:
                System.out.print("Enter a character : ");
                temp = (char)ob.read();
                System.out.println("Index of "+ temp +" = "+ S1.indexOf(temp));
                break;
            case 6:
                System.out.print("Enter the intial positon :");
                int n1 = Integer.parseInt(ob.readLine());
                System.out.print("Enter the final positon :");
                int n2 = Integer.parseInt(ob.readLine());
                System.out.println("SubString : "+S1.substring(n1, n2));
                break;
            default:
                System.out.println("Invalid Input!");
        }
    }
}
