import com.users.Customer;
import java.lang.Integer;
import java.lang.reflect.Array;
import java.util.*;
import java.util.concurrent.CopyOnWriteArrayList;
import java.lang.Number;
import java.util.concurrent.*;

public class CustomStack<T>{
    private List<T> list;
    public CustomStack(){
        list = new ArrayList<>();
    }

    public void push(T a){
        list.add(a);
    }
    public boolean clear(){
        list.clear();
        return true;
    }
    public boolean empty(){
        return list.isEmpty();
    }

    public T pop(){
        if(empty()){
            return null;
        }
        int len = list.size();
        T top = list.get(len - 1);
        list.remove(list.lastIndexOf(top));
        return top;
    }
    public int size(){
        return list.size();
    }

    @Override
    public String toString(){
        return list.toString();
    }

}

