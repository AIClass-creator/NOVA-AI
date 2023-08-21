/*************************************
* Stirngs in java
*************************************/
public class Strings {
    public static void main(String[] args)
    {
       String str1  = "Teacher";
       String str2 = "Tity";
       String str3 = str1 + str2;

       for (int i = 0; i < str1.length(); i++)
           System.out.println(str1.charAt(i));

       System.out.println(str3);
       System.out.println(str1.equals(str2));
       System.out.println(str1.length());
       System.out.println(str2.compareTo(str1));
       System.out.println(str1.lastIndexOf('e'));
    }
}
