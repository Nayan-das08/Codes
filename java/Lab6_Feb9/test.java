public class test 
{
    static Class Type(int x) {return int.class;}
    static Class Type(short x) {return short.class;}
    //static <T> Class func(T x) {return T.class;}
    static Class Type(float x) {return float.class;}
    static Class Type(double x) {return double.class;}

    static float func() {return 5.05f;}
    
    public static void main(String[] args)
    {
        float f;
        f = func();
        System.out.println(f);
    }    
}
