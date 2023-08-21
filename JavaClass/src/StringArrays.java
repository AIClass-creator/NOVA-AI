/*****************************
* Arrays of string
******************************/
public class StringArrays {
    public static void main(String[] args)
    {
        String[] names = new String[]{"Christa", "Hertier", "Olav"};

        for (String name : names)
            System.out.println(name);

        for(int i = 0; i < names.length; i++)
            System.out.println(names[i]);
    }
}
