/*****************************************************************************************
 * Adapted and tortured by Julian Trinh and Connor Richmond for use in ENG EC 327
 * Source code from https://github.com/academicode/app-simple-tip-calculator/tree/session-7
 * Sweet tutorial at https://www.youtube.com/watch?v=Z3jzIYkxB1s (where the source is from)
 * Boston University: College of Engineering
 * Spring 2015
 *****************************************************************************************/
package org.academicode.tipcalculator;
/*
 * This is the results page that is displayed after you the onClick is called from Main.java
 * */

import android.app.Activity;
import android.os.Bundle;
import android.view.View;
import android.view.View.OnClickListener;
import android.widget.Button;
import android.widget.TextView;

public class Result extends Activity
{
    //Initializes TextViews to display total and tip
    private TextView tipTextView;
    private TextView totalTextView;

    //Initializes a button
    private Button finished;

    @Override
    //When this activity is called, onCreate is called
    protected void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);

        //How this activity actually looks is set inside result.xml
        setContentView(R.layout.result);

        /*Set the texts views so they display according to the parameters in result.xml*/
        tipTextView = (TextView) findViewById(R.id.tip);
        totalTextView = (TextView) findViewById(R.id.total);

        //Runs the method to use the values calculated in the Main Activity class
        initializeTextViews();

        //Initializes button to the parameters in result.xml
        finished = (Button) findViewById(R.id.confirm);

        //Sets an onClickListener for the finished button
        finished.setOnClickListener(new OnClickListener()
        {
            @Override
            //If clicked, call the finish method
            public void onClick(View v)
            {
                //Finish ends the current activity and goes back to the activity that called this one (Main in this case)
                finish();
            }
        });
    }

    private void initializeTextViews()
    {
        //Sets doubles according to the values "pushed" from Main.java
        double tip = getIntent().getExtras().getDouble(MainActivity.TAG_TIP);
        double total = getIntent().getExtras().getDouble(MainActivity.TAG_GRAND_TOTAL);

        //Sets the strings accordingly
        String currentTipText = tipTextView.getText().toString();

        currentTipText = currentTipText + "$" + tip;

        String currentTotalText = totalTextView.getText().toString();

        currentTotalText = currentTotalText + "$" + total;

        //Sets the texts to display the values
        tipTextView.setText(currentTipText);
        totalTextView.setText(currentTotalText);
    }
}
