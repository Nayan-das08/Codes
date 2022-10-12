import java.awt.*;
import java.awt.event.*;

public class hel extends Frame implements ActionListener
{  
    Label firstName = new Label("First Name"); 
    TextField firstNameTF = new TextField();
    Label lastName = new Label("Last Name");  
    TextField lastNameTF = new TextField(); 
    Label dob = new Label("Date of Birth"); 
    TextField dobTF = new TextField();
    Button sbmt = new Button("Submit"); 
    Button reset = new Button("Reset");
    Label status = new Label();
    
    hel(){  

    firstName.setBounds(70,20,100,50);
    firstNameTF.setBounds(70,70,100,50);  
    lastName.setBounds(200,20,100,50);   
    lastNameTF.setBounds(200,70,100,50);  
    dob.setBounds(320,20,100,50); 
    dobTF.setBounds(320,70,100,50);   
    sbmt.setBounds(420,100,50,50);  
    sbmt.addActionListener(this);
    reset.setBounds(420,170,50,50); 
    reset.addActionListener(this);
    status.setBounds(60,150,150,50);

    Label mood = new Label("Mood Chart");  
    mood.setBounds(70,400,100,50); 

    Checkbox ch1=new Checkbox("AAAAAAAA",true);
    Checkbox ch2=new Checkbox("LOL",true);
    Checkbox ch3=new Checkbox("AHAHAHAHA",true);
    ch1.setBounds(70,450,100,50);
    ch2.setBounds(70,500,100,50);
    ch3.setBounds(70,550,100,50);
    add(ch1);
    add(ch2);
    add(ch3);
    add(lastName);  
    add(dob);  
    add(firstNameTF);  
    add(lastNameTF);  
    add(dobTF);  
    add(sbmt);  
    add(reset);  
    add(firstName);
    add(mood);
    add(status);
    
    setSize(900,900);  
    setLayout(null);  
    setVisible(true);  

    addWindowListener(new WindowAdapter(){
        public void windowClosing(WindowEvent e)
        {
            dispose();
        }
    });

    }  

    @Override
    public void actionPerformed(ActionEvent e)
    {
        if (e.getSource() == sbmt)
        {
            status.setText("Successfully submitted!");
        } 
        else if (e.getSource() == reset) 
        {
            System.out.println(e.getSource());
            firstNameTF.setText(" ");
            lastNameTF.setText(" ");
            dobTF.setText(" ");
        }
        
    }
    //@Override
    //public void actionPerformed(ActionEvent ee){
    //    firstNameTF.setText("");
    //    lastNameTF.setText("");
    //    dobTF.setText("");
    //}
    public static void main(String[] args) 
    {  
        hel h = new hel();    
    }
}