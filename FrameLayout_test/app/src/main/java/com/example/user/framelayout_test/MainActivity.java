package com.example.user.framelayout_test;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.MotionEvent;
import android.view.View;
import android.view.View.OnTouchListener;
import android.widget.FrameLayout;
import android.app.Activity;

public class MainActivity extends Activity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        FrameLayout frame = (FrameLayout)findViewById(R.id.FrameLayout1);
        final MeziView meizi = new MeziView(MainActivity.this);
        // 为图片添加触摸事件监听器
        meizi.setOnTouchListener(new OnTouchListener() {
            @Override
            public boolean onTouch(View v, MotionEvent event) {
                // 设置显示的位置
                meizi.bitmapX = event.getX() - 200;
                meizi.bitmapY = event.getY() - 200;
                // 调用重绘方法
                meizi.invalidate();
                return true;
            }
        });
        // 增加动态View
        frame.addView(meizi);
    }
}
