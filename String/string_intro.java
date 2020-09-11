class string_intro
{
    public static void main(String a[])
    {
        //String class in java are Immutable
        //any operations performed on it return another object
        String str = "welcome";
        System.out.println(str.substring(3));
        System.out.println(str);                //we come to know that original string is not changed.
        System.out.println();
        //StringBuffer str1="helloworld";
        //System.out.println(str1.substring(3));
        //System.out.println(str1);
       
        String s1 = "happy";
        String s2 = "happy";
        //here other object is not created, instead ref s1 and s2 point to same 
        //memory location
        if(s1.equals(s2))
        System.out.println(
            "True"
        );
        else
        System.out.println("False");
    }
}