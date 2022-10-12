import java.awt.*;
import java.awt.event.*;

import javax.swing.JComboBox.KeySelectionManager;

public class exam implements WindowListener, ActionListener, KeyListener
{
    Frame f     = new Frame();
    Label l     = new Label();
    Button b1   = new Button("button 1");
    Button b2   = new Button("button 2");
    TextField tf = new TextField();
    exam()
    {
        f.setSize(500, 500);
        f.setTitle("exam");
        f.setVisible(true);
        f.setLayout(null);
        f.addWindowListener(this);

        l.setBounds(50, 50, 100, 30);
        f.add(l);

        // b1.setBounds(100, 90, 100, 30);
        // f.add(b1);

        // b2.setBounds(200, 90, 100, 30);
        // f.add(b2);

        // b1.addActionListener(this);
        // b2.addActionListener(this);

        tf.setBounds(50, 90, 100, 30);
        f.add(tf);
        tf.addKeyListener(this);

    }
    public void keyPressed(KeyEvent e){}
    public void keyTyped(KeyEvent e){}
    public void keyReleased(KeyEvent e)
    {
        int n = e.getKeyCode();
        System.out.println(e.getKeyText(n));
    }

    public void actionPerformed(ActionEvent e)
    {
        if (e.getSource() == b1)
            l.setText("button 1");
        else if (e.getSource() == b2)
            l.setText("button 2");
    }

    public void windowActivated(WindowEvent e){}
    public void windowDeactivated(WindowEvent e){}
    public void windowIconified(WindowEvent e){}
    public void windowDeiconified(WindowEvent e){}
    public void windowClosed(WindowEvent e){}
    public void windowOpened(WindowEvent e){}
    public void windowClosing(WindowEvent e)
    {
        f.dispose();
    }

    public static void main(String[] args)
    {
        exam e = new exam();
    }    
}
