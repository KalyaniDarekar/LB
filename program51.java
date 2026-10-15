class Largest {
    public static void main(String[] args) {
        int a = 25;
        int b = 40;

        if (a > b) {
            System.out.println("Largest = " + a);
        } else {
            System.out.println("Largest = " + b);
        }
    }
}class Swap {
    public static void main(String[] args) {
        int a = 10;
        int b = 20;
        int temp;

        temp = a;
        a = b;
        b = temp;

        System.out.println("a = " + a);
        System.out.println("b = " + b);
    }
}