package com.example.user.textviewdemo;

import android.graphics.drawable.Drawable;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.text.Html;
import android.text.method.LinkMovementMethod;
import android.widget.TextView;
import android.text.util.Linkify;

public class MainActivity extends AppCompatActivity {
    private TextView txtZQD;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        //setContentView(R.layout.activity_main);
        setContentView(R.layout.activity_main);
        txtZQD = (TextView)findViewById(R.id.ergou);
        // 获得四个不同方向上的图片资源,数组元素依次是左上右下的图片
        Drawable[] drawables = txtZQD.getCompoundDrawables();
        // 数组下标0-3,依次左上右下
        drawables[1].setBounds(100, 0, 200, 200);// 设置左上右下坐标点 这里代表的时:
        /*
        * 长是从离文字最坐标开始100dp处到200dp处
        * 宽是从文字上方0dp出往上延伸200dp
        * */
        txtZQD.setCompoundDrawables(drawables[0], drawables[1], drawables[2], drawables[3]);
        TextView t1 = (TextView)findViewById(R.id.baidu);
        String s1 = "<font color='blue'><b>百度一下,你就知道:</b></font><br>";
        s1 += "<a href = 'http://www.baidu.com'>百度</a>";
        t1.setText(Html.fromHtml(s1));
        t1.setMovementMethod(LinkMovementMethod.getInstance());
    }

}
