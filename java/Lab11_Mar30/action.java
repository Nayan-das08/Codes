import java.awt.*;
import java.awt.event.*;

public class action implements ActionListener
{
    Frame f = new Frame();
    Label l1 = new Label("This is a java program to demonstrate Event Handling using ActionListener");
    Label l2 = new Label();
    Button b = new Button("Click here");
    
    action()
    {
        f.setSize(500, 500);
        f.setTitle("action.java");
        f.setVisible(true);
        f.setLayout(null);
        
        l1.setBounds(10,30,400,20);
        f.add(l1);

        l2.setBounds(10,60,80,20);
        f.add(l2);

        b.setBounds(30,100,80,30);
        b.addActionListener(this);
        f.add(b);
    }

    public void actionPerformed(ActionEvent e)
    {
        l2.setText("Button Clicked");    
    }
    
    public static void main(String[] args)
    {
        action a = new action();
    }
}