import java.awt.*;
import java.awt.event.*;

public class box implements ActionListener
{
    Frame f = new Frame();
    Label l = new Label("Label l");
    TextField tf = new TextField("TextField tf");
    Button b = new Button("Button b");
    
    box()
    {
        f.setSize(300, 300);
        f.setTitle("Frame f");
        f.setVisible(true);
        f.setLayout(null);
        
        l.setBounds(10,30,80,20);
        f.add(l);

        tf.setBounds(70,50,80,20);
        f.add(tf);

        b.setBounds(30,100,80,30);
        b.addActionListener(this);
        f.add(b);
    }

    public void actionPerformed(ActionEvent e)
    {
        tf.setText("Button Clicked");    
    }
    
    public static void main(String[] args)
    {
        box a = new box();
    }
}