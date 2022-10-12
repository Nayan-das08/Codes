import java.awt.*;
import java.awt.event.*;

public class menu implements ActionListener, WindowListener
{
    Frame f = new Frame();
    Label l1 = new Label("This is a java program to demonstrate Menu");
    Label l2 = new Label();
    Button b = new Button("Update choice");
    Choice c = new Choice();
    String str[] = {"one", "two", "three", "four"};

    menu()
    {
        f.setSize(500, 500);
        f.setTitle("menu.java");
        f.setVisible(true);
        f.setLayout(null);
        
        l1.setBounds(10,30,400,20);
        f.add(l1);

        l2.setBounds(10,60,200,20);
        f.add(l2);

        c.add(str[0]);
        c.add(str[1]);
        c.add(str[2]);
        c.add(str[3]);
        c.setBounds(10,100,100,20);
        f.add(c);

        b.setBounds(50,200,100,20);
        b.addActionListener(this);
        f.add(b);

        f.addWindowListener(this);
    }

    public void actionPerformed(ActionEvent e)
    {
        l2.setText("Choice selected : " + str[c.getSelectedIndex()]);
    }
    public void windowActivated(WindowEvent we){}
    public void windowClosed(WindowEvent we){}
    public void windowDeactivated(WindowEvent we){}
    public void windowDeiconified(WindowEvent we){}
    public void windowIconified(WindowEvent we){}
    public void windowOpened(WindowEvent we){}
    public void windowClosing(WindowEvent we)
    {
        f.dispose();
    }

    public static void main(String[] args)
    {
        menu m = new menu();
    }    
}
