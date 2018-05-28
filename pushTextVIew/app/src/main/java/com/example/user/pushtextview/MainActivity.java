package com.example.user.pushtextview;

import android.graphics.Color;
import android.media.Image;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.text.SpannableString;
import android.text.SpannableStringBuilder;
import android.text.Spanned;
import android.text.TextPaint;
import android.text.method.LinkMovementMethod;
import android.text.style.ClickableSpan;
import android.text.style.ImageSpan;
import android.util.Log;
import android.view.View;
import android.widget.ImageSwitcher;
import android.widget.TextView;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    String TAG= "[Helaer]";
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        // 获得对应的文本框
        TextView t1 = (TextView) findViewById(R.id.text1);

        //  自动生成字符串
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < 20; ++i) {
            sb.append("好友" + i + ",");
        }
        //　将最后一个,除去的字符串赋值给likeUsers
        String likeUsers = sb.substring(0, sb.lastIndexOf(",")).toString();
        Log.d(TAG,"onCreate: "+ likeUsers);
        // 将文本框设置成可点击  激活链接 实现可点击
        t1.setMovementMethod(LinkMovementMethod.getInstance());
//        将文本框内容设置为addCLickPart的返回值
        t1.setText(addClickPart(likeUsers), TextView.BufferType.SPANNABLE);
    }

    //     定义一个点击每个部分文件的处理方法
    private SpannableStringBuilder addClickPart(String str) {
//         赞的图标
        ImageSpan imagespan = new ImageSpan(MainActivity.this, R.drawable.dog);
        SpannableString spanstr = new SpannableString("p.");
        spanstr.setSpan(imagespan, 0, 1, Spanned.SPAN_EXCLUSIVE_EXCLUSIVE);

//        创建一个SpannableStringBuilder对象,链接多个字符串
        SpannableStringBuilder ssb = new SpannableStringBuilder(spanstr);
        ssb.append(str);
        String[] likeUsers = str.split(",");
        if (likeUsers.length > 0) {
            for (int i = 0; i < likeUsers.length; ++i) {
                final String name = likeUsers[i];
                // 获取到name所在的下标   +  -
                final int start = str.indexOf(name) + spanstr.length();
                Log.d(TAG, "addClickPart: " + start + "str" + str.indexOf(name) + "spanstr" + spanstr.length());

//              将文本内容监听起来
                ssb.setSpan(new ClickableSpan() {
                    @Override
                    public void onClick(View widget) {
                        // 如果有点击对应的文本内容,将已 Toast形式提示出对应的文本
                        Toast.makeText(MainActivity.this, name, Toast.LENGTH_SHORT).show();
                    }
                    // 设置可以被点击文字的字体颜色
                    @Override
                    public void updateDrawState(TextPaint ds) {
                        super.updateDrawState(ds);
//                         删除下划线,设置字体颜色为蓝色
                        ds.setColor(Color.BLUE);
                        ds.setUnderlineText(false); // 是否需要下划线
                    }
                }, start, start + name.length(), 0);
                //Log.e(TAG, "addClickPart: " + name.length() + start);



            }
        }
        return ssb.append("等" + likeUsers.length + "个人觉得很赞");
    }
}