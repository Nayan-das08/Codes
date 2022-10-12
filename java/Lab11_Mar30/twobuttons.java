import java.awt.*;
import java.awt.event.*;

public class twobuttons implements ActionListener
{
    Button b1 = new Button("BUtton 1");
    Button b2 = new Button("BUtton 2");
    Label l2 = new Label();
    Frame f = new Frame();

    twobuttons()
    {
        f.setSize(500, 500);
        f.setTitle("action.java");
        f.setVisible(true);
        f.setLayout(null);
        
        l2.setBounds(10,60,80,20);
        f.add(l2);

        b1.setBounds(30,100,80,30);
        b1.addActionListener(this);
        f.add(b1);

        b2.setBounds(30,150,80,30);
        b2.addActionListener(this);
        f.add(b2);
    }
    

    public void actionPerformed(ActionEvent e)
    {
        if (e.getSource()==b1)
        l2.setText("Button1 Clicked"); 
        if (e.getSource()==b2)
        l2.setText("Button2 Clicked");    
    }

    public static void main(String[] args)
    {
        twobuttons t = new twobuttons();
    }
}
