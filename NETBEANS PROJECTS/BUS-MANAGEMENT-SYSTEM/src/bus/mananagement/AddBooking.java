/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package bus.mananagement;
import java.awt.GridLayout;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;
import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.Date;
import javax.swing.JComboBox;
import javax.swing.JDesktopPane;
import javax.swing.JFrame;
import javax.swing.JLabel;

import javax.swing.JOptionPane;
import javax.swing.JPanel;

import javax.swing.JTable;
import javax.swing.*;

import javax.swing.table.DefaultTableModel;
import javax.swing.table.TableModel;

/**
 *
 * @author ratna
 */
public class AddBooking extends javax.swing.JInternalFrame {

    /**
     * Creates new form AddBooking
     */
    
    String luser;
    private SimpleDateFormat oDateFormat;
    public AddBooking( String loginuser) {
        initComponents();
        busSourceCBFillData();
        busDestinationCBFillData();
        this.luser=loginuser;
        int bookInt=getBooking_id();
        System.out.println("id"+bookInt);
        setBooking_id(bookInt);
        loadTable(); 
    }

    private AddBooking() {
     initComponents();
        busSourceCBFillData();
        busDestinationCBFillData();
        int bookInt=getBooking_id();
        setBooking_id(bookInt);
        loadTable(); 
    }

    public void busSourceCBFillData()
    {
        try{
            Class.forName("com.mysql.cj.jdbc.Driver");
            String databaseURL = "jdbc:mysql://localhost:3306/busm";
            Connection con = DriverManager.getConnection(databaseURL, "root", "root");
            Statement stat = con.createStatement();    
            String selectQuery="select distinct(bus_source) as bus_source from bus_details";
            ResultSet rs=stat.executeQuery(selectQuery);
             sourceCB.addItem(" Choose Source");
            while(rs.next())
            {
                sourceCB.addItem(rs.getString("bus_source"));
                
            }
                    
        
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
    
    public void busDestinationCBFillData()
    {
        try{
            Class.forName("com.mysql.jdbc.Driver");
            String databaseURL = "jdbc:mysql://localhost:3306/busm";
            Connection con = DriverManager.getConnection(databaseURL, "root", "root");
            Statement stat = con.createStatement();    
            String selectQuery="select distinct(bus_dest) as bus_dest  from bus_details";
            ResultSet rs=stat.executeQuery(selectQuery);
             destinationCB.addItem(" Choose Destination");
            while(rs.next())
            {
                destinationCB.addItem(rs.getString("bus_dest"));
                
            }
                    
        
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
}

    
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jPanel1 = new javax.swing.JPanel();
        sourceCB = new javax.swing.JComboBox<>();
        jLabel2 = new javax.swing.JLabel();
        busCB = new javax.swing.JComboBox<>();
        jLabel3 = new javax.swing.JLabel();
        jLabel4 = new javax.swing.JLabel();
        jButton2 = new javax.swing.JButton();
        UpdBtn = new javax.swing.JButton();
        jLabel5 = new javax.swing.JLabel();
        jScrollPane1 = new javax.swing.JScrollPane();
        bTable = new javax.swing.JTable();
        jLabel6 = new javax.swing.JLabel();
        jLabel8 = new javax.swing.JLabel();
        mobile_no = new javax.swing.JTextField();
        noOfSeat = new javax.swing.JTextField();
        jLabel9 = new javax.swing.JLabel();
        booking_id = new javax.swing.JTextField();
        jLabel10 = new javax.swing.JLabel();
        jLabel11 = new javax.swing.JLabel();
        avlSeat = new javax.swing.JTextField();
        jLabel12 = new javax.swing.JLabel();
        timetxt = new javax.swing.JTextField();
        jLabel13 = new javax.swing.JLabel();
        totalFareTxt = new javax.swing.JTextField();
        jPanel2 = new javax.swing.JPanel();
        jLabel1 = new javax.swing.JLabel();
        jLabel14 = new javax.swing.JLabel();
        jLabel7 = new javax.swing.JLabel();
        addBtn = new javax.swing.JButton();
        destinationCB = new javax.swing.JComboBox<>();
        jLabel15 = new javax.swing.JLabel();
        faretxt = new javax.swing.JTextField();
        departDate = new com.toedter.calendar.JDateChooser();
        customertxt = new javax.swing.JTextField();
        jLabel16 = new javax.swing.JLabel();

        setIconifiable(true);
        setMaximizable(true);
        setResizable(true);
        setTitle("Add  Booking Info");
        getContentPane().setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jPanel1.setBackground(new java.awt.Color(0, 153, 153));
        jPanel1.setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        sourceCB.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                sourceCBActionPerformed(evt);
            }
        });
        jPanel1.add(sourceCB, new org.netbeans.lib.awtextra.AbsoluteConstraints(250, 140, 163, 30));

        jLabel2.setFont(new java.awt.Font("Century Schoolbook", 1, 18)); // NOI18N
        jLabel2.setForeground(new java.awt.Color(255, 255, 255));
        jLabel2.setText(" Bus No");
        jPanel1.add(jLabel2, new org.netbeans.lib.awtextra.AbsoluteConstraints(440, 100, 90, -1));

        jPanel1.add(busCB, new org.netbeans.lib.awtextra.AbsoluteConstraints(550, 100, 163, 30));

        jLabel3.setFont(new java.awt.Font("Century Schoolbook", 1, 18)); // NOI18N
        jLabel3.setForeground(new java.awt.Color(255, 255, 255));
        jLabel3.setText("Destination");
        jPanel1.add(jLabel3, new org.netbeans.lib.awtextra.AbsoluteConstraints(440, 140, -1, -1));

        jLabel4.setFont(new java.awt.Font("Century Schoolbook", 1, 18)); // NOI18N
        jLabel4.setForeground(new java.awt.Color(255, 255, 255));
        jLabel4.setText("Date");
        jPanel1.add(jLabel4, new org.netbeans.lib.awtextra.AbsoluteConstraints(100, 260, 70, -1));

        jButton2.setFont(new java.awt.Font("Ubuntu", 1, 15)); // NOI18N
        jButton2.setText("Cancel Booking");
        jButton2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton2ActionPerformed(evt);
            }
        });
        jPanel1.add(jButton2, new org.netbeans.lib.awtextra.AbsoluteConstraints(530, 360, 150, 30));

        UpdBtn.setFont(new java.awt.Font("Ubuntu", 1, 15)); // NOI18N
        UpdBtn.setText("Update");
        UpdBtn.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                UpdBtnActionPerformed(evt);
            }
        });
        jPanel1.add(UpdBtn, new org.netbeans.lib.awtextra.AbsoluteConstraints(400, 360, 120, 30));

        jLabel5.setFont(new java.awt.Font("Century Schoolbook", 1, 18)); // NOI18N
        jLabel5.setForeground(new java.awt.Color(255, 255, 255));
        jLabel5.setText("Search Results");
        jPanel1.add(jLabel5, new org.netbeans.lib.awtextra.AbsoluteConstraints(50, 360, 156, 30));

        bTable.setBackground(new java.awt.Color(153, 153, 255));
        bTable.setForeground(new java.awt.Color(102, 102, 102));
        bTable.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {

            },
            new String [] {
                "Id", "Bus No", "Source", "Destination", "Customer Name", "Mobile No", "Time", "Date", "Seats", "Total Charge"
            }
        ) {
            boolean[] canEdit = new boolean [] {
                false, false, false, false, false, false, false, false, false, false
            };

            public boolean isCellEditable(int rowIndex, int columnIndex) {
                return canEdit [columnIndex];
            }
        });
        bTable.setFillsViewportHeight(true);
        bTable.setGridColor(new java.awt.Color(153, 0, 0));
        bTable.setShowGrid(true);
        bTable.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                bTableMouseClicked(evt);
            }
        });
        jScrollPane1.setViewportView(bTable);

        jPanel1.add(jScrollPane1, new org.netbeans.lib.awtextra.AbsoluteConstraints(30, 400, 770, 130));

        jLabel6.setFont(new java.awt.Font("Century Schoolbook", 1, 18)); // NOI18N
        jLabel6.setForeground(new java.awt.Color(255, 255, 255));
        jLabel6.setText("Availability");
        jPanel1.add(jLabel6, new org.netbeans.lib.awtextra.AbsoluteConstraints(100, 220, 130, -1));

        jLabel8.setFont(new java.awt.Font("Century Schoolbook", 1, 18)); // NOI18N
        jLabel8.setForeground(new java.awt.Color(255, 255, 255));
        jLabel8.setText("No. of Seat");
        jPanel1.add(jLabel8, new org.netbeans.lib.awtextra.AbsoluteConstraints(440, 220, 100, -1));

        mobile_no.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyPressed(java.awt.event.KeyEvent evt) {
                mobile_noKeyPressed(evt);
            }
        });
        jPanel1.add(mobile_no, new org.netbeans.lib.awtextra.AbsoluteConstraints(250, 300, 160, 30));

        noOfSeat.addFocusListener(new java.awt.event.FocusAdapter() {
            public void focusLost(java.awt.event.FocusEvent evt) {
                noOfSeatFocusLost(evt);
            }
        });
        noOfSeat.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                noOfSeatActionPerformed(evt);
            }
        });
        noOfSeat.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyPressed(java.awt.event.KeyEvent evt) {
                noOfSeatKeyPressed(evt);
            }
        });
        jPanel1.add(noOfSeat, new org.netbeans.lib.awtextra.AbsoluteConstraints(550, 220, 90, 30));

        jLabel9.setFont(new java.awt.Font("Century Schoolbook", 1, 18)); // NOI18N
        jLabel9.setForeground(new java.awt.Color(255, 255, 255));
        jLabel9.setText("Seats");
        jPanel1.add(jLabel9, new org.netbeans.lib.awtextra.AbsoluteConstraints(350, 220, 84, -1));

        booking_id.setEnabled(false);
        jPanel1.add(booking_id, new org.netbeans.lib.awtextra.AbsoluteConstraints(250, 100, 160, 30));

        jLabel10.setFont(new java.awt.Font("Century Schoolbook", 1, 18)); // NOI18N
        jLabel10.setForeground(new java.awt.Color(255, 255, 255));
        jLabel10.setText("Booking Id");
        jPanel1.add(jLabel10, new org.netbeans.lib.awtextra.AbsoluteConstraints(100, 100, 120, -1));

        jLabel11.setFont(new java.awt.Font("Century Schoolbook", 1, 18)); // NOI18N
        jLabel11.setForeground(new java.awt.Color(255, 255, 255));
        jLabel11.setText("Phone No");
        jPanel1.add(jLabel11, new org.netbeans.lib.awtextra.AbsoluteConstraints(100, 300, 150, -1));

        avlSeat.setEnabled(false);
        jPanel1.add(avlSeat, new org.netbeans.lib.awtextra.AbsoluteConstraints(250, 220, 90, 30));

        jLabel12.setFont(new java.awt.Font("Century Schoolbook", 1, 18)); // NOI18N
        jLabel12.setForeground(new java.awt.Color(255, 255, 255));
        jLabel12.setText("Source");
        jPanel1.add(jLabel12, new org.netbeans.lib.awtextra.AbsoluteConstraints(100, 140, 84, -1));

        timetxt.setEnabled(false);
        jPanel1.add(timetxt, new org.netbeans.lib.awtextra.AbsoluteConstraints(550, 180, 160, 30));

        jLabel13.setFont(new java.awt.Font("Century Schoolbook", 1, 18)); // NOI18N
        jLabel13.setForeground(new java.awt.Color(255, 255, 255));
        jLabel13.setText("Total Fare");
        jPanel1.add(jLabel13, new org.netbeans.lib.awtextra.AbsoluteConstraints(450, 300, 100, -1));

        totalFareTxt.setEnabled(false);
        jPanel1.add(totalFareTxt, new org.netbeans.lib.awtextra.AbsoluteConstraints(550, 300, 90, 30));

        jPanel2.setBackground(new java.awt.Color(0, 204, 204));
        jPanel2.setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jLabel1.setFont(new java.awt.Font("Algerian", 1, 36)); // NOI18N
        jLabel1.setForeground(new java.awt.Color(255, 255, 255));
        jLabel1.setText("Booking Details");
        jPanel2.add(jLabel1, new org.netbeans.lib.awtextra.AbsoluteConstraints(240, 20, 350, 40));

        jLabel14.setFont(new java.awt.Font("Century Schoolbook", 1, 18)); // NOI18N
        jLabel14.setForeground(new java.awt.Color(255, 255, 255));
        jLabel14.setText("Booking Id");
        jPanel2.add(jLabel14, new org.netbeans.lib.awtextra.AbsoluteConstraints(40, 90, 100, -1));

        jPanel1.add(jPanel2, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 0, 820, 80));

        jLabel7.setFont(new java.awt.Font("Century Schoolbook", 1, 18)); // NOI18N
        jLabel7.setForeground(new java.awt.Color(255, 255, 255));
        jLabel7.setText("Time");
        jPanel1.add(jLabel7, new org.netbeans.lib.awtextra.AbsoluteConstraints(440, 180, 70, -1));

        addBtn.setFont(new java.awt.Font("Ubuntu", 1, 15)); // NOI18N
        addBtn.setText("Add Booking");
        addBtn.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                addBtnActionPerformed(evt);
            }
        });
        jPanel1.add(addBtn, new org.netbeans.lib.awtextra.AbsoluteConstraints(240, 360, 140, 30));

        destinationCB.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                destinationCBActionPerformed(evt);
            }
        });
        jPanel1.add(destinationCB, new org.netbeans.lib.awtextra.AbsoluteConstraints(550, 140, 163, 30));

        jLabel15.setFont(new java.awt.Font("Century Schoolbook", 1, 18)); // NOI18N
        jLabel15.setForeground(new java.awt.Color(255, 255, 255));
        jLabel15.setText("Fare/Seat");
        jPanel1.add(jLabel15, new org.netbeans.lib.awtextra.AbsoluteConstraints(450, 260, 100, -1));

        faretxt.setEnabled(false);
        jPanel1.add(faretxt, new org.netbeans.lib.awtextra.AbsoluteConstraints(550, 260, 90, 30));

        departDate.setDateFormatString("yyyy-MM-dd");
        jPanel1.add(departDate, new org.netbeans.lib.awtextra.AbsoluteConstraints(250, 260, 160, 30));
        jPanel1.add(customertxt, new org.netbeans.lib.awtextra.AbsoluteConstraints(250, 180, 160, 30));

        jLabel16.setFont(new java.awt.Font("Century Schoolbook", 1, 18)); // NOI18N
        jLabel16.setForeground(new java.awt.Color(255, 255, 255));
        jLabel16.setText("Customer Name");
        jPanel1.add(jLabel16, new org.netbeans.lib.awtextra.AbsoluteConstraints(100, 180, 150, -1));

        getContentPane().add(jPanel1, new org.netbeans.lib.awtextra.AbsoluteConstraints(-10, 0, 820, 560));

        pack();
    }// </editor-fold>//GEN-END:initComponents
     
    
    public int getBooking_id(){
        try{
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection conn=DriverManager.getConnection("jdbc:mysql://localhost:3306/busm","root","root");
            String query="select booking_id from booking_details";
            Statement stmt=conn.createStatement(ResultSet.TYPE_SCROLL_INSENSITIVE,ResultSet.CONCUR_READ_ONLY);
            ResultSet rs=stmt.executeQuery(query);
            rs.last();
                 System.out.println(rs.getString(1));
            String booking_id=rs.getString("booking_id");
            if(booking_id.equals("")==false)
            {  
                int l=booking_id.length();
                String temp=booking_id.substring(3,l );
                System.out.println(temp);
                int bIntValue=Integer.parseInt(temp);
                return bIntValue+1;
            }
        }catch(Exception e){
            System.out.println(e.getMessage());
        }
        return 1;
    }
    
    public void setBooking_id(int x){
        booking_id.setText("BID"+x);
    }
    public void infoMessage(String message, String tittle) {
        JOptionPane.showMessageDialog(null, message, tittle, JOptionPane.INFORMATION_MESSAGE);
}
    
    
    private void UpdBtnActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_UpdBtnActionPerformed
      if(Integer.parseInt(avlSeat.getText())<Integer.parseInt(noOfSeat.getText())){
           JOptionPane.showMessageDialog(null,"Only "+avlSeat.getText()+" Seats are available. ");
           noOfSeat.setText("");
           noOfSeat.requestFocus(true);
           return;
       }
     
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            String databaseURL = "jdbc:mysql://localhost:3306/busm";
            Connection con = DriverManager.getConnection(databaseURL, "root", "root");
            String query="update booking_details set bus_no=?,source=?,destination=?,customer_name=?,time=?,date=?,no_of_seat=?,charge=?,total_charge=?,mobile_no=? where booking_id=?";
            PreparedStatement stat = con.prepareStatement(query);
            stat.setString(11,booking_id.getText());
             stat.setString(1,(String)busCB.getSelectedItem());
             stat.setString(2,(String)sourceCB.getSelectedItem());
             stat.setString(3,(String)destinationCB.getSelectedItem());
          
            stat.setString(4,customertxt.getText());
            stat.setString(5,timetxt.getText());
             DateFormat dateFormat = new SimpleDateFormat("yyyy-MM-dd");
              
            String tempD =dateFormat.format(departDate.getDate());
//            java.sql.Date sqlDate=new java.sql.Date(tempD);
            stat.setString(6,  tempD);
            JOptionPane.showMessageDialog(null,departDate.getDate().toString());
            stat.setInt(7,Integer.parseInt(noOfSeat.getText()));
            stat.setInt(8,Integer.parseInt(faretxt.getText()));
            stat.setInt(9,Integer.parseInt(totalFareTxt.getText()));
            stat.setString(10,mobile_no.getText());
           
           int i=stat.executeUpdate();
           if(i>0){
               JOptionPane.showMessageDialog(null,"Updated Successfully !");
           }
           else {
              JOptionPane.showMessageDialog(null,"Something went wrong !"); 
           }
         
            loadTable();    
       

       }catch(Exception e){
           System.out.println("Error"+e.getMessage());
       }
        
    }//GEN-LAST:event_UpdBtnActionPerformed

    private void jButton2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton2ActionPerformed
         DefaultTableModel model=(DefaultTableModel)bTable.getModel();
         int selectedIndex=bTable.getSelectedRow();
         String tempBId=model.getValueAt(selectedIndex, 0).toString();
      
        try{
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection conn=DriverManager.getConnection("jdbc:mysql://localhost:3306/busm","root","root");
            String query="delete  from booking_details where booking_id='"+tempBId+"'";
            PreparedStatement stmt=conn.prepareStatement(query);
            int i=stmt.executeUpdate();
            if(i>0){
                JOptionPane.showMessageDialog(null, i+" Booking Cancelled !");
                loadTable();
            }else{
                System.out.println("something went wrong !");
            }
        }catch(Exception e){
            System.out.println(e.getMessage());
        }
    }//GEN-LAST:event_jButton2ActionPerformed

    private void noOfSeatActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_noOfSeatActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_noOfSeatActionPerformed

     private void loadTable(){
           DefaultTableModel model=(DefaultTableModel)bTable.getModel();
           model.setRowCount(0);
           try {
               Class.forName("com.mysql.cj.jdbc.Driver");
               Connection conn=DriverManager.getConnection("jdbc:mysql://localhost:3306/busm","root","root");
               String query="select * from booking_details";
               Statement stmt=conn.createStatement();
               ResultSet rs=stmt.executeQuery(query);
               while(rs.next()){
                  model.addRow(new String[]{rs.getString(1),rs.getString(2),rs.getString(3),rs.getString(4),rs.getString(5),rs.getString(11),rs.getString(6),rs.getString(7),rs.getString(8),rs.getString(10)});
               }
               
           }catch(Exception e){
               System.out.println("Error while fetching:"+e.getMessage());
           }
     }
    private void addBtnActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_addBtnActionPerformed
       
        if(addBtn.getText().equals("New Booking")){
             clearFieldsValue();
             busSourceCBFillData();
        busDestinationCBFillData();
           
             int bookInt=getBooking_id();
        System.out.println("id"+bookInt);
        setBooking_id(bookInt);
        loadTable(); 
            
            addBtn.setText("Add Booking");
            
        }else {
        if(Integer.parseInt(avlSeat.getText())<Integer.parseInt(noOfSeat.getText())){
           JOptionPane.showMessageDialog(null,"Only "+avlSeat.getText()+" Seats are available. ");
           noOfSeat.setText("");
           noOfSeat.requestFocus(true);
           return;
       }
     try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            String databaseURL = "jdbc:mysql://localhost:3306/busm";
            Connection con = DriverManager.getConnection(databaseURL, "root", "root");
            //checking booking already exist or not
            String query="select booking_id from booking_details where booking_id='"+booking_id.getText()+"'";
            Statement st=con.createStatement();
            ResultSet rs=st.executeQuery(query);
            if(rs.next()){
                JOptionPane.showMessageDialog(null, "This Booking already Exists !");
                return;
            }
            String query1="insert into booking_details values(?,?,?,?,?,?,?,?,?,?,?)";
            PreparedStatement stat = con.prepareStatement(query1);
            stat.setString(1,booking_id.getText());
            stat.setString(2,(String)busCB.getSelectedItem());
            stat.setString(3,(String)sourceCB.getSelectedItem());
            stat.setString(4,(String)destinationCB.getSelectedItem());
          
            stat.setString(5,customertxt.getText());
            stat.setString(6,timetxt.getText());
            DateFormat dateFormat = new SimpleDateFormat("yyyy-MM-dd");
              
            String tempD =dateFormat.format(departDate.getDate());
            stat.setString(7,  tempD);
            JOptionPane.showMessageDialog(null,departDate.getDate().toString());
            stat.setInt(8,Integer.parseInt(noOfSeat.getText()));
            stat.setInt(9,Integer.parseInt(faretxt.getText()));
            stat.setInt(10,Integer.parseInt(totalFareTxt.getText()));
            stat.setString(11,mobile_no.getText());
           
           int i=stat.executeUpdate();
           if(i>0){
               JOptionPane.showMessageDialog(null,"Booking Confirmed !");
               addBtn.setText("New Booking");
               
           }
           else {
              JOptionPane.showMessageDialog(null,"Fields can't be Empty !"); 
           }
         loadTable();    
       }catch(Exception e){
           System.out.println("Error "+e.getMessage());
       }
      }
     
    }//GEN-LAST:event_addBtnActionPerformed

    private void sourceCBActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_sourceCBActionPerformed
         try{
             String temp_source=sourceCB.getSelectedItem().toString();
            Class.forName("com.mysql.jdbc.Driver");
            String databaseURL = "jdbc:mysql://localhost:3306/busm";
            Connection con = DriverManager.getConnection(databaseURL, "root", "root");
            Statement stat = con.createStatement();    
            String selectQuery="select bus_dest from bus_details where bus_source='"+temp_source+"'";
            ResultSet rs=stat.executeQuery(selectQuery);
            destinationCB.removeAllItems();
            destinationCB.addItem(" Choose Destination");
            while(rs.next())
            {
                destinationCB.addItem(rs.getString("bus_dest"));
                
            }
                    
        
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }//GEN-LAST:event_sourceCBActionPerformed
     private int getAvailableSeat(String bus_no,int tseat){
          int sum=tseat;
          try{
             String temp_source=sourceCB.getSelectedItem().toString();
            Class.forName("com.mysql.jdbc.Driver");
            String databaseURL = "jdbc:mysql://localhost:3306/busm";
            Connection con = DriverManager.getConnection(databaseURL, "root", "root");
            Statement stat = con.createStatement();    
            String selectQuery="select * from booking_details where bus_no='"+bus_no+"'";
            ResultSet rs=stat.executeQuery(selectQuery);
//            if(rs.next())
//            {
//                
//            }
            while(rs.next()){
                sum=sum-rs.getInt("no_of_seat");
            }
             }
        catch(Exception e)
        {
            System.out.println(e);
        }
         return sum;  
     }
    private void destinationCBActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_destinationCBActionPerformed
         try{
             String temp_source=sourceCB.getSelectedItem().toString();
             String temp_dest=destinationCB.getSelectedItem().toString();
             System.out.println(temp_dest+"  "+temp_source);
            Class.forName("com.mysql.jdbc.Driver");
            String databaseURL = "jdbc:mysql://localhost:3306/busm";
            Connection con = DriverManager.getConnection(databaseURL, "root", "root");
            
            Statement stat = con.createStatement();    
            String selectQuery="select * from bus_details where bus_source='"+temp_source+"' and bus_dest='"+temp_dest+"'";
            ResultSet rs=stat.executeQuery(selectQuery);
            busCB.removeAllItems();
            
                 rs.next();
                    System.out.println("fetching data from database ");
                    String bus_no=rs.getString(1);
                    String deptTime=rs.getString(6);
                    int fareperseat=rs.getInt(7);
                    busCB.addItem(bus_no);
                    timetxt.setText(deptTime);
               
                    faretxt.setText(fareperseat+"");
                    int tseat=rs.getInt("seatD");
                
               con.close();
               int availableseat=getAvailableSeat(busCB.getSelectedItem().toString(),tseat);
               avlSeat.setText(availableseat+"");
                    
        
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }//GEN-LAST:event_destinationCBActionPerformed

    private void noOfSeatKeyPressed(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_noOfSeatKeyPressed
       if((evt.getKeyChar()>='0')&&(evt.getKeyChar()<='9')||Character.isISOControl(evt.getKeyChar())){
           noOfSeat.setEditable(true);
       }
       else
       {
           noOfSeat.setEditable(false);
       }
    }//GEN-LAST:event_noOfSeatKeyPressed

    private void noOfSeatFocusLost(java.awt.event.FocusEvent evt) {//GEN-FIRST:event_noOfSeatFocusLost
         
        if(noOfSeat.getText().equals("")){
       
            totalFareTxt.setText("0"); 
        }
        else{
           
              int noS=Integer.parseInt(noOfSeat.getText());
           int price=Integer.parseInt(faretxt.getText());
                 totalFareTxt.setText(noS*price+"");
        
        }
    }//GEN-LAST:event_noOfSeatFocusLost

    private void bTableMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_bTableMouseClicked
       DefaultTableModel model=(DefaultTableModel)bTable.getModel();
       int selectedIndex=bTable.getSelectedRow();
       booking_id.setText(model.getValueAt(selectedIndex,0).toString());
       busCB.setSelectedItem(model.getValueAt(selectedIndex,1).toString());
       sourceCB.setSelectedItem(model.getValueAt(selectedIndex,2).toString());
       destinationCB.setSelectedItem(model.getValueAt(selectedIndex,3).toString());
       customertxt.setText(model.getValueAt(selectedIndex,4).toString());
       mobile_no.setText(model.getValueAt(selectedIndex,5).toString());
       timetxt.setText(model.getValueAt(selectedIndex,6).toString());
       noOfSeat.setText(model.getValueAt(selectedIndex,8).toString());
       totalFareTxt.setText(model.getValueAt(selectedIndex,9).toString());
       addBtn.setText("New Booking");
       
       
    }//GEN-LAST:event_bTableMouseClicked

    private void mobile_noKeyPressed(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_mobile_noKeyPressed
        // TODO add your handling code here:
        
         if(mobile_no.getText().toString().length()>10){
            mobile_no.setEditable(false);
             JOptionPane.showMessageDialog(null,"Phone no lenth exceedding !");
             return;
         }
        if((evt.getKeyChar()>='0')&&(evt.getKeyChar()<='9')||Character.isISOControl(evt.getKeyChar())){
           mobile_no.setEditable(true);
       }
       else
       {
           mobile_no.setEditable(false);
       }
    }//GEN-LAST:event_mobile_noKeyPressed

     public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(AdminLogin.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(AdminLogin.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(AdminLogin.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(AdminLogin.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new AddBooking().setVisible(true);
            }
        });
    }
    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton UpdBtn;
    private javax.swing.JButton addBtn;
    private javax.swing.JTextField avlSeat;
    private javax.swing.JTable bTable;
    private javax.swing.JTextField booking_id;
    private javax.swing.JComboBox<String> busCB;
    private javax.swing.JTextField customertxt;
    private com.toedter.calendar.JDateChooser departDate;
    private javax.swing.JComboBox<String> destinationCB;
    private javax.swing.JTextField faretxt;
    private javax.swing.JButton jButton2;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel10;
    private javax.swing.JLabel jLabel11;
    private javax.swing.JLabel jLabel12;
    private javax.swing.JLabel jLabel13;
    private javax.swing.JLabel jLabel14;
    private javax.swing.JLabel jLabel15;
    private javax.swing.JLabel jLabel16;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JLabel jLabel6;
    private javax.swing.JLabel jLabel7;
    private javax.swing.JLabel jLabel8;
    private javax.swing.JLabel jLabel9;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JPanel jPanel2;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JTextField mobile_no;
    private javax.swing.JTextField noOfSeat;
    private javax.swing.JComboBox<String> sourceCB;
    private javax.swing.JTextField timetxt;
    private javax.swing.JTextField totalFareTxt;
    // End of variables declaration//GEN-END:variables

    private void clearFieldsValue() {
        busCB.removeAllItems();
        sourceCB.removeAllItems();
        destinationCB.removeAllItems();
        customertxt.setText("");
        timetxt.setText("");
        avlSeat.setText("");
        noOfSeat.setText("");
        mobile_no.setText("");
        faretxt.setText("");
        totalFareTxt.setText("");
    }
}
