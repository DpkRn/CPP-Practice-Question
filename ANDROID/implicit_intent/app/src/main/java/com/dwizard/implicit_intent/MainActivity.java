package com.dwizard.implicit_intent;

import androidx.appcompat.app.AppCompatActivity;


import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
Button btnDial,btnMsg,btnEmail,btnShare;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        btnDial=findViewById(R.id.btnDial);
        btnEmail=findViewById(R.id.btnEmail);
        btnMsg=findViewById(R.id.btnMsg);
        btnShare=findViewById(R.id.btnShare);
        btnDial.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent iDial=new Intent(Intent.ACTION_DIAL);
                iDial.setData(Uri.parse("tel:"+Uri.encode("+917050795540")));
                startActivity(iDial);
            }
        });

        btnMsg.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
              Intent iMsg=new Intent(Intent.ACTION_SENDTO);
              iMsg.setData(Uri.parse("smsto:"+Uri.encode("+917050795540")));
              iMsg.putExtra("sms_body","please enter your problem");
              startActivity(iMsg);
            }
        });

        btnEmail.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
              Intent iEmail=new Intent(Intent.ACTION_SEND);
              iEmail.setType("message/rfc822");
              iEmail.putExtra(Intent.EXTRA_EMAIL,new String[]{"d.wizard.tech@gmail.com","xty"});
              iEmail.putExtra(Intent.EXTRA_SUBJECT,"subject is important");
              iEmail.putExtra(Intent.EXTRA_TEXT,"please Enter your Problem");
              startActivity(Intent.createChooser(iEmail,"share via Email" ));
            }
        });

        btnShare.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent iShare=new Intent(Intent.ACTION_SEND);
                iShare.setType("text/plain");
                iShare.putExtra(Intent.EXTRA_TEXT,"refferal //705079550");
                startActivity(Intent.createChooser(iShare,"share via"));
            }
        });

    }
}