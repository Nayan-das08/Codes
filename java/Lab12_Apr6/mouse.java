import java.awt.*;
import java.awt.event.*;

public class mouse implements MouseListener, WindowListener
{
    Frame f = new Frame();
    Label l1 = new Label("This is a java program to demonstrate Event Handling using MouseListener");
    Label l2 = new Label("Click the mouse inside the window");
    Label l3 = new Label();
    Label l4 = new Label();
    
    mouse1()
    {
        f.setSize(500, 500);
        f.setTitle("MouseClicked");
        f.setVisible(true);
        f.setLayout(null);
        
        l1.setBounds(10,30,400,20);
        f.add(l1);

        l2.setBounds(10,50,200,20);
        f.add(l2);
        
        l3.setBounds(10,80,100,20);
        f.add(l3);

        l4.setBounds(10,100,100,20);
        f.add(l4);
        
        f.addMouseListener(this);
        f.addWindowListener(this);
    }
    public void mouseEntered(MouseEvent me)
    {
        l3.setText("Mouse Entered");
        l4.setText("");
    }
    public void mouseExited(MouseEvent me)
    {
        l3.setText("Mouse Exited");
        l4.setText("");
    }
    public void mousePressed(MouseEvent me)
    {
        l3.setText("Mouse Pressed");
        l4.setText("");
    }
    public void mouseReleased(MouseEvent me)
    {
        l3.setText("Mouse Released");
        l4.setText("");
    }
    public void mouseClicked(MouseEvent me)
    {
        l4.setText("Mouse Clicked");
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
        mouse1 m = new mouse1();
    }
}