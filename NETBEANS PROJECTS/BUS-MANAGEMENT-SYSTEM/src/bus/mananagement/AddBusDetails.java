/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package bus.mananagement;

import java.awt.Image;
import java.sql.Connection;
import java.sql.Date;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;
import java.text.SimpleDateFormat;
import javax.swing.ImageIcon;
import javax.swing.JOptionPane;
import javax.swing.table.DefaultTableModel;

/**
 *
 * @author ratna
 */
public class AddBusDetails extends javax.swing.JInternalFrame {
     
    public static Connection connection(){
       Connection con=null;
        try{
            Class.forName("com.mysql.cj.jdbc.Driver");
            con=DriverManager.getConnection("jdbc:mysql://localhost:3306/busm","root","root");
     }catch(Exception ex){
         System.out.println(ex.getMessage());
     }     
    return con; 
    }
    public void loadTable(){
         try{
        Connection con=connection();
       DefaultTableModel model=(DefaultTableModel)bTable.getModel();
       Statement st=con.createStatement();
       String query="Select * from bus_details";
       ResultSet rs=st.executeQuery(query);
       while(rs.next()){
           model.addRow(new String[]{rs.getString("bus_no"),rs.getString("bus_source"),rs.getString("bus_dest"),rs.getString("stopA"),rs.getString("stopB"),rs.getString("stopC"),rs.getString("departDate"),rs.getString("departTimeD"),rs.getString("busMoveD"),rs.getString("priceD"),rs.getString("seatD")});
       }
    }catch(Exception ex){
            System.out.println(ex.getMessage());
            }
       
    }
    public AddBusDetails() {
        initComponents();
       // scaledImage();
      loadTable();
    }
//     public void scaledImage(){
//      ImageIcon icon=new ImageIcon("C:\\Users\\Lenovo\\Desktop\\project img\\dashbord.jpg");
//        Image img=icon.getImage();
//        Image scaledImg=img.getScaledInstance(backlbl.getWidth(),backlbl.getHeight(),Image.SCALE_SMOOTH);
//        ImageIcon scaledIcon=new ImageIcon(scaledImg);
//        backlbl.setIcon(scaledIcon);
//        
//  }

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jPanel3 = new javax.swing.JPanel();
        jLabel1 = new javax.swing.JLabel();
        jInternalFrame1 = new javax.swing.JInternalFrame();
        jLabel15 = new javax.swing.JLabel();
        jLabel16 = new javax.swing.JLabel();
        jLabel17 = new javax.swing.JLabel();
        jLabel18 = new javax.swing.JLabel();
        jButton3 = new javax.swing.JButton();
        jButton4 = new javax.swing.JButton();
        bus_noTF1 = new javax.swing.JTextField();
        bus_sourceTF1 = new javax.swing.JTextField();
        bus_destTF1 = new javax.swing.JTextField();
        jLabel19 = new javax.swing.JLabel();
        jLabel20 = new javax.swing.JLabel();
        jLabel21 = new javax.swing.JLabel();
        jLabel22 = new javax.swing.JLabel();
        deratTimeTF1 = new javax.swing.JTextField();
        priceTF1 = new javax.swing.JTextField();
        seatTF1 = new javax.swing.JTextField();
        jLabel23 = new javax.swing.JLabel();
        moveCB1 = new javax.swing.JComboBox<>();
        jLabel24 = new javax.swing.JLabel();
        jLabel25 = new javax.swing.JLabel();
        jLabel26 = new javax.swing.JLabel();
        stop4 = new javax.swing.JTextField();
        stop5 = new javax.swing.JTextField();
        stop6 = new javax.swing.JTextField();
        busTDate1 = new com.toedter.calendar.JDateChooser();
        jLabel27 = new javax.swing.JLabel();
        jLabel28 = new javax.swing.JLabel();
        jPanel1 = new javax.swing.JPanel();
        jLabel2 = new javax.swing.JLabel();
        bus_noTF = new javax.swing.JTextField();
        jLabel3 = new javax.swing.JLabel();
        bus_sourceTF = new javax.swing.JTextField();
        jLabel4 = new javax.swing.JLabel();
        bus_destTF = new javax.swing.JTextField();
        stop1 = new javax.swing.JTextField();
        jLabel10 = new javax.swing.JLabel();
        jLabel11 = new javax.swing.JLabel();
        stop2 = new javax.swing.JTextField();
        jLabel12 = new javax.swing.JLabel();
        stop3 = new javax.swing.JTextField();
        busTDate = new com.toedter.calendar.JDateChooser();
        jLabel5 = new javax.swing.JLabel();
        departTimeTF = new javax.swing.JTextField();
        jLabel6 = new javax.swing.JLabel();
        jLabel9 = new javax.swing.JLabel();
        moveCB = new javax.swing.JComboBox<>();
        jLabel7 = new javax.swing.JLabel();
        priceTF = new javax.swing.JTextField();
        jLabel8 = new javax.swing.JLabel();
        seatTF = new javax.swing.JTextField();
        addBtn = new javax.swing.JButton();
        rstBtn = new javax.swing.JButton();
        jLabel14 = new javax.swing.JLabel();
        jLabel13 = new javax.swing.JLabel();
        jLabel30 = new javax.swing.JLabel();
        jLabel31 = new javax.swing.JLabel();
        updateBtn = new javax.swing.JButton();
        dltBtn = new javax.swing.JButton();
        jScrollPane1 = new javax.swing.JScrollPane();
        bTable = new javax.swing.JTable();
        jPanel2 = new javax.swing.JPanel();

        setBackground(new java.awt.Color(0, 204, 204));
        setClosable(true);
        setIconifiable(true);
        setMaximizable(true);
        setResizable(true);
        setTitle("Add Bus Details");
        getContentPane().setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jPanel3.setBackground(new java.awt.Color(0, 102, 102));
        jPanel3.setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jLabel1.setFont(new java.awt.Font("Algerian", 1, 36)); // NOI18N
        jLabel1.setForeground(new java.awt.Color(255, 255, 255));
        jLabel1.setText("Add Bus Details");
        jPanel3.add(jLabel1, new org.netbeans.lib.awtextra.AbsoluteConstraints(280, 20, 330, 50));

        getContentPane().add(jPanel3, new org.netbeans.lib.awtextra.AbsoluteConstraints(-10, 0, 860, 90));

        jInternalFrame1.setIconifiable(true);
        jInternalFrame1.setMaximizable(true);
        jInternalFrame1.setResizable(true);
        jInternalFrame1.setTitle("Add Bus Details");

        jLabel15.setFont(new java.awt.Font("Ubuntu", 1, 24)); // NOI18N
        jLabel15.setText("Add Bus Details");

        jLabel16.setFont(new java.awt.Font("Ubuntu", 1, 18)); // NOI18N
        jLabel16.setText("Bus No.");

        jLabel17.setFont(new java.awt.Font("Ubuntu", 1, 18)); // NOI18N
        jLabel17.setText("Source");

        jLabel18.setFont(new java.awt.Font("Ubuntu", 1, 18)); // NOI18N
        jLabel18.setText("Destination");

        jButton3.setFont(new java.awt.Font("Ubuntu", 1, 18)); // NOI18N
        jButton3.setText("Save");
        jButton3.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton3ActionPerformed(evt);
            }
        });

        jButton4.setFont(new java.awt.Font("Ubuntu", 1, 18)); // NOI18N
        jButton4.setText("Reset");
        jButton4.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton4ActionPerformed(evt);
            }
        });

        bus_noTF1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                bus_noTF1ActionPerformed(evt);
            }
        });

        jLabel19.setFont(new java.awt.Font("Ubuntu", 1, 18)); // NOI18N
        jLabel19.setText("Date");

        jLabel20.setFont(new java.awt.Font("Ubuntu", 1, 18)); // NOI18N
        jLabel20.setText("Time");

        jLabel21.setFont(new java.awt.Font("Ubuntu", 1, 18)); // NOI18N
        jLabel21.setText("Price");

        jLabel22.setFont(new java.awt.Font("Ubuntu", 1, 18)); // NOI18N
        jLabel22.setText("Seat");

        jLabel23.setFont(new java.awt.Font("Ubuntu", 1, 18)); // NOI18N
        jLabel23.setText("Movement");

        moveCB1.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "North", "South", "East", "West", "Central" }));

        jLabel24.setFont(new java.awt.Font("Ubuntu", 1, 15)); // NOI18N
        jLabel24.setText("Stop1");

        jLabel25.setFont(new java.awt.Font("Ubuntu", 1, 15)); // NOI18N
        jLabel25.setText("Stop2");

        jLabel26.setFont(new java.awt.Font("Ubuntu", 1, 15)); // NOI18N
        jLabel26.setText("Stop3");

        stop4.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                stop4ActionPerformed(evt);
            }
        });

        jLabel27.setForeground(new java.awt.Color(255, 0, 0));
        jLabel27.setText("*");

        jLabel28.setForeground(new java.awt.Color(255, 0, 0));
        jLabel28.setText("*");

        javax.swing.GroupLayout jInternalFrame1Layout = new javax.swing.GroupLayout(jInternalFrame1.getContentPane());
        jInternalFrame1.getContentPane().setLayout(jInternalFrame1Layout);
        jInternalFrame1Layout.setHorizontalGroup(
            jInternalFrame1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jInternalFrame1Layout.createSequentialGroup()
                .addGroup(jInternalFrame1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jInternalFrame1Layout.createSequentialGroup()
                        .addGap(225, 225, 225)
                        .addGroup(jInternalFrame1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                            .addComponent(jButton3, javax.swing.GroupLayout.PREFERRED_SIZE, 109, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addGroup(jInternalFrame1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                                .addComponent(jLabel22, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                .addComponent(jLabel21, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, 59, Short.MAX_VALUE)
                                .addComponent(jLabel20, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                .addComponent(jLabel19, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))))
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jInternalFrame1Layout.createSequentialGroup()
                        .addContainerGap()
                        .addGroup(jInternalFrame1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jLabel23, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.PREFERRED_SIZE, 111, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jInternalFrame1Layout.createSequentialGroup()
                                .addComponent(jLabel17, javax.swing.GroupLayout.PREFERRED_SIZE, 91, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addGap(74, 74, 74)))))
                .addGroup(jInternalFrame1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addGroup(jInternalFrame1Layout.createSequentialGroup()
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addGroup(jInternalFrame1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                            .addGroup(jInternalFrame1Layout.createSequentialGroup()
                                .addComponent(jButton4, javax.swing.GroupLayout.PREFERRED_SIZE, 97, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addGap(409, 409, 409))
                            .addGroup(jInternalFrame1Layout.createSequentialGroup()
                                .addComponent(jLabel18, javax.swing.GroupLayout.PREFERRED_SIZE, 149, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(bus_destTF1, javax.swing.GroupLayout.PREFERRED_SIZE, 190, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addGap(86, 86, 86))))
                    .addGroup(javax.swing.GroupLayout.Alignment.LEADING, jInternalFrame1Layout.createSequentialGroup()
                        .addGap(55, 55, 55)
                        .addGroup(jInternalFrame1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                            .addGroup(jInternalFrame1Layout.createSequentialGroup()
                                .addComponent(deratTimeTF1)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(jLabel27))
                            .addComponent(priceTF1)
                            .addComponent(seatTF1)
                            .addComponent(moveCB1, 0, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(busTDate1, javax.swing.GroupLayout.DEFAULT_SIZE, 290, Short.MAX_VALUE))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(jLabel28)
                        .addContainerGap())))
            .addGroup(jInternalFrame1Layout.createSequentialGroup()
                .addGroup(jInternalFrame1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jInternalFrame1Layout.createSequentialGroup()
                        .addGap(342, 342, 342)
                        .addComponent(jLabel16)
                        .addGap(27, 27, 27)
                        .addComponent(bus_noTF1, javax.swing.GroupLayout.PREFERRED_SIZE, 214, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(jInternalFrame1Layout.createSequentialGroup()
                        .addGap(373, 373, 373)
                        .addComponent(jLabel15, javax.swing.GroupLayout.PREFERRED_SIZE, 192, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(jInternalFrame1Layout.createSequentialGroup()
                        .addGap(26, 26, 26)
                        .addGroup(jInternalFrame1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                            .addComponent(bus_sourceTF1, javax.swing.GroupLayout.PREFERRED_SIZE, 199, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addGroup(jInternalFrame1Layout.createSequentialGroup()
                                .addComponent(jLabel24, javax.swing.GroupLayout.PREFERRED_SIZE, 66, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addGap(26, 26, 26)
                                .addComponent(stop4, javax.swing.GroupLayout.PREFERRED_SIZE, 114, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addGap(42, 42, 42)
                                .addComponent(jLabel25, javax.swing.GroupLayout.PREFERRED_SIZE, 70, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addGap(29, 29, 29)
                                .addComponent(stop5, javax.swing.GroupLayout.PREFERRED_SIZE, 114, javax.swing.GroupLayout.PREFERRED_SIZE)))
                        .addGap(79, 79, 79)
                        .addComponent(jLabel26, javax.swing.GroupLayout.PREFERRED_SIZE, 84, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(18, 18, 18)
                        .addComponent(stop6, javax.swing.GroupLayout.PREFERRED_SIZE, 137, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );
        jInternalFrame1Layout.setVerticalGroup(
            jInternalFrame1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jInternalFrame1Layout.createSequentialGroup()
                .addGap(7, 7, 7)
                .addComponent(jLabel15, javax.swing.GroupLayout.PREFERRED_SIZE, 26, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(jInternalFrame1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(bus_noTF1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabel16))
                .addGap(15, 15, 15)
                .addGroup(jInternalFrame1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel17)
                    .addComponent(bus_sourceTF1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabel18)
                    .addComponent(bus_destTF1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(12, 12, 12)
                .addGroup(jInternalFrame1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(stop6, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabel26)
                    .addComponent(stop5, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabel25)
                    .addComponent(stop4, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabel24, javax.swing.GroupLayout.PREFERRED_SIZE, 27, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(jInternalFrame1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel23, javax.swing.GroupLayout.PREFERRED_SIZE, 39, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(moveCB1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(jInternalFrame1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jLabel19, javax.swing.GroupLayout.PREFERRED_SIZE, 28, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addGroup(jInternalFrame1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                        .addComponent(jLabel28)
                        .addComponent(busTDate1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(jInternalFrame1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel20)
                    .addComponent(deratTimeTF1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabel27))
                .addGap(11, 11, 11)
                .addGroup(jInternalFrame1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addComponent(jLabel21)
                    .addComponent(priceTF1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(22, 22, 22)
                .addGroup(jInternalFrame1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel22)
                    .addComponent(seatTF1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addGroup(jInternalFrame1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jButton3, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jButton4, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(21, 21, 21))
        );

        getContentPane().add(jInternalFrame1, new org.netbeans.lib.awtextra.AbsoluteConstraints(420, 268, 0, 0));

        jPanel1.setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jLabel2.setFont(new java.awt.Font("Ubuntu", 1, 18)); // NOI18N
        jLabel2.setText("Bus No.");
        jPanel1.add(jLabel2, new org.netbeans.lib.awtextra.AbsoluteConstraints(110, 30, 102, -1));

        bus_noTF.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                bus_noTFActionPerformed(evt);
            }
        });
        jPanel1.add(bus_noTF, new org.netbeans.lib.awtextra.AbsoluteConstraints(210, 30, 160, -1));

        jLabel3.setFont(new java.awt.Font("Ubuntu", 1, 18)); // NOI18N
        jLabel3.setText("Source");
        jPanel1.add(jLabel3, new org.netbeans.lib.awtextra.AbsoluteConstraints(110, 60, 102, -1));

        bus_sourceTF.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                bus_sourceTFActionPerformed(evt);
            }
        });
        jPanel1.add(bus_sourceTF, new org.netbeans.lib.awtextra.AbsoluteConstraints(210, 60, 160, -1));

        jLabel4.setFont(new java.awt.Font("Ubuntu", 1, 18)); // NOI18N
        jLabel4.setText("Destination");
        jPanel1.add(jLabel4, new org.netbeans.lib.awtextra.AbsoluteConstraints(390, 60, 109, -1));
        jPanel1.add(bus_destTF, new org.netbeans.lib.awtextra.AbsoluteConstraints(520, 60, 212, -1));

        stop1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                stop1ActionPerformed(evt);
            }
        });
        jPanel1.add(stop1, new org.netbeans.lib.awtextra.AbsoluteConstraints(210, 90, 114, -1));

        jLabel10.setFont(new java.awt.Font("Ubuntu", 1, 15)); // NOI18N
        jLabel10.setText("Stop1");
        jPanel1.add(jLabel10, new org.netbeans.lib.awtextra.AbsoluteConstraints(110, 90, 102, 27));

        jLabel11.setFont(new java.awt.Font("Ubuntu", 1, 15)); // NOI18N
        jLabel11.setText("Stop2");
        jPanel1.add(jLabel11, new org.netbeans.lib.awtextra.AbsoluteConstraints(350, 90, -1, -1));
        jPanel1.add(stop2, new org.netbeans.lib.awtextra.AbsoluteConstraints(390, 90, 131, -1));

        jLabel12.setFont(new java.awt.Font("Ubuntu", 1, 15)); // NOI18N
        jLabel12.setText("Stop3");
        jPanel1.add(jLabel12, new org.netbeans.lib.awtextra.AbsoluteConstraints(540, 90, -1, -1));
        jPanel1.add(stop3, new org.netbeans.lib.awtextra.AbsoluteConstraints(590, 90, 149, -1));

        busTDate.addFocusListener(new java.awt.event.FocusAdapter() {
            public void focusLost(java.awt.event.FocusEvent evt) {
                busTDateFocusLost(evt);
            }
        });
        busTDate.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                busTDateMouseClicked(evt);
            }
        });
        busTDate.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyPressed(java.awt.event.KeyEvent evt) {
                busTDateKeyPressed(evt);
            }
        });
        jPanel1.add(busTDate, new org.netbeans.lib.awtextra.AbsoluteConstraints(210, 130, 148, -1));

        jLabel5.setFont(new java.awt.Font("Ubuntu", 1, 18)); // NOI18N
        jLabel5.setText("Date");
        jPanel1.add(jLabel5, new org.netbeans.lib.awtextra.AbsoluteConstraints(110, 130, 89, 28));
        jPanel1.add(departTimeTF, new org.netbeans.lib.awtextra.AbsoluteConstraints(460, 130, 76, -1));

        jLabel6.setFont(new java.awt.Font("Ubuntu", 1, 18)); // NOI18N
        jLabel6.setText("Time");
        jPanel1.add(jLabel6, new org.netbeans.lib.awtextra.AbsoluteConstraints(400, 130, 59, -1));

        jLabel9.setFont(new java.awt.Font("Ubuntu", 1, 18)); // NOI18N
        jLabel9.setText("Movement");
        jPanel1.add(jLabel9, new org.netbeans.lib.awtextra.AbsoluteConstraints(110, 160, 160, 26));

        moveCB.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "North", "South", "East", "West", "Central" }));
        jPanel1.add(moveCB, new org.netbeans.lib.awtextra.AbsoluteConstraints(210, 160, 113, -1));

        jLabel7.setFont(new java.awt.Font("Ubuntu", 1, 18)); // NOI18N
        jLabel7.setText("Price");
        jPanel1.add(jLabel7, new org.netbeans.lib.awtextra.AbsoluteConstraints(400, 160, 59, -1));

        priceTF.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                priceTFActionPerformed(evt);
            }
        });
        jPanel1.add(priceTF, new org.netbeans.lib.awtextra.AbsoluteConstraints(460, 160, 137, -1));

        jLabel8.setFont(new java.awt.Font("Ubuntu", 1, 18)); // NOI18N
        jLabel8.setText("Seat");
        jPanel1.add(jLabel8, new org.netbeans.lib.awtextra.AbsoluteConstraints(590, 130, -1, -1));

        seatTF.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyPressed(java.awt.event.KeyEvent evt) {
                seatTFKeyPressed(evt);
            }
        });
        jPanel1.add(seatTF, new org.netbeans.lib.awtextra.AbsoluteConstraints(645, 130, 90, -1));

        addBtn.setFont(new java.awt.Font("Ubuntu", 1, 18)); // NOI18N
        addBtn.setText("New");
        addBtn.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                addBtnActionPerformed(evt);
            }
        });
        jPanel1.add(addBtn, new org.netbeans.lib.awtextra.AbsoluteConstraints(110, 210, 79, -1));

        rstBtn.setFont(new java.awt.Font("Ubuntu", 1, 18)); // NOI18N
        rstBtn.setText("Reset");
        rstBtn.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                rstBtnActionPerformed(evt);
            }
        });
        jPanel1.add(rstBtn, new org.netbeans.lib.awtextra.AbsoluteConstraints(500, 210, -1, -1));

        jLabel14.setForeground(new java.awt.Color(255, 0, 0));
        jLabel14.setText("*");
        jPanel1.add(jLabel14, new org.netbeans.lib.awtextra.AbsoluteConstraints(646, 38, 36, -1));

        jLabel13.setForeground(new java.awt.Color(255, 0, 0));
        jLabel13.setText("*");
        jPanel1.add(jLabel13, new org.netbeans.lib.awtextra.AbsoluteConstraints(646, 107, -1, -1));

        jLabel30.setForeground(new java.awt.Color(255, 0, 0));
        jLabel30.setText("*");
        jPanel1.add(jLabel30, new org.netbeans.lib.awtextra.AbsoluteConstraints(511, 140, -1, -1));

        jLabel31.setForeground(new java.awt.Color(255, 0, 0));
        jLabel31.setText("*");
        jPanel1.add(jLabel31, new org.netbeans.lib.awtextra.AbsoluteConstraints(284, 6, -1, -1));

        updateBtn.setFont(new java.awt.Font("Segoe UI", 1, 18)); // NOI18N
        updateBtn.setText("Update");
        updateBtn.setPreferredSize(new java.awt.Dimension(79, 33));
        updateBtn.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                updateBtnActionPerformed(evt);
            }
        });
        jPanel1.add(updateBtn, new org.netbeans.lib.awtextra.AbsoluteConstraints(190, 210, 100, -1));

        dltBtn.setFont(new java.awt.Font("Segoe UI", 1, 18)); // NOI18N
        dltBtn.setText("Delete");
        dltBtn.setPreferredSize(new java.awt.Dimension(79, 33));
        dltBtn.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                dltBtnActionPerformed(evt);
            }
        });
        jPanel1.add(dltBtn, new org.netbeans.lib.awtextra.AbsoluteConstraints(300, 210, 103, -1));

        getContentPane().add(jPanel1, new org.netbeans.lib.awtextra.AbsoluteConstraints(8, 260, 820, 270));

        bTable.setBackground(new java.awt.Color(204, 204, 255));
        bTable.setBorder(javax.swing.BorderFactory.createMatteBorder(1, 1, 1, 1, new java.awt.Color(255, 153, 153)));
        bTable.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {

            },
            new String [] {
                "Bus No", "Source", "Destination", "Stop1", "Stop2", "Stop3", "Date", "Time", "Movement", "Price", "Seat"
            }
        ) {
            boolean[] canEdit = new boolean [] {
                false, false, false, false, false, false, false, false, false, false, false
            };

            public boolean isCellEditable(int rowIndex, int columnIndex) {
                return canEdit [columnIndex];
            }
        });
        bTable.setShowGrid(true);
        bTable.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                bTableMouseClicked(evt);
            }
        });
        jScrollPane1.setViewportView(bTable);

        getContentPane().add(jScrollPane1, new org.netbeans.lib.awtextra.AbsoluteConstraints(10, 100, 820, 150));

        jPanel2.setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());
        getContentPane().add(jPanel2, new org.netbeans.lib.awtextra.AbsoluteConstraints(50, 0, -1, 90));

        setBounds(0, 0, 854, 574);
    }// </editor-fold>//GEN-END:initComponents

    public void clearFieldValue() {
        bus_noTF.setText("");
        bus_sourceTF.setText("");
        bus_destTF.setText("");

        departTimeTF.setText("");
        priceTF.setText("");
        seatTF.setText("");
        stop1.setText("");
        stop2.setText("");
        stop3.setText("");
    }

    public void infoMessage(String message, String tittle) {
        JOptionPane.showMessageDialog(null, message, tittle, JOptionPane.INFORMATION_MESSAGE);
    }
    private void jButton3ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton3ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_jButton3ActionPerformed

    private void jButton4ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton4ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_jButton4ActionPerformed

    private void bus_noTF1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_bus_noTF1ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_bus_noTF1ActionPerformed

    private void stop4ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_stop4ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_stop4ActionPerformed

    private void rstBtnActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_rstBtnActionPerformed

       clearFieldsValue();
       
       enableAllBtn();
        addBtn.setText("New");
        

    }//GEN-LAST:event_rstBtnActionPerformed
  public void clearFieldsValue(){
       bus_noTF.setText("");
        bus_sourceTF.setText("");
        bus_destTF.setText("");
        departTimeTF.setText("");
        priceTF.setText("");
        seatTF.setText("");
        stop1.setText("");
        stop2.setText("");
        stop3.setText("");
  }
    public void enableAllBtn(){
         updateBtn.setEnabled(true);
        dltBtn.setEnabled(true);
        addBtn.setEnabled(true);
    }
    private void addBtnActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_addBtnActionPerformed
        if("New".equals(addBtn.getText())){
        updateBtn.setEnabled(false);
        dltBtn.setEnabled(false);
        addBtn.setText("Add");}
        else{
        java.util.Date departDateD = busTDate.getDate();
        if(bus_noTF.getText().equals("")){
            JOptionPane.showMessageDialog(this, "Bus No can not be empty !!");

        }
        else if (departDateD==null) {
            JOptionPane.showMessageDialog(this, "Date can not be empty !!");

        } else
        {
            oDateFormat = new SimpleDateFormat("yyyy-MM-dd");
            String departDate = oDateFormat.format(departDateD);
            String departTimeD = departTimeTF.getText();
            String busnoD = bus_noTF.getText();
            String busMoveD = (String) moveCB.getSelectedItem();
            String bussourceD = bus_sourceTF.getText();
            String busdestD = bus_destTF.getText();
            String priceD = priceTF.getText();
            String seatD = seatTF.getText();
            String stopA = stop1.getText();
            String stopB = stop2.getText();
            String stopC = stop3.getText();

            try {

                Class.forName("com.mysql.cj.jdbc.Driver");
                String databaseURL = "jdbc:mysql://localhost:3306/busm";
                Connection con = DriverManager.getConnection(databaseURL, "root", "root");
                Statement stat = con.createStatement();
                String selectQuery = "select * from bus_details where bus_no='" + busnoD + "'";

                ResultSet rs = stat.executeQuery(selectQuery);

                if (rs.next() == true) {
                    JOptionPane.showMessageDialog(this, "Already Bus Details is Added ! Please Change Bus No !!");

                    clearFieldValue();
                } else {
                    String insertQuery = "insert into bus_details values('" + busnoD + "','" + busMoveD + "','" + bussourceD + "','" + busdestD + "','" + departDate + "','" + departTimeD + "','" + priceD + "','" + seatD + "','" + stopA + "','" + stopB + "','" + stopC + "')";

                    stat.executeUpdate(insertQuery);
                    JOptionPane.showMessageDialog(this, "Bus Details is Added !!");
                    DefaultTableModel model=(DefaultTableModel)bTable.getModel();
                    model.setRowCount(0);
                    loadTable();

                    clearFieldValue();

                }
            } catch (Exception e) {

                // JOptionPane.showMessageDialog(this,"ERROR "+e);
                System.out.println(e);
            }
        }
        }
    }//GEN-LAST:event_addBtnActionPerformed

    private void priceTFActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_priceTFActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_priceTFActionPerformed

    private void stop1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_stop1ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_stop1ActionPerformed

    private void bus_sourceTFActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_bus_sourceTFActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_bus_sourceTFActionPerformed

    private void bus_noTFActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_bus_noTFActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_bus_noTFActionPerformed

    private void bTableMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_bTableMouseClicked
       DefaultTableModel model=(DefaultTableModel)bTable.getModel();
       int selectedIndex=bTable.getSelectedRow();
      // System.out.println(selectedIndex);
            bus_noTF.setText(model.getValueAt(selectedIndex,0).toString());
            bus_sourceTF.setText(model.getValueAt(selectedIndex,1).toString());
            bus_destTF.setText(model.getValueAt(selectedIndex,2).toString());
             stop1.setText(model.getValueAt(selectedIndex,3).toString());
            stop2.setText(model.getValueAt(selectedIndex,4).toString());
            stop3.setText(model.getValueAt(selectedIndex,5).toString());
            String d=model.getValueAt(selectedIndex,6).toString();
             departTimeTF.setText(model.getValueAt(selectedIndex,7).toString());
            moveCB.setSelectedItem(model.getValueAt(selectedIndex,8).toString());  //
             priceTF.setText(model.getValueAt(selectedIndex,9).toString());
            seatTF.setText(model.getValueAt(selectedIndex,10).toString());
            try{
            Date date= (Date) new SimpleDateFormat("yyyy-mm-dd").parse(d);
           busTDate.setDate(date);
            }catch(Exception e){
                System.out.println(e.getMessage());
            } 
          
            


    }//GEN-LAST:event_bTableMouseClicked

    private void updateBtnActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_updateBtnActionPerformed
        Connection con=connection();
        String query="update bus_details set busMoveD=?,bus_source=?, bus_dest=?, departDate=?, departTimeD=?, priceD=?, seatD=?, stopA=?, stopB=?, stopC=?, bus_no=? where bus_no=? ";
       DefaultTableModel model=(DefaultTableModel)bTable.getModel();
       int selectedIndex=bTable.getSelectedRow();
       String d=model.getValueAt(selectedIndex,6).toString();
       String bus_id=model.getValueAt(selectedIndex,0).toString();
        
        try{
        PreparedStatement st=con.prepareStatement(query);
        st.setString(1,moveCB.getSelectedItem().toString());
        st.setString(2,bus_sourceTF.getText());
        st.setString(3,bus_destTF.getText());
       
        st.setString(4,d);
      
          st.setString(5,departTimeTF.getText());
          st.setString(6, priceTF.getText());
          st.setString(7, seatTF.getText());
          st.setString(8, stop1.getText());
          st.setString(9, stop2.getText());
          st.setString(10, stop3.getText());
          st.setString(11, bus_noTF.getText());
          st.setString(12, bus_id);

         int i=st.executeUpdate();
         JOptionPane.showMessageDialog(null, i+" Row Updated ! ");
       }catch(Exception ex){
           System.out.println(" Error:"+ex.getMessage());
       }
        model.setRowCount(0);
        bTable.revalidate();
        loadTable();
        
    }//GEN-LAST:event_updateBtnActionPerformed

    private void busTDateMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_busTDateMouseClicked
      
    }//GEN-LAST:event_busTDateMouseClicked

    private void busTDateKeyPressed(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_busTDateKeyPressed
        // TODO add your handling code here:
      
    }//GEN-LAST:event_busTDateKeyPressed

    private void busTDateFocusLost(java.awt.event.FocusEvent evt) {//GEN-FIRST:event_busTDateFocusLost
       
    }//GEN-LAST:event_busTDateFocusLost

    private void dltBtnActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_dltBtnActionPerformed
     DefaultTableModel model=(DefaultTableModel)bTable.getModel();
     int selectedIndex=bTable.getSelectedRow();
        try{
        Class.forName("com.mysql.cj.jdbc.Driver");
                String databaseURL = "jdbc:mysql://localhost:3306/busm";
                Connection con = DriverManager.getConnection(databaseURL, "root", "root");
               
                String busn= model.getValueAt(selectedIndex, 0).toString();
                System.out.println(busn);
                String selectQuery = "delete from bus_details where bus_no=?";
                PreparedStatement stat = con.prepareStatement(selectQuery);
                stat.setString(1,busn);
               int i= stat.executeUpdate();
                model.setRowCount(0);
                bTable.revalidate();
                loadTable();
                clearFieldsValue();
                bus_noTF.requestFocus();
                 JOptionPane.showMessageDialog(null,i+" Row Deleted Successfully");
        }catch(Exception e){
            System.out.println(e.getMessage());
        }
       
    }//GEN-LAST:event_dltBtnActionPerformed

    private void seatTFKeyPressed(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_seatTFKeyPressed
        if((evt.getKeyChar()>='0')&&(evt.getKeyChar()<='9')||Character.isISOControl(evt.getKeyChar())){
           seatTF.setEditable(true);
       }
       else
       {
           seatTF.setEditable(false);
       }
    }//GEN-LAST:event_seatTFKeyPressed


    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton addBtn;
    private javax.swing.JTable bTable;
    public com.toedter.calendar.JDateChooser busTDate;
    public com.toedter.calendar.JDateChooser busTDate1;
    private javax.swing.JTextField bus_destTF;
    private javax.swing.JTextField bus_destTF1;
    private javax.swing.JTextField bus_noTF;
    private javax.swing.JTextField bus_noTF1;
    private javax.swing.JTextField bus_sourceTF;
    private javax.swing.JTextField bus_sourceTF1;
    private javax.swing.JTextField departTimeTF;
    private javax.swing.JTextField deratTimeTF1;
    private javax.swing.JButton dltBtn;
    private javax.swing.JButton jButton3;
    private javax.swing.JButton jButton4;
    private javax.swing.JInternalFrame jInternalFrame1;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel10;
    private javax.swing.JLabel jLabel11;
    private javax.swing.JLabel jLabel12;
    private javax.swing.JLabel jLabel13;
    private javax.swing.JLabel jLabel14;
    private javax.swing.JLabel jLabel15;
    private javax.swing.JLabel jLabel16;
    private javax.swing.JLabel jLabel17;
    private javax.swing.JLabel jLabel18;
    private javax.swing.JLabel jLabel19;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel20;
    private javax.swing.JLabel jLabel21;
    private javax.swing.JLabel jLabel22;
    private javax.swing.JLabel jLabel23;
    private javax.swing.JLabel jLabel24;
    private javax.swing.JLabel jLabel25;
    private javax.swing.JLabel jLabel26;
    private javax.swing.JLabel jLabel27;
    private javax.swing.JLabel jLabel28;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel30;
    private javax.swing.JLabel jLabel31;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JLabel jLabel6;
    private javax.swing.JLabel jLabel7;
    private javax.swing.JLabel jLabel8;
    private javax.swing.JLabel jLabel9;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JPanel jPanel2;
    private javax.swing.JPanel jPanel3;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JComboBox<String> moveCB;
    private javax.swing.JComboBox<String> moveCB1;
    private javax.swing.JTextField priceTF;
    private javax.swing.JTextField priceTF1;
    private javax.swing.JButton rstBtn;
    private javax.swing.JTextField seatTF;
    private javax.swing.JTextField seatTF1;
    private javax.swing.JTextField stop1;
    private javax.swing.JTextField stop2;
    private javax.swing.JTextField stop3;
    private javax.swing.JTextField stop4;
    private javax.swing.JTextField stop5;
    private javax.swing.JTextField stop6;
    private javax.swing.JButton updateBtn;
    // End of variables declaration//GEN-END:variables
    SimpleDateFormat oDateFormat;
}
