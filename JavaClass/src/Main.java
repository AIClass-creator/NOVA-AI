public class Main {
    public static void main(String[] args) {
        // Bitwise operators
        int Example = 9;
        int And = 2 & 3;
        int Or = 2 | 3;
        int Xor = 2 ^ 3;
        int Not = ~4;
        int LeftShift = 2 << 1;
        int RightShift = 3 >> 1;

        // Postfix and prefix increment and decrement operators
        System.out.println("This ex = " + Example + " And after postfix increment it's now ex = " + Example++);
        System.out.println("This ex = " + Example + " And after prefix increment it's now ex = " + ++Example);

        // Short circuits operators
        Example += 90;
        Example -= 80;
        Example *= 8;
        Example /= 60;
        Example |= 90;
        Example &= 89;
        Example ^= 9;
        Example = ~0;
        Example <<= 2;
        Example >>= 3;
    }
}