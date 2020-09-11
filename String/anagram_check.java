import java.lang.*;
import java.util.*;
class anagram_check
{
    public static void main(String arg[])
    {
        String s1="complete";
        String s2="competee";

        if(s1.length()!=s2.length())
            System.out.println("No");
        else{
        //convert string to char array
        char a[] = s1.toCharArray();
        char b[] = s2.toCharArray();

        Arrays.sort(a);
        Arrays.sort(b);

        s1 = new String(a);
        s2 = new String(b);

        
        if(s1.equals(s2))
            System.out.println("Yes");
        else
            System.out.println("No");
        }
    }
}