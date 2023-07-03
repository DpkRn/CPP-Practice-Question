/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/GUIForms/JInternalFrame.java to edit this template
 */
package bus.mananagement;

import java.awt.Image;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;
import javax.swing.ImageIcon;
import javax.swing.JOptionPane;
import javax.swing.table.DefaultTableModel;

/**
 *
 * @author Lenovo
 */
public class ManageUsers extends javax.swing.JInternalFrame {

    /**
     * Creates new form ManageUsers
     */
    public ManageUsers() {
        initComponents();
         if(adminBtn.isSelected()==true){
            loadTableAdmin();
        }
        if(userBtn.isSelected()==true){
           loadTableUser();
        }
       
      //   scaledImage();
    }
// public void scaledImage(){
//      ImageIcon icon=new ImageIcon("C:\\Users\\Lenovo\\Desktop\\project img\\dashbord.jpg");
//        Image img=icon.getImage();
//        Image scaledImg=img.getScaledInstance(backlbl1.getWidth(),backlbl1.getHeight(),Image.SCALE_SMOOTH);
//        ImageIcon scaledIcon=new ImageIcon(scaledImg);
//        backlbl1.setIcon(scaledIcon);
//        
//  }
    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        buttonGroup1 = new javax.swing.ButtonGroup();
        buttonGroup2 = new javax.swing.ButtonGroup();
        buttonGroup3 = new javax.swing.ButtonGroup();
        buttonGroup4 = new javax.swing.ButtonGroup();
        buttonGroup5 = new javax.swing.ButtonGroup();
        buttonGroup6 = new javax.swing.ButtonGroup();
        jPanel2 = new javax.swing.JPanel();
        jPanel1 = new javax.swing.JPanel();
        jLabel1 = new javax.swing.JLabel();
        firstnameTF = new javax.swing.JTextField();
        jLabel3 = new javax.swing.JLabel();
        usernameTF = new javax.swing.JTextField();
        jLabel4 = new javax.swing.JLabel();
        emailTF = new javax.swing.JTextField();
        lastnameTF = new javax.swing.JTextField();
        jLabel5 = new javax.swing.JLabel();
        jLabel6 = new javax.swing.JLabel();
        jLabel7 = new javax.swing.JLabel();
        weburlTF = new javax.swing.JTextField();
        passwordTF = new javax.swing.JTextField();
        registerBtn = new javax.swing.JButton();
        resetBtn = new javax.swing.JButton();
        jLabel2 = new javax.swing.JLabel();
        jScrollPane1 = new javax.swing.JScrollPane();
        eTable = new javax.swing.JTable();
        adminBtn = new javax.swing.JRadioButton();
        jLabel8 = new javax.swing.JLabel();
        userBtn = new javax.swing.JRadioButton();

        setClosable(true);
        setNormalBounds(new java.awt.Rectangle(0, 0, 700, 500));
        getContentPane().setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jPanel2.setBackground(new java.awt.Color(0, 51, 51));
        jPanel2.setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jPanel1.setBackground(new java.awt.Color(0, 102, 102));
        jPanel1.setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jLabel1.setFont(new java.awt.Font("Algerian", 1, 36)); // NOI18N
        jLabel1.setForeground(new java.awt.Color(255, 255, 255));
        jLabel1.setText("New User Registration");
        jPanel1.add(jLabel1, new org.netbeans.lib.awtextra.AbsoluteConstraints(160, 20, 460, 52));

        jPanel2.add(jPanel1, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 0, 770, 80));
        jPanel2.add(firstnameTF, new org.netbeans.lib.awtextra.AbsoluteConstraints(190, 140, 177, -1));

        jLabel3.setFont(new java.awt.Font("Algerian", 0, 18)); // NOI18N
        jLabel3.setForeground(new java.awt.Color(255, 255, 255));
        jLabel3.setText("Username");
        jPanel2.add(jLabel3, new org.netbeans.lib.awtextra.AbsoluteConstraints(60, 180, 110, -1));
        jPanel2.add(usernameTF, new org.netbeans.lib.awtextra.AbsoluteConstraints(190, 180, 177, -1));

        jLabel4.setFont(new java.awt.Font("Algerian", 0, 18)); // NOI18N
        jLabel4.setForeground(new java.awt.Color(255, 255, 255));
        jLabel4.setText("Email Id");
        jPanel2.add(jLabel4, new org.netbeans.lib.awtextra.AbsoluteConstraints(60, 220, 110, -1));

        emailTF.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                emailTFActionPerformed(evt);
            }
        });
        jPanel2.add(emailTF, new org.netbeans.lib.awtextra.AbsoluteConstraints(190, 220, 177, -1));
        jPanel2.add(lastnameTF, new org.netbeans.lib.awtextra.AbsoluteConstraints(540, 140, 169, -1));

        jLabel5.setFont(new java.awt.Font("Algerian", 0, 18)); // NOI18N
        jLabel5.setForeground(new java.awt.Color(255, 255, 255));
        jLabel5.setText("Last Name");
        jPanel2.add(jLabel5, new org.netbeans.lib.awtextra.AbsoluteConstraints(410, 140, -1, -1));

        jLabel6.setFont(new java.awt.Font("Algerian", 0, 18)); // NOI18N
        jLabel6.setForeground(new java.awt.Color(255, 255, 255));
        jLabel6.setText("Password");
        jPanel2.add(jLabel6, new org.netbeans.lib.awtextra.AbsoluteConstraints(410, 180, 93, -1));

        jLabel7.setFont(new java.awt.Font("Algerian", 0, 18)); // NOI18N
        jLabel7.setForeground(new java.awt.Color(255, 255, 255));
        jLabel7.setText("Phone no");
        jPanel2.add(jLabel7, new org.netbeans.lib.awtextra.AbsoluteConstraints(410, 220, 93, -1));

        weburlTF.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyPressed(java.awt.event.KeyEvent evt) {
                weburlTFKeyPressed(evt);
            }
        });
        jPanel2.add(weburlTF, new org.netbeans.lib.awtextra.AbsoluteConstraints(540, 220, 169, -1));
        jPanel2.add(passwordTF, new org.netbeans.lib.awtextra.AbsoluteConstraints(540, 180, 169, -1));

        registerBtn.setBackground(new java.awt.Color(0, 153, 153));
        registerBtn.setFont(new java.awt.Font("Algerian", 0, 18)); // NOI18N
        registerBtn.setForeground(new java.awt.Color(255, 255, 255));
        registerBtn.setText("Register");
        registerBtn.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                registerBtnActionPerformed(evt);
            }
        });
        jPanel2.add(registerBtn, new org.netbeans.lib.awtextra.AbsoluteConstraints(230, 280, 130, -1));

        resetBtn.setBackground(new java.awt.Color(0, 153, 153));
        resetBtn.setFont(new java.awt.Font("Algerian", 0, 18)); // NOI18N
        resetBtn.setForeground(new java.awt.Color(255, 255, 255));
        resetBtn.setText("Reset");
        resetBtn.setPreferredSize(new java.awt.Dimension(117, 33));
        resetBtn.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                resetBtnActionPerformed(evt);
            }
        });
        jPanel2.add(resetBtn, new org.netbeans.lib.awtextra.AbsoluteConstraints(400, 280, 120, -1));

        jLabel2.setFont(new java.awt.Font("Algerian", 0, 18)); // NOI18N
        jLabel2.setForeground(new java.awt.Color(255, 255, 255));
        jLabel2.setText("SELECT TYPE");
        jPanel2.add(jLabel2, new org.netbeans.lib.awtextra.AbsoluteConstraints(60, 100, 130, -1));

        eTable.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {

            },
            new String [] {
                "FIRST NAME", "LAST NAME", "USERNAME", "PASSWORD", "EMAIL", "PHONE NO"
            }
        ) {
            boolean[] canEdit = new boolean [] {
                false, false, false, false, false, false
            };

            public boolean isCellEditable(int rowIndex, int columnIndex) {
                return canEdit [columnIndex];
            }
        });
        eTable.setShowGrid(true);
        jScrollPane1.setViewportView(eTable);

        jPanel2.add(jScrollPane1, new org.netbeans.lib.awtextra.AbsoluteConstraints(50, 330, 660, 150));

        adminBtn.setBackground(new java.awt.Color(0, 51, 51));
        buttonGroup1.add(adminBtn);
        adminBtn.setForeground(new java.awt.Color(255, 255, 255));
        adminBtn.setSelected(true);
        adminBtn.setText("ADMIN");
        adminBtn.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                adminBtnActionPerformed(evt);
            }
        });
        adminBtn.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyPressed(java.awt.event.KeyEvent evt) {
                adminBtnKeyPressed(evt);
            }
        });
        jPanel2.add(adminBtn, new org.netbeans.lib.awtextra.AbsoluteConstraints(190, 100, -1, -1));

        jLabel8.setFont(new java.awt.Font("Algerian", 0, 18)); // NOI18N
        jLabel8.setForeground(new java.awt.Color(255, 255, 255));
        jLabel8.setText("First Name");
        jPanel2.add(jLabel8, new org.netbeans.lib.awtextra.AbsoluteConstraints(60, 140, 110, -1));

        userBtn.setBackground(new java.awt.Color(0, 51, 51));
        buttonGroup1.add(userBtn);
        userBtn.setForeground(new java.awt.Color(255, 255, 255));
        userBtn.setText("USER");
        userBtn.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                userBtnActionPerformed(evt);
            }
        });
        userBtn.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyPressed(java.awt.event.KeyEvent evt) {
                userBtnKeyPressed(evt);
            }
        });
        jPanel2.add(userBtn, new org.netbeans.lib.awtextra.AbsoluteConstraints(280, 100, -1, -1));

        getContentPane().add(jPanel2, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 0, 760, 530));

        setBounds(0, 0, 767, 564);
    }// </editor-fold>//GEN-END:initComponents

    private void emailTFActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_emailTFActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_emailTFActionPerformed

    private void registerBtnActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_registerBtnActionPerformed
        if(adminBtn.isSelected()==true){
            registerAdmin();
        }
        if(userBtn.isSelected()==true){
            registerUser();
        }
    }//GEN-LAST:event_registerBtnActionPerformed
    
    public  void loadTableUser(){
         try {
            Class.forName("com.mysql.jdbc.Driver");
            String databaseURL = "jdbc:mysql://localhost:3306/busm";
            Connection con = DriverManager.getConnection(databaseURL, "root", "root");
            Statement stat = con.createStatement();
            String selectQuery = "select * from user_details";
            System.out.println(selectQuery);
            ResultSet rs = stat.executeQuery(selectQuery);
            DefaultTableModel model = (DefaultTableModel) eTable.getModel();
            model.setRowCount(0);
//   System.out.println(rs.next());
            while (rs.next()) {
                model.addRow(new String[]{rs.getString(1), rs.getString(2), rs.getString(3), rs.getString(4), rs.getString(5),rs.getString(6)});
            }
        } catch (Exception ex) {
            System.out.println("Error:" + ex.getMessage());
        }
    }
    public void registerUser(){
        String firstname = firstnameTF.getText();
        String lastname = lastnameTF.getText();
        String username =  usernameTF.getText();
        String password = passwordTF.getText();
        String email = emailTF.getText();
        String weburl = weburlTF.getText();

        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            String databaseURL = "jdbc:mysql://localhost:3306/busm";
            Connection con = DriverManager.getConnection(databaseURL, "root", "root");
            Statement stat = con.createStatement();
            String selectQuery = "select * from user_details where username='"+username+"' ";
            System.out.println(selectQuery);
            ResultSet rs=stat.executeQuery(selectQuery);
            //System.out.println(rs.next());
            if(rs.next()==true)
            {
                JOptionPane.showMessageDialog(this,"User Already Exists, Please Choose Another Username ! !");
                usernameTF.setText("");
            }
            else
            {
                String insertQuery = "insert into user_details values('" + firstname + "','" + lastname + "','" + username + "','" + password + "','" + email + "','" + weburl + "')";

                stat.executeUpdate(insertQuery);
              
                JOptionPane.showMessageDialog(this,"User Created Successfully..!");
               loadTableUser();
            }

        } catch (Exception e) {
            System.out.println(e);
        }

    }
    public void registerAdmin(){
         String firstname = firstnameTF.getText();
        String lastname = lastnameTF.getText();
        String username =  usernameTF.getText();
        String password = passwordTF.getText();
        String email = emailTF.getText();
        String weburl = weburlTF.getText();

        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            String databaseURL = "jdbc:mysql://localhost:3306/busm";
            Connection con = DriverManager.getConnection(databaseURL, "root", "root");
            Statement stat = con.createStatement();
            String selectQuery = "select * from admin_details where username='"+username+"' ";
            System.out.println(selectQuery);
            ResultSet rs=stat.executeQuery(selectQuery);
            //System.out.println(rs.next());
            if(rs.next()==true)
            {
                JOptionPane.showMessageDialog(this,"User Already Exists, Please Choose Another Username ! !");
                usernameTF.setText("");
            }
            else
            {
                String insertQuery = "insert into admin_details values('" + username + "','" + password + "','" + firstname + "','" + lastname + "','" + email + "','" + weburl + "')";

                stat.executeUpdate(insertQuery);
              
                JOptionPane.showMessageDialog(this,"Admin  Created Successfully..!");
               loadTableAdmin();
            }

        } catch (Exception e) {
            System.out.println(e);
        }

    }
     public  void loadTableAdmin(){
         try {
            Class.forName("com.mysql.jdbc.Driver");
            String databaseURL = "jdbc:mysql://localhost:3306/busm";
            Connection con = DriverManager.getConnection(databaseURL, "root", "root");
            Statement stat = con.createStatement();
            String selectQuery = "select * from Admin_details";
            System.out.println(selectQuery);
            ResultSet rs = stat.executeQuery(selectQuery);
            DefaultTableModel model = (DefaultTableModel) eTable.getModel();
            model.setRowCount(0);
//   System.out.println(rs.next());
            while (rs.next()) {
                model.addRow(new String[]{rs.getString(3), rs.getString(4), rs.getString(1), rs.getString(2), rs.getString(5),rs.getString(6)});
            }
        } catch (Exception ex) {
            System.out.println("Error:" + ex.getMessage());
        }
    }
    private void resetBtnActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_resetBtnActionPerformed
        emailTF.setText("");
        firstnameTF.setText("");
        lastnameTF.setText("");
        passwordTF.setText("");
        usernameTF.setText("");
        weburlTF.setText("");
    }//GEN-LAST:event_resetBtnActionPerformed

    private void adminBtnKeyPressed(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_adminBtnKeyPressed
       
    }//GEN-LAST:event_adminBtnKeyPressed

    private void userBtnActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_userBtnActionPerformed
        loadTableUser();
    }//GEN-LAST:event_userBtnActionPerformed

    private void userBtnKeyPressed(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_userBtnKeyPressed
      JOptionPane.showMessageDialog(null,"User");
    }//GEN-LAST:event_userBtnKeyPressed

    private void adminBtnActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_adminBtnActionPerformed
      loadTableAdmin();
    }//GEN-LAST:event_adminBtnActionPerformed

    private void weburlTFKeyPressed(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_weburlTFKeyPressed
         if((evt.getKeyChar()>='0')&&(evt.getKeyChar()<='9')||Character.isISOControl(evt.getKeyChar())){
           weburlTF.setEditable(true);
       }
       else
       {
           weburlTF.setEditable(false);
       }
    }//GEN-LAST:event_weburlTFKeyPressed
    

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JRadioButton adminBtn;
    private javax.swing.ButtonGroup buttonGroup1;
    private javax.swing.ButtonGroup buttonGroup2;
    private javax.swing.ButtonGroup buttonGroup3;
    private javax.swing.ButtonGroup buttonGroup4;
    private javax.swing.ButtonGroup buttonGroup5;
    private javax.swing.ButtonGroup buttonGroup6;
    private javax.swing.JTable eTable;
    private javax.swing.JTextField emailTF;
    private javax.swing.JTextField firstnameTF;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JLabel jLabel6;
    private javax.swing.JLabel jLabel7;
    private javax.swing.JLabel jLabel8;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JPanel jPanel2;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JTextField lastnameTF;
    private javax.swing.JTextField passwordTF;
    private javax.swing.JButton registerBtn;
    private javax.swing.JButton resetBtn;
    private javax.swing.JRadioButton userBtn;
    private javax.swing.JTextField usernameTF;
    private javax.swing.JTextField weburlTF;
    // End of variables declaration//GEN-END:variables
}
