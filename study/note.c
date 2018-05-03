/**
 * 	  Android中有六大布局,分别是: 
 * 		LinearLayout(线性布局)
 * 		RelativeLayout(相对布局)
 * 		TableLayout(表格布局) 
 * 		FrameLayout(帧布局)
 * 		AbsoluteLayout(绝对布局)
 * 		GridLayout(网格布局) 
 * */

// LinearLayout(线性布局)
1.常用属性：
orientation:	排列方式:	horizontal(水平) vertical(竖直)
gravity:		对齐方式:	(top|right|center|left|buttom等)
layout_gravity:	控制该组件在父容器里的对齐方式
layout_width:	布局的宽度
layout_height:	布局的高度
id:				布局的资源ID
background:		为该组件设置一个背景

2.Weight(权重)
1该属性是用来等比例划分区域的
最简单的啊用法，就是等比例划分.

3.divider分割线
该属性用于为LinearLayout设置分割线图片,通过showDividers来设置分割线的所在位置。
有四个选值： none,middle，begining, end

三种方法：
divider:	为LinearLayout设置分割线的图片
showDividers:	设置分割线所在的位置,有四个选值： none,middle，begining, end
dividerPadding:	设置分割线的padding

在xml里直接加入：
<View  
    android:layout_width="match_parent"  
    android:layout_height="1px"  
    android:background="#000000" />  
 就会产生一条线
 
  1)android:divider设置作为分割线的图片
  2)android:showDividers设置分割线的位置,none(无),beginning(开始),end(结束),middle(每两个组件间) 
  3)dividerPadding设置分割线的Padding

