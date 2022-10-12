import java.awt.*;
import java.awt.event.*;

public class key implements WindowListener, KeyListener
{
    Frame f = new Frame();
    Label l1 = new Label("This is a java program to demonstrate Event Handling using KeyListener");
    TextArea ta = new TextArea();
    key()
    {
        f.setSize(500, 500);
        f.setTitle("MouseClicked");
        f.setVisible(true);
        f.setLayout(null);
        
        l1.setBounds(10,30,400,20);
        f.add(l1);

        ta.setBounds(10,60,400,400);
        f.add(ta);

        f.addKeyListener(this);
        f.addWindowListener(this);

    }

    public void keyPressed(KeyEvent ke)
    {
        System.out.println("Key Pressed");
    }
    public void keyReleased(KeyEvent ke)
    {
        System.out.println("Key Released");
    }
    public void keyTyped(KeyEvent ke)
    {
        System.out.println("Key Typed");
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
        key k = new key();
    }    
}
