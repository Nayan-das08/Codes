import java.awt.*;
import java.awt.event.*;

public class key2 implements WindowListener, KeyListener
{
    Frame f = new Frame();
    Label l1 = new Label("This is a java program to demonstrate Event Handling using KeyListener");
    Label l2 = new Label();
    TextArea ta = new TextArea();
    key2()
    {
        f.setSize(500, 500);
        f.setTitle("MouseClicked");
        f.setVisible(true);
        f.setLayout(null);
        
        l1.setBounds(10,30,400,20);
        f.add(l1);

        l2.setBounds(10,60,300,20);
        f.add(l2);
        
        ta.setBounds(10,90,300,100);
        f.add(ta);

        ta.addKeyListener(this);
        f.addWindowListener(this);

    }

    public void keyPressed(KeyEvent ke){}
    public void keyTyped(KeyEvent ke){}
    public void keyReleased(KeyEvent ke)
    {
        String text = ta.getText();
        String words[] = text.split("\\s");
        l2.setText("Characters: " + text.length() + "  Words: " + words.length);
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
        key2 k = new key2();
    }    
}
