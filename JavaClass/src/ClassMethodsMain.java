public class ClassMethodsMain {
   public static void main(String[] args) {
       List list = new List(1, 2, 3, 4, 5, 6, 7, 8);
       list.Add(90);
       System.out.println(list.Size());
       System.out.println(list.Capacity());
   }
}
