
import java.awt.Image;
import javax.swing.ImageIcon;
import javax.swing.JOptionPane;
import java.net.URL.*;


public class TicToyToy extends javax.swing.JFrame {

    int turn=2;
    int p1s=0;
    int p2s=0;
    int b1flag=0;
    int b2flag=0;
    int b3flag=0;
    int b4flag=0;
    int b5flag=0;
    int b6flag=0;
    int b7flag=0;
    int b8flag=0;
    int b9flag=0;
    String player1,player2;
    public TicToyToy() {
       initComponents(); 
       scaleImage();
      }
    
     public TicToyToy(String player1,String player2) {
       initComponents(); 
       scaleImage();
       this.player1=player1;
        this.player2=player2;
        turnlbl.setText(player1);
        p1Name.setText(player1);
        p2Name.setText(player2);
    
       
    }
     
     
     void scaleImage(){
         ImageIcon backicon=new ImageIcon("C:\\Users\\Lenovo\\Desktop\\project img\\user.jpg");
         
         ImageIcon panel1icon=new ImageIcon("C:\\Users\\Lenovo\\Desktop\\project img\\dashbord.jpg");
         ImageIcon panel2icon=new ImageIcon("C:\\Users\\Lenovo\\Desktop\\project img\\dashbord.jpg");
         
         
         Image img=backicon.getImage().getScaledInstance(backLabel.getWidth(),backLabel.getHeight(),Image.SCALE_SMOOTH);
        Image panel1Img=panel1icon.getImage().getScaledInstance(panel1Label.getWidth(),panel1Label.getHeight(),Image.SCALE_SMOOTH);
        Image panel2Img=panel2icon.getImage().getScaledInstance(panel2Label.getWidth(), panel2Label.getHeight(),Image.SCALE_SMOOTH);
        ImageIcon imgIcon=new ImageIcon(img);
        ImageIcon p1imgicon=new ImageIcon(panel1Img);
        ImageIcon p2imgicon=new ImageIcon(panel2Img);
         backLabel.setIcon(imgIcon);
         panel1Label.setIcon(p1imgicon);
         panel2Label.setIcon(p2imgicon);
     }
      void setAllBtnEnable(){
      b1flag=0;
      b2flag=0;
      b3flag=0;
      b4flag=0;
      b5flag=0;
      b6flag=0;
      b7flag=0;
      b8flag=0;
      b9flag=0;
    }
    void setAllBtnDisable(){
        b1flag=1;
        b2flag=1;
        b3flag=1;
        b4flag=1;
        b5flag=1;
        b6flag=1;
        b7flag=1;
        b8flag=1;
        b9flag=1;
    }
  
       
    public void checkWin(){
        if(b1.getText()=="X"&&b2.getText()=="X"&&b3.getText()=="X"){
            w.setText(player1+ " Won");
        }
        else{
            if(b1.getText()=="O"&&b2.getText()=="O"&&b3.getText()=="O"){
              w.setText(player2+ " Won");
        }
        
        if(b1.getText()=="X"&&b5.getText()=="X"&&b9.getText()=="X"){
            w.setText(player1+ " Won");
        }else{
            if(b1.getText()=="O"&&b5.getText()=="O"&&b9.getText()=="O")
              w.setText(player2+ " Won");
        }
        
        if(b7.getText()=="X"&&b5.getText()=="X"&&b3.getText()=="X"){
            w.setText(player1+ " Won");
        }
        else
            if(b7.getText()=="O"&&b5.getText()=="O"&&b3.getText()=="O")
                 w.setText(player2+ " Won");
        
        if((b1.getText()=="X"&&b4.getText()=="X"&&b7.getText()=="X"))
            w.setText(player1+ " Won");
        else if(b1.getText()=="O"&&b4.getText()=="O"&&b7.getText()=="O")
              w.setText(player2+ " Won");
        if(b4.getText()=="X"&&b5.getText()=="X"&&b6.getText()=="X")
            w.setText(player1+ " Won");
        else
            if(b4.getText()=="O"&&b5.getText()=="O"&&b6.getText()=="O")
                w.setText(player2+ " Won");
        
        if((b7.getText()=="X"&&b8.getText()=="X"&&b9.getText()=="X"))
           w.setText(player1+ " Won");
        else
            if(b7.getText()=="O"&&b8.getText()=="O"&&b9.getText()=="O")
               w.setText(player2+ " Won"); 
        
        if((b6.getText()=="X"&&b9.getText()=="X"&&b3.getText()=="X"))
            w.setText(player1+ " Won"); 
        else
            if(b6.getText()=="O"&&b9.getText()=="O"&&b3.getText()=="O")
                 w.setText(player2+ " Won"); 
         if(b2.getText()=="X"&&b5.getText()=="X"&&b8.getText()=="X")
           w.setText(player1+ " Won"); 
         else
             if(b2.getText()=="O"&&b5.getText()=="O"&&b8.getText()=="O")
                  w.setText(player2+ " Won"); 
   
        if(w.getText().equals(player1+ " Won")){
           p1s++;
           //set score lbl here
           
           p1Score.setText(p1s+"");
            setAllBtnDisable();
        }
        else if(w.getText().equals(player2+ " Won")){
         p2s++;
         
          p2Score.setText(p2s+"");
            setAllBtnDisable();
        }
        
            
    }
    
   
   

    }
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jPanel2 = new javax.swing.JPanel();
        b2 = new javax.swing.JButton();
        b3 = new javax.swing.JButton();
        b9 = new javax.swing.JButton();
        b6 = new javax.swing.JButton();
        b5 = new javax.swing.JButton();
        b8 = new javax.swing.JButton();
        b7 = new javax.swing.JButton();
        b4 = new javax.swing.JButton();
        btnreset = new javax.swing.JButton();
        b1 = new javax.swing.JButton();
        panel2Label = new javax.swing.JLabel();
        w = new javax.swing.JLabel();
        ll1 = new javax.swing.JLabel();
        jPanel1 = new javax.swing.JPanel();
        p1Name = new javax.swing.JLabel();
        jLabel1 = new javax.swing.JLabel();
        p1Score = new javax.swing.JLabel();
        p2Name = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        btnreset1 = new javax.swing.JButton();
        p2Score = new javax.swing.JLabel();
        panel1Label = new javax.swing.JLabel();
        turnlbl = new javax.swing.JLabel();
        backLabel = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setTitle("TIC TOC TOY BY DPK");
        getContentPane().setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jPanel2.setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        b2.setFont(new java.awt.Font("Segoe Print", 1, 48)); // NOI18N
        b2.setForeground(new java.awt.Color(255, 51, 51));
        b2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                b2ActionPerformed(evt);
            }
        });
        jPanel2.add(b2, new org.netbeans.lib.awtextra.AbsoluteConstraints(130, 50, 72, 67));

        b3.setFont(new java.awt.Font("Segoe Print", 1, 48)); // NOI18N
        b3.setForeground(new java.awt.Color(255, 51, 51));
        b3.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                b3ActionPerformed(evt);
            }
        });
        jPanel2.add(b3, new org.netbeans.lib.awtextra.AbsoluteConstraints(210, 50, 72, 67));

        b9.setFont(new java.awt.Font("Segoe Print", 1, 48)); // NOI18N
        b9.setForeground(new java.awt.Color(255, 51, 51));
        b9.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                b9ActionPerformed(evt);
            }
        });
        jPanel2.add(b9, new org.netbeans.lib.awtextra.AbsoluteConstraints(210, 190, 72, 67));

        b6.setFont(new java.awt.Font("Segoe Print", 1, 48)); // NOI18N
        b6.setForeground(new java.awt.Color(255, 51, 51));
        b6.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                b6ActionPerformed(evt);
            }
        });
        jPanel2.add(b6, new org.netbeans.lib.awtextra.AbsoluteConstraints(210, 120, 72, 67));

        b5.setFont(new java.awt.Font("Segoe Print", 1, 48)); // NOI18N
        b5.setForeground(new java.awt.Color(255, 51, 51));
        b5.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                b5ActionPerformed(evt);
            }
        });
        jPanel2.add(b5, new org.netbeans.lib.awtextra.AbsoluteConstraints(130, 120, 72, 67));

        b8.setFont(new java.awt.Font("Segoe Print", 1, 48)); // NOI18N
        b8.setForeground(new java.awt.Color(255, 51, 51));
        b8.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                b8ActionPerformed(evt);
            }
        });
        jPanel2.add(b8, new org.netbeans.lib.awtextra.AbsoluteConstraints(130, 190, 72, 67));

        b7.setFont(new java.awt.Font("Segoe Print", 1, 48)); // NOI18N
        b7.setForeground(new java.awt.Color(255, 51, 51));
        b7.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                b7ActionPerformed(evt);
            }
        });
        jPanel2.add(b7, new org.netbeans.lib.awtextra.AbsoluteConstraints(50, 190, 72, 67));

        b4.setFont(new java.awt.Font("Segoe Print", 1, 48)); // NOI18N
        b4.setForeground(new java.awt.Color(255, 51, 51));
        b4.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                b4ActionPerformed(evt);
            }
        });
        jPanel2.add(b4, new org.netbeans.lib.awtextra.AbsoluteConstraints(50, 120, 72, 67));

        btnreset.setText("RESET GAME");
        btnreset.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnresetActionPerformed(evt);
            }
        });
        jPanel2.add(btnreset, new org.netbeans.lib.awtextra.AbsoluteConstraints(120, 270, -1, 35));

        b1.setFont(new java.awt.Font("Segoe Print", 1, 48)); // NOI18N
        b1.setForeground(new java.awt.Color(255, 51, 51));
        b1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                b1ActionPerformed(evt);
            }
        });
        jPanel2.add(b1, new org.netbeans.lib.awtextra.AbsoluteConstraints(50, 50, 72, 67));

        panel2Label.setBorder(javax.swing.BorderFactory.createBevelBorder(javax.swing.border.BevelBorder.RAISED));
        panel2Label.setOpaque(true);
        jPanel2.add(panel2Label, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 0, 340, 330));

        getContentPane().add(jPanel2, new org.netbeans.lib.awtextra.AbsoluteConstraints(100, 130, 340, 330));

        w.setFont(new java.awt.Font("Algerian", 1, 24)); // NOI18N
        w.setForeground(new java.awt.Color(204, 0, 0));
        getContentPane().add(w, new org.netbeans.lib.awtextra.AbsoluteConstraints(110, 20, 564, 36));

        ll1.setFont(new java.awt.Font("Algerian", 1, 24)); // NOI18N
        ll1.setForeground(new java.awt.Color(255, 0, 0));
        ll1.setText("nEXT TURN:");
        getContentPane().add(ll1, new org.netbeans.lib.awtextra.AbsoluteConstraints(130, 80, 140, 40));

        jPanel1.setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        p1Name.setFont(new java.awt.Font("Segoe Print", 1, 24)); // NOI18N
        p1Name.setForeground(new java.awt.Color(102, 102, 255));
        p1Name.setText("NAME");
        jPanel1.add(p1Name, new org.netbeans.lib.awtextra.AbsoluteConstraints(20, 50, 198, 35));

        jLabel1.setFont(new java.awt.Font("Segoe UI Emoji", 1, 14)); // NOI18N
        jLabel1.setText("SCORE:");
        jPanel1.add(jLabel1, new org.netbeans.lib.awtextra.AbsoluteConstraints(20, 90, -1, 30));

        p1Score.setFont(new java.awt.Font("Segoe UI Emoji", 1, 14)); // NOI18N
        p1Score.setText("0");
        jPanel1.add(p1Score, new org.netbeans.lib.awtextra.AbsoluteConstraints(80, 90, 31, 30));

        p2Name.setFont(new java.awt.Font("Segoe Print", 1, 24)); // NOI18N
        p2Name.setForeground(new java.awt.Color(102, 102, 255));
        p2Name.setText("NAME");
        jPanel1.add(p2Name, new org.netbeans.lib.awtextra.AbsoluteConstraints(20, 120, 198, 35));

        jLabel2.setFont(new java.awt.Font("Segoe UI Emoji", 1, 14)); // NOI18N
        jLabel2.setText("SCORE:");
        jPanel1.add(jLabel2, new org.netbeans.lib.awtextra.AbsoluteConstraints(20, 160, -1, -1));

        btnreset1.setText("RESET SCORE");
        btnreset1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnreset1ActionPerformed(evt);
            }
        });
        jPanel1.add(btnreset1, new org.netbeans.lib.awtextra.AbsoluteConstraints(70, 220, -1, 35));

        p2Score.setFont(new java.awt.Font("Segoe UI Emoji", 1, 14)); // NOI18N
        p2Score.setText("0");
        jPanel1.add(p2Score, new org.netbeans.lib.awtextra.AbsoluteConstraints(80, 160, 30, -1));

        panel1Label.setBorder(new javax.swing.border.MatteBorder(null));
        jPanel1.add(panel1Label, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 0, 240, 330));

        getContentPane().add(jPanel1, new org.netbeans.lib.awtextra.AbsoluteConstraints(470, 130, 240, 330));

        turnlbl.setFont(new java.awt.Font("Algerian", 1, 24)); // NOI18N
        turnlbl.setForeground(new java.awt.Color(255, 0, 0));
        turnlbl.setText("TURN:");
        getContentPane().add(turnlbl, new org.netbeans.lib.awtextra.AbsoluteConstraints(270, 80, 220, 40));
        getContentPane().add(backLabel, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 0, 790, 560));

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void b1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_b1ActionPerformed
        if(b1flag==0){
        if(turn%2==0){
            b1.setText("X");
            turnlbl.setText(player2);
                
        }else{
            b1.setText("O");
            turnlbl.setText(player1);
        }
        turn++;
        b1flag=1;
        }
      
        checkWin();
    }//GEN-LAST:event_b1ActionPerformed
    public void setTurn(){
        if(turn%2==0)
            turnlbl.setText(player2);
        else
            turnlbl.setText(player1);
    }
    private void b2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_b2ActionPerformed
        if(b2flag==0){
        if(turn%2==0){
            b2.setText("X");
            turnlbl.setText(player2);
                
        }else{
            b2.setText("O");
            turnlbl.setText(player1);
        }
        turn++;
        b2flag=1;
        }
        //b2.setEnabled(false);
         checkWin();
    }//GEN-LAST:event_b2ActionPerformed

    private void b3ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_b3ActionPerformed
        if(b3flag==0){
        if(turn%2==0){
            b3.setText("X");
            turnlbl.setText(player2);
                
        }else{
            b3.setText("O");
            turnlbl.setText(player1);
        }
        turn++;
        b3flag=1;
        }
        //b3.setEnabled(false);
         checkWin();
    }//GEN-LAST:event_b3ActionPerformed

    private void b4ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_b4ActionPerformed
        if(b4flag==0){
        if(turn%2==0){
            b4.setText("X");
            turnlbl.setText(player2);
                
        }else{
            b4.setText("O");
            turnlbl.setText(player1);
        }
        turn++;
        b4flag=1;
        }
        //b4.setEnabled(false);
         checkWin();
    }//GEN-LAST:event_b4ActionPerformed

    private void b5ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_b5ActionPerformed
       if(b5flag==0){
        if(turn%2==0){
            b5.setText("X");
             turnlbl.setText(player2);
                
        }else{
            b5.setText("O");
            turnlbl.setText(player1);
        }
        turn++;
        b5flag=1;
       }
        //b5.setEnabled(false);
         checkWin();
    }//GEN-LAST:event_b5ActionPerformed

    private void b6ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_b6ActionPerformed
       if(b6flag==0){
        if(turn%2==0){
            b6.setText("X");
            turnlbl.setText(player2);
                
        }else{
            b6.setText("O");
            turnlbl.setText(player1);
        }
        turn++;
        b6flag=1;
       }
        //b6.setEnabled(false);
         checkWin();
    }//GEN-LAST:event_b6ActionPerformed

    private void b7ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_b7ActionPerformed
     if(b7flag==0){
        if(turn%2==0){
            b7.setText("X");
                turnlbl.setText(player2);
        }else{
            b7.setText("O");
            turnlbl.setText(player1);
        }
        turn++;
        b7flag=1;
     }
      //  b7.setEnabled(false);
         checkWin();
    }//GEN-LAST:event_b7ActionPerformed

    private void b8ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_b8ActionPerformed
        if(b8flag==0){
        if(turn%2==0){
            b8.setText("X");
            turnlbl.setText(player2);
                
        }else{
            b8.setText("O");
            turnlbl.setText(player1);
        }
        turn++;
        b8flag=1;}
        
        //b8.setEnabled(false);
         checkWin();
    }//GEN-LAST:event_b8ActionPerformed

    private void b9ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_b9ActionPerformed
      if(b9flag==0){
        if(turn%2==0){
            b9.setText("X");
                turnlbl.setText(player2);
        }else{
            b9.setText("O");
            turnlbl.setText(player1);
        }
        turn++;
      b9flag=1;
      }
        
        
         checkWin();
    }//GEN-LAST:event_b9ActionPerformed

    private void btnresetActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnresetActionPerformed
      b1.setText("");
      b2.setText("");
      b3.setText("");
      b4.setText("");
      b5.setText("");
      b6.setText("");
      b7.setText("");
      b8.setText("");
      b9.setText("");
      turn=2;
      turnlbl.setText(player1);
     setAllBtnEnable();
      w.setText("");
    }//GEN-LAST:event_btnresetActionPerformed

    private void btnreset1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnreset1ActionPerformed
        // TODO add your handling code here:
        p1Score.setText("0");
        p2Score.setText("0");
        p1s=0;
        p2s=0;
    }//GEN-LAST:event_btnreset1ActionPerformed

    
    public static void main(String args[]) {
        

      
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
             TicToyToy ff=   new TicToyToy("Player 1","Player 2");
             ff.setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton b1;
    private javax.swing.JButton b2;
    private javax.swing.JButton b3;
    private javax.swing.JButton b4;
    private javax.swing.JButton b5;
    private javax.swing.JButton b6;
    private javax.swing.JButton b7;
    private javax.swing.JButton b8;
    private javax.swing.JButton b9;
    private javax.swing.JLabel backLabel;
    private javax.swing.JButton btnreset;
    private javax.swing.JButton btnreset1;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JPanel jPanel2;
    private javax.swing.JLabel ll1;
    private javax.swing.JLabel p1Name;
    private javax.swing.JLabel p1Score;
    private javax.swing.JLabel p2Name;
    private javax.swing.JLabel p2Score;
    private javax.swing.JLabel panel1Label;
    private javax.swing.JLabel panel2Label;
    private javax.swing.JLabel turnlbl;
    private javax.swing.JLabel w;
    // End of variables declaration//GEN-END:variables

   // private void initComponents() {
     //   throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    //}
}
