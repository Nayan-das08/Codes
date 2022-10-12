import java.awt.*;
import java.awt.event.*;
import java.awt.Graphics;
import java.awt.Font;
public class calc implements ActionListener, WindowListener
{
    Frame f         = new Frame();
    Label op1       = new Label("Enter first operand: ");
    Label op2       = new Label("Enter second operand: ");
    Button plus     = new Button("+");
    Button minus    = new Button("-");
    Button multiply = new Button("*");
    Button divide   = new Button("/");
    TextField tf1   = new TextField();
    TextField tf2   = new TextField(); 
    Label ans       = new Label();

    calc()
    {
        f.setSize(500, 500);
        f.setTitle("calc.java");
        f.setVisible(true);
        f.setLayout(null);
        
        op1.setBounds(10,40,120,20);
        op2.setBounds(10,60,120,20);
        f.add(op1);
        f.add(op2);

        tf1.setBounds(150,40,150,20);
        tf2.setBounds(150,60,150,20);
        f.add(tf1);
        f.add(tf2);

        plus.setBounds(50,100,40,40);
        minus.setBounds(100,100,40,40);
        multiply.setBounds(150,100,40,40);
        divide.setBounds(200,100,40,40);
        plus.addActionListener(this);
        minus.addActionListener(this);
        multiply.addActionListener(this);
        divide.addActionListener(this);
        f.add(plus);
        f.add(minus);
        f.add(multiply);
        f.add(divide);

        ans.setBounds(100,170,150,20);
        ans.setFont(new Font("Serif", Font.PLAIN, 24));
        f.add(ans);

        f.addWindowListener(this);
    }
    public void actionPerformed(ActionEvent e)
    {
        int a = Integer.parseInt(tf1.getText());
        int b = Integer.parseInt(tf2.getText());
        int c=0;
        String op = new String("");
        if (e.getSource() == plus)
        {
            c = a+b;
            op = " + ";
        }
        else if (e.getSource() == minus)
        {
            c = a-b;
            op = " - ";
        }
        else if (e.getSource() == multiply)
        {
            c = a*b;
            op = " * ";
        }
        else if (e.getSource() == divide)
        {
            c = a/b;
            op = " / ";
        }
        ans.setText(a + op + b + " = " + c);
    }
    
    public void windowActivated(WindowEvent we)
    {
        System.out.println("Window Activated");
    }
    public void windowClosed(WindowEvent we)
    {
        System.out.println("Window Closed");
    }
    public void windowClosing(WindowEvent we)
    {
        System.out.println("Window Closing");
        // System.exit(0);
        f.dispose();
    }
    public void windowDeactivated(WindowEvent we)
    {
        System.out.println("Window Deactivated");
    }
    public void windowDeiconified(WindowEvent we)
    {
        System.out.println("Window Deiconified");
    }
    public void windowIconified(WindowEvent we)
    {
        System.out.println("Window Iconified");
    }
    public void windowOpened(WindowEvent we)
    {
        System.out.println("Window Opened");
    }
    
    public static void main(String[] args)
    {
        calc c = new calc();
    }    
}
