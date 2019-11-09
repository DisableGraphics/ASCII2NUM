import java.io.IOException;

/**
 *
 * @author disablegraphics
 */
public class ASCII2NUM {

    /**
     * @param args the command line arguments
     * @throws java.io.IOException
     */
    public static void main(String[] args) throws IOException {
        // TODO code application logic here
        System.out.println("Please insert a character: ");
        char character;
        character = (char) System.in.read();
        int charvalue;
        charvalue = (int)character;
        System.out.println("The ASCII code of " + character + " equals to: " + charvalue);
    }
    
}
