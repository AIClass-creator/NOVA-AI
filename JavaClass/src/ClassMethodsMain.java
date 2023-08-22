public class ClassMethodsMain {
   public static void main(String[] args) {
       List list = new List();
       for (int i = 0; i < 10; i++)
           list.Add(i);
       System.out.println(list.At(list.Size()));
       list.Reserve(8);
   }
}
