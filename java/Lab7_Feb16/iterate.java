//The ques statement in my file was to implement funcs of iterable interface not *all the funcs lol, so here's what ive done*/

import java.util.*;
class example<T> implements Iterable<T> 
{
    private List<T> strList;
    public example(T [] temp) 
    {
        strList = Arrays.asList(temp);       
    } 
    //Overriding iterator()  
    @Override
    public Iterator<T> iterator() 
    {
        return strList.iterator();
    }
}
public class iterate 
{
    public static void main(String [] args) 
    {
        String [] str = {"String 1","String 2","String 3","String 4","String 5","String 6"};  
        example<String> obj = new example<>(str);
        for (String i : obj) 
        {
            System.out.print(i+"\n");
        }
    }
}