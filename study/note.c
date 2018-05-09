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
  
 在LinearLayout(线性布局)里
   <!--android:orientation="horizontal" 将布局按垂直方向处理-->
   <!--当orientation 被设置成vertical时修改gravity只有水平方向有效-->
   <!--当orientation 被设置成horizontal时修改gravity只有垂直方向有效-->
 
 /**注：LinearLayout也是我们 用的比较多的一个布局,我们更多的时候更钟情于他的weight(权重)属性，等比例划分，对屏幕适配还是 帮助蛮大的;
  * 但是使用LinearLayout的时候也有一个问题，就是当界面比较复杂的时候，需要嵌套多层的 LinearLayout,这样就会降低UI Render的效率(渲染速度),
  * 而且如果是listview或者GridView上的 item,效率会更低,另外太多层LinearLayout嵌套会占用更多的系统资源,还有可能引发stackoverflow; 
  * 但是如果我们使用RelativeLayout的话,可能仅仅需要一层就可以完成了,以父容器或者兄弟组件参考+margin +padding就可以设置组件的显示位置,是
  * 比较方便的!当然,也不是绝对的,具体问题具体分析吧! 总结就是:尽量使用RelativeLayout + LinearLayout的weight属性搭配使用吧！
**/
//   RelativeLayout(相对布局)

1.基本属性
gravity	：		设置容器内组件的对齐方式
ignoreGravity:	设置了该属性为true的属性的组件,将不受gravity属性的影响

2.根据父容器定位
layout_alignParentLeft:		左对齐
layout_alignParentRight:	右对齐 
layout_alignParentTop:		顶部对齐
layout_alignParentBottom:	底部对齐
android:layout_centerHorizontal		水平居中
android:layout_centerVertical		垂直居中
android:layout_centerInParent		中间位置

3.根据兄弟组件定位
layout_toLeftOf:		参考组件的左边
layout_toRightOf:		参考组件的右边
layout_above:			参考组件的上方
layout_below:			参考组件的下方
layout_alignTop:		对齐参考组件的上边界
layout_alignBotton:		对齐参考组件的下边界
layout_alignLeft:		对齐参考组件的左边界
layout_alignRight:		对齐参考组件的右边界

4.margin(偏移)： 设置组件与父容器的边距，又叫偏移
layout_margin:			设置组件上下左右的偏移量
layout_marginLeft:		设置组件离左边的偏移量
layout_marginRight:		设置组件离右边的偏移量
layout_marginTop:		设置组件离上边的偏移量
layout_marginButton:	设置组件离下边的偏移量

5.padding(填充)： 设置组件内部元素间的边距(比如TextView离的字体的位置)
android:padding			往内部元素的上下左右填充一定边距
paddingLeft				往内部元素的左边填充一定的边距
paddingRight			往内部元素的右边边填充一定的边距
paddingTop				往内部元素的上边填充一定的边距
paddingBottom			往内部元素的下边填充一定的边距


/**.margin与padding的区别
* 初学者对于这两个属性可能会有一点混淆，这里区分下： 首先margin代表的是偏移,比如marginleft = "5dp"表示组件离容器左边缘偏移5dp; 而
* padding代表的则是填充,而填充的对象针对的是组件中的元素,比如TextView中的文字 比如为TextView设置paddingleft = "5dp", 则是在组
* 件里的元素的左边填充5dp的空间！ margin针对的是容器中的组件，而padding针对的是组件中的元素，要区分开来！**/

//  TableLayout(表格布局)
