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

        //StringBuffer & StringBuffer are immutable
        StringBuffer str1=new StringBuffer("helloworld");
        System.out.println(str1.substring(3));
        System.out.println(str1);
       
        String s1 = "happy";
        String s2 = "happy";
        //here other object is not created, instead ref s1 and s2 point to same 
        //memory location
        if(s1==s2)
        System.out.println(
            "True"                  //hence verified
        );
        else
        System.out.println("False");

        //if a literal is created using "new" keyword then although is may be same
        //that refrence points to differnt memeory location
        String s3 = new String("happy");
        
        String s4 = "py";

        //contains() method to check if given small string is present or not
        if(s3.contains(s4))
        System.out.println(
            "True"                  //hence verified
        );
        else
        System.out.println("False");
    }
}