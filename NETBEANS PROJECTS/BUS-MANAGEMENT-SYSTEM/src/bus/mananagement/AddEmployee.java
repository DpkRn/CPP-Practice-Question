/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package bus.mananagement;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.ResultSetMetaData;
import java.sql.Statement;
import javax.swing.JOptionPane;
import javax.swing.table.DefaultTableModel;
import java.sql.PreparedStatement;

/**
 *
 * @author ratna
 */
public class AddEmployee extends javax.swing.JInternalFrame {

    /**
     * Creates new form AddEmployee
     */
    public AddEmployee() {
        initComponents();

//        try {
//            Class.forName("com.mysql.jdbc.Driver");
//            String databaseURL = "jdbc:mysql://localhost:3306/busm";
//            Connection con = DriverManager.getConnection(databaseURL, "root", "root");
//            Statement stat = con.createStatement();
//            String selectQuery = "select * from employee_details";
//            System.out.println(selectQuery);
//            ResultSet rs = stat.executeQuery(selectQuery);
//            DefaultTableModel model = (DefaultTableModel) eTable.getModel();
////   System.out.println(rs.next());
//            while (rs.next()) {
//                model.addRow(new String[]{rs.getString(1), rs.getString(2), rs.getString(3), rs.getString(4), rs.getString(5)});
//            }
//        } catch (Exception ex) {
//            System.out.println("Error:" + ex.getMessage());
//        }
    loadTable();
    }

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jPanel1 = new javax.swing.JPanel();
        jButton1 = new javax.swing.JButton();
        jButton2 = new javax.swing.JButton();
        jLabel2 = new javax.swing.JLabel();
        jLabel3 = new javax.swing.JLabel();
        jLabel4 = new javax.swing.JLabel();
        jLabel5 = new javax.swing.JLabel();
        phoneno2TF = new javax.swing.JTextField();
        firstnameTF = new javax.swing.JTextField();
        lastnameTF = new javax.swing.JTextField();
        phoneno1TF = new javax.swing.JTextField();
        jButton3 = new javax.swing.JButton();
        jButton4 = new javax.swing.JButton();
        empId = new javax.swing.JTextField();
        jLabel6 = new javax.swing.JLabel();
        jScrollPane1 = new javax.swing.JScrollPane();
        eTable = new javax.swing.JTable();
        jPanel2 = new javax.swing.JPanel();
        jLabel1 = new javax.swing.JLabel();

        setClosable(true);
        getContentPane().setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jPanel1.setBorder(javax.swing.BorderFactory.createTitledBorder("Manage Here"));

        jButton1.setFont(new java.awt.Font("Ubuntu", 1, 18)); // NOI18N
        jButton1.setText("ADD");
        jButton1.setBorder(new javax.swing.border.SoftBevelBorder(javax.swing.border.BevelBorder.RAISED));
        jButton1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton1ActionPerformed(evt);
            }
        });

        jButton2.setFont(new java.awt.Font("Ubuntu", 1, 18)); // NOI18N
        jButton2.setText("Reset");

        jLabel2.setFont(new java.awt.Font("Ubuntu", 1, 18)); // NOI18N
        jLabel2.setText("First Name");

        jLabel3.setFont(new java.awt.Font("Ubuntu", 1, 18)); // NOI18N
        jLabel3.setText("Last Name");

        jLabel4.setFont(new java.awt.Font("Ubuntu", 1, 18)); // NOI18N
        jLabel4.setText("Phone1");

        jLabel5.setFont(new java.awt.Font("Ubuntu", 1, 18)); // NOI18N
        jLabel5.setText("Phone2");

        phoneno2TF.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyPressed(java.awt.event.KeyEvent evt) {
                phoneno2TFKeyPressed(evt);
            }
        });

        phoneno1TF.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyPressed(java.awt.event.KeyEvent evt) {
                phoneno1TFKeyPressed(evt);
            }
        });

        jButton3.setFont(new java.awt.Font("Ubuntu", 1, 18)); // NOI18N
        jButton3.setText("UPDATE");
        jButton3.setBorder(new javax.swing.border.SoftBevelBorder(javax.swing.border.BevelBorder.RAISED));
        jButton3.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton3ActionPerformed(evt);
            }
        });

        jButton4.setFont(new java.awt.Font("Ubuntu", 1, 18)); // NOI18N
        jButton4.setText("DELETE");
        jButton4.setBorder(new javax.swing.border.SoftBevelBorder(javax.swing.border.BevelBorder.RAISED));
        jButton4.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton4ActionPerformed(evt);
            }
        });

        jLabel6.setFont(new java.awt.Font("Ubuntu", 1, 18)); // NOI18N
        jLabel6.setText("Employee ID");

        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addComponent(jLabel2, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(jLabel5, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(jLabel4, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(jLabel3, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(jLabel6, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                            .addComponent(phoneno1TF, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 212, Short.MAX_VALUE)
                            .addComponent(lastnameTF)
                            .addComponent(phoneno2TF)
                            .addComponent(firstnameTF)
                            .addComponent(empId)))
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addComponent(jButton1, javax.swing.GroupLayout.PREFERRED_SIZE, 81, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(jButton3)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(jButton4)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(jButton2)))
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel1Layout.createSequentialGroup()
                .addGap(23, 23, 23)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addComponent(jLabel6, javax.swing.GroupLayout.PREFERRED_SIZE, 28, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(empId, javax.swing.GroupLayout.PREFERRED_SIZE, 28, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel1Layout.createSequentialGroup()
                        .addComponent(firstnameTF, javax.swing.GroupLayout.PREFERRED_SIZE, 28, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED))
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel1Layout.createSequentialGroup()
                        .addComponent(jLabel2, javax.swing.GroupLayout.PREFERRED_SIZE, 28, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(18, 18, 18)))
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jLabel3, javax.swing.GroupLayout.PREFERRED_SIZE, 26, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addGap(4, 4, 4)
                        .addComponent(lastnameTF, javax.swing.GroupLayout.PREFERRED_SIZE, 28, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addGap(18, 18, 18)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addComponent(jLabel4, javax.swing.GroupLayout.PREFERRED_SIZE, 28, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(phoneno1TF, javax.swing.GroupLayout.PREFERRED_SIZE, 28, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addGap(13, 13, 13)
                        .addComponent(phoneno2TF, javax.swing.GroupLayout.PREFERRED_SIZE, 34, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addGap(18, 18, 18)
                        .addComponent(jLabel5, javax.swing.GroupLayout.PREFERRED_SIZE, 34, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jButton1)
                    .addComponent(jButton3)
                    .addComponent(jButton4)
                    .addComponent(jButton2))
                .addGap(84, 84, 84))
        );

        getContentPane().add(jPanel1, new org.netbeans.lib.awtextra.AbsoluteConstraints(20, 110, -1, 313));

        eTable.setBackground(new java.awt.Color(102, 102, 255));
        eTable.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {

            },
            new String [] {
                "ID", "FIRST NAME", "LAST NAME", "PHONE NO1", "PHONENO2"
            }
        ) {
            boolean[] canEdit = new boolean [] {
                false, false, false, false, false
            };

            public boolean isCellEditable(int rowIndex, int columnIndex) {
                return canEdit [columnIndex];
            }
        });
        eTable.setShowGrid(true);
        eTable.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                eTableMouseClicked(evt);
            }
        });
        jScrollPane1.setViewportView(eTable);
        if (eTable.getColumnModel().getColumnCount() > 0) {
            eTable.getColumnModel().getColumn(0).setResizable(false);
            eTable.getColumnModel().getColumn(4).setResizable(false);
        }

        getContentPane().add(jScrollPane1, new org.netbeans.lib.awtextra.AbsoluteConstraints(400, 120, 506, 287));

        jPanel2.setBackground(new java.awt.Color(0, 102, 102));
        jPanel2.setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jLabel1.setFont(new java.awt.Font("Algerian", 1, 36)); // NOI18N
        jLabel1.setText(" Employee dETAILS");
        jPanel2.add(jLabel1, new org.netbeans.lib.awtextra.AbsoluteConstraints(260, 20, 410, 57));

        getContentPane().add(jPanel2, new org.netbeans.lib.awtextra.AbsoluteConstraints(-10, -10, 940, 100));

        setBounds(0, 0, 946, 513);
    }// </editor-fold>//GEN-END:initComponents
    
    public void infoMessage(String message, String tittle) {
        JOptionPane.showMessageDialog(null, message, tittle, JOptionPane.INFORMATION_MESSAGE);
    }

    public void clearFieldValue() {
        empId.setText("");
        firstnameTF.setText("");
        lastnameTF.setText("");
        phoneno1TF.setText("");
        phoneno2TF.setText("");
    }
    public  void loadTable(){
         try {
            Class.forName("com.mysql.jdbc.Driver");
            String databaseURL = "jdbc:mysql://localhost:3306/busm";
            Connection con = DriverManager.getConnection(databaseURL, "root", "root");
            Statement stat = con.createStatement();
            String selectQuery = "select * from employee_details";
            System.out.println(selectQuery);
            ResultSet rs = stat.executeQuery(selectQuery);
            DefaultTableModel model = (DefaultTableModel) eTable.getModel();
//   System.out.println(rs.next());
            while (rs.next()) {
                model.addRow(new String[]{rs.getString(1), rs.getString(2), rs.getString(3), rs.getString(4), rs.getString(5)});
            }
        } catch (Exception ex) {
            System.out.println("Error:" + ex.getMessage());
        }
    }

    private void jButton1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton1ActionPerformed
         String empIdd=empId.getText();
        String firstname = firstnameTF.getText();
        String lastname = lastnameTF.getText();
        String phoneno1 = phoneno1TF.getText();
        String phoneno2 = phoneno2TF.getText();
        if (firstname.equals("") || lastname.equals("") || phoneno1.equals("")) {
            JOptionPane.showMessageDialog(null, "Empty !");
            return;
        }
        try {
            Class.forName("com.mysql.jdbc.Driver");
            String databaseURL = "jdbc:mysql://localhost:3306/busm";
            Connection con = DriverManager.getConnection(databaseURL, "root", "root");
            Statement stat = con.createStatement();
            String selectQuery = "select * from employee_details where phone1	='" + phoneno1 + "'";
            System.out.println(selectQuery);
            ResultSet rs = stat.executeQuery(selectQuery);
            //   System.out.println(rs.next());
            if (rs.next()) {
                JOptionPane.showMessageDialog(this, "Already found  !");
                clearFieldValue();
            } else {
                String insertQuery = "insert into employee_details values('"+empIdd+"','" + firstname + "','" + lastname + "','" + phoneno1 + "','" + phoneno2 + "')";

                stat.executeUpdate(insertQuery);
               DefaultTableModel model = (DefaultTableModel) eTable.getModel();
//               // int c = model.getRowCount();
//                model.addRow(new String[]{empIdd, firstname, lastname, phoneno1, phoneno2});
                JOptionPane.showMessageDialog(this, "Credential Inserted  !");
                model.setRowCount(0);
                loadTable();

                empId.requestFocus();
                clearFieldValue();

            }
        } catch (Exception e) {
            System.out.println(e);
        }

    }//GEN-LAST:event_jButton1ActionPerformed

    private void jButton3ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton3ActionPerformed

        DefaultTableModel model = (DefaultTableModel) eTable.getModel();
        int selectedIndex = eTable.getSelectedRow();

        String id = model.getValueAt(selectedIndex, 0).toString();
      
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/busm", "root", "root");
           String idd=empId.getText();
            String fname = firstnameTF.getText();
            String lname = lastnameTF.getText();
            String phone1 = phoneno1TF.getText();
            String phone2 = phoneno2TF.getText();
            String query = "update employee_details set firstname=?,lastname=?,phone1=?,phone2=?,id=? where id=?";
            PreparedStatement st = con.prepareStatement(query);

            st.setString(1, fname);

            st.setString(2, lname);
            st.setString(3, phone1);

            st.setString(4, phone2);
            st.setString(5, idd);
            st.setString(6, id);

            int i = st.executeUpdate();
            
            JOptionPane.showMessageDialog(null, i + " row Updated !");
            model.setRowCount(0);
            eTable.revalidate();
            loadTable();
            clearFieldValue();
            empId.requestFocus();

        } catch (Exception ex) {
            System.out.println(ex.getMessage());
        }
    }//GEN-LAST:event_jButton3ActionPerformed

    private void jButton4ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton4ActionPerformed
        try{
          Class.forName("com.mysql.cj.jdbc.Driver");
          Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/busm","root","root");
          String query="Delete from employee_details where id=?";
          PreparedStatement st=con.prepareStatement(query);
          DefaultTableModel model=(DefaultTableModel)eTable.getModel();
          int selectIndex=eTable.getSelectedRow();
          String id= (String) model.getValueAt(selectIndex,0);
          st.setString(1,id);
          int i=st.executeUpdate();
          JOptionPane.showMessageDialog(null,i+" Row Deleted !");
          clearFieldValue();
        model.setRowCount(0);
          eTable.revalidate();
          loadTable();
         
          
        
        
        }catch(Exception ex){
        System.out.println(ex.getMessage());
        }
    }//GEN-LAST:event_jButton4ActionPerformed

    private void eTableMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_eTableMouseClicked
        DefaultTableModel model = (DefaultTableModel) eTable.getModel();
        int selectedIndex = eTable.getSelectedRow();
        empId.setText(model.getValueAt(selectedIndex,0).toString());
        firstnameTF.setText(model.getValueAt(selectedIndex, 1).toString());
        lastnameTF.setText(model.getValueAt(selectedIndex, 2).toString());
        phoneno1TF.setText(model.getValueAt(selectedIndex, 3).toString());
        phoneno2TF.setText(model.getValueAt(selectedIndex, 4).toString());
    }//GEN-LAST:event_eTableMouseClicked

    private void phoneno1TFKeyPressed(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_phoneno1TFKeyPressed
        // TODO add your handling code here:
         if(phoneno2TF.getText().toString().length()>10){
            phoneno2TF.setEditable(false);
             JOptionPane.showMessageDialog(null,"Phone no lenth exceedding !");
             return;
         }
        if((evt.getKeyChar()>='0')&&(evt.getKeyChar()<='9')||Character.isISOControl(evt.getKeyChar())){
           phoneno1TF.setEditable(true);
       }
       else
       {
           phoneno1TF.setEditable(false);
       }
    }//GEN-LAST:event_phoneno1TFKeyPressed

    private void phoneno2TFKeyPressed(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_phoneno2TFKeyPressed
        // TODO add your handling code here:
        if(phoneno2TF.getText().toString().length()>10){
            phoneno2TF.setEditable(false);
             JOptionPane.showMessageDialog(null,"Phone no lenth exceedding !");
             return;
         }
         if((evt.getKeyChar()>='0')&&(evt.getKeyChar()<='9')||Character.isISOControl(evt.getKeyChar())){
           phoneno2TF.setEditable(true);
       }
       else
       {
           phoneno2TF.setEditable(false);
       }
         
    }//GEN-LAST:event_phoneno2TFKeyPressed


    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JTable eTable;
    private javax.swing.JTextField empId;
    private javax.swing.JTextField firstnameTF;
    private javax.swing.JButton jButton1;
    private javax.swing.JButton jButton2;
    private javax.swing.JButton jButton3;
    private javax.swing.JButton jButton4;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JLabel jLabel6;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JPanel jPanel2;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JTextField lastnameTF;
    private javax.swing.JTextField phoneno1TF;
    private javax.swing.JTextField phoneno2TF;
    // End of variables declaration//GEN-END:variables
}
