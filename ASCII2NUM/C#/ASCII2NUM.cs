using System;

namespace ASCII2NUM
{
    class MainClass
    {
        public static void Main()
        {
            Console.WriteLine("Enter a character: ");
            char character;
            character = (char)Console.Read();

            Console.WriteLine(); //Just for printing a new line

            int charvalue = (int)character;

            Console.WriteLine("The character " + character + "'s ASCII value is " + (char)charvalue);
        }
    }
}
