/*
快捷方式:
Ctrl+Shift+v:	跳出剪贴板(记录最近复制的内容)
*/

/**
 * 	Android Studio Error
 * **/
 1.Invalidate Caches / Restart就是清理缓存和索引的入口： 解决  Lock file: C:\Users\Administrator\.gradle\caches\modules-2\modules-2.lock



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
1.基本属性
android:collapseColumns:	设置需要被隐藏的列的序号
android:shrinkColumns:		设置允许被收缩的列的列序号
android:stretchColumns:		设置运行被拉伸的列的列序号
///注： 以上这三个属性的列号都是从0开始算的,可以多号


//	FrameLayout(帧布局)
FrameLayout可以说是六大布局中最为简单的一个布局。
1.常用属性
FrameLayout的属性很少就两个
注:	前景图像:永远处于帧布局最上面,直接面对用户的图像,就是不会被覆盖的图片

android:foreground:			设置改帧布局容器的前景图像
android:foregroundGravity:	设置前景图像显示的位置




// GridLayout(网格布局)
特点:
1.可以自己设置布局中的组件的排列方式
2.可以自定义网格布局的行列数
3.可以直接设置组件位于某行某列
4.可以设置组件横跨几行或几列

相关属性
1.设置排列对齐
设置排列方式:	android：orientation="" 	vertical(竖直,默认)或者horizontal(水平)
设置对齐方式:	android:layout_gravity="" 	center,left,right,buttom

2.设置几行几列
设置行数:		android.rowCount="4"	设置网格布局有4行
设置列数:		android.columncount="4" 设置网格布局有4列

3.设置组件所在的行列 // 从0开始
第几行			android.layout_row="1"		第2行
第几列			android.layout_column="2"	第3列

4.设置组件横跨几行几列
横跨几行		android.layout_rowSpan="2"		纵向横跨2行
横跨几列		android.layout_columnSpan="3"	横向横跨2列

// AbsoluteLayout(绝对布局)
四大控件属性(单位都是dp)
1.控制大小:
android:layout_width:	组件宽度
android:layout_height:	组件高度

2.控制位置:
android:layout_x:		设置组件的X坐标
android:layout_y:		设置组件的Y坐标


/**
 *
 *	Android中的六大布局都已总结， 建议使用 LineaLayout的权重属性+RelativeLayout来构造界面
 *
 * */

/**
 *
 *				UI控件
 *
 * */
常用的单位
1.dp(dip)
	device independent pixels(设备独立像素),不同设备有不同的显示效果,这个和设备硬件有关,一般
我们为了支持WVGA, HVGA和QVGA推荐使用这个

2.px(pixels像素)
	不同的设备显示效果相同,一般我们HVGA代表320x480像素;

3.pt:point
	是一个标准的长度单位,1pt=1/72英寸,用于印刷业非常简单易用

4.sp:(scaled pixels放大像素)
	主要用于字体显示best for textsize.

// TextView控件
1.主要属性:
1.id:				主要为TextView设置一个组件id,根据ID,可以通过Java代码中的findViewById()的方法获得该对象,进行相关的属性设置
2.layout_width:		组件的宽度
3.layout_height:	组件的高度
4.gravity:			设置控件中内容的对齐方式,TextView中的是文字,ImageView中的是图片
5.text:				设置显示的内容
6.textColor:		设置字体颜色
7.textStyle:		设置字体风格,三个可选值:	normal(无效果) bold(加粗)  italic(斜体)
8.textSize:			设置字体大小
9.background:		控件的背景颜色,可以理解为填充整个控件的颜色,可以是图片

2.带阴影的TextView :涉及到几个属性:
android:shadowColor:	设置阴影颜色,需要与shadowRadius一起使用
android:shadowRadius:	设置阴影的模糊程度,设置会0.1就会变成字体颜色了,建议设置为3.0
android:shadowDx:		设置阴影在水平方向的偏移,就是水平方向阴影开始的横坐标位置
android:shadowDy:		设置阴影在垂直方向的偏移,就是垂直方向阴影开始的纵坐标位置

3.带边框的TextView
如果你想为TextView设置一个边框背景.可以参考下面的方法
自行编写一个ShapeDrawable的资源文件.然后TextView和blackgroung设置为这个drawable资源即可

shapeDrawable资源文件的几个节点以及属性:
<solid android:color = """3.带边框的TextView
如果你想为TextView设置一个边框背景.可以参考下面的方法
自行编写一个ShapeDrawable的资源文件.然后TextView和blackgroung设置为这个drawable资源即可

shapeDrawable资源文件的几个节点以及属性:
<solid android:color = """3.带边框的TextView
如果你想为TextView设置一个边框背景.可以参考下面的方法
自行编写一个ShapeDrawable的资源文件.然后TextView和blackgroung设置为这个drawable资源即可

shapeDrawable资源文件的几个节点以及属性:
<solid android:color = "xxx"						这个是设置背景颜色的
<stroke android:width="xdp" android:color = "xxx" 	这个是设置边框粗细,以及边框颜色
<padding androidLbotton = "xdp"..> 					这个是设置边距
<corners android:topLeftRadius="10px" ...>			这个设置圆角的
<gradient>				这个设置渐变色的,可选属性有:
startColor:起始颜色, endColor:结束颜色
centerColor:中间颜色,
angle:方向角度,等于0时,然后逆时针转,当angle=90时,从下往上,
type:设置渐变色的类型

4.带图片(drawableXxx)的TextView:
基本用法:
	设置图片的核心其实就是:drawableXxx:	可以设置四个方向的图片:
drawableTop,drawableButton,drawableLeft,drawableRight
另外还可以使用drawablePadding来设置图片和文件的间距


5.使用autoLink属性识别链接类型	
	当文字出现了URL,E-Mail,电话号码,地图的时候,我们可以通过设置autoLink属性,
当点击文字中对应部分时,即可跳转某人app,比如遗传电话,跳转拨号.



6.TextView玩转HTML
	TextView除了显示普通文本外,TextView还定义了一些类似于HTML的标签,通过这些标签,我们可以
使TextView显示不同颜色的字体,大小,甚至时图片,或者链接等,我们只需要使用HTML中的一些标签,加
上android:text.HTML类的支持,即可完成.

常用的标签:
<font>:		设置颜色和字体
<big>:		设置字体大号
<small>:	设置字体小号
<i><b>:		斜体粗体
<a>:		连接网址
<img>:		图片


7.SpannableString&SpannableStringBuilder定制文本
	除了上面的HTML可以定制我们TextView的样式外,还可以使用SpannableString和SpannableStringBuilder
来完成
两者区别:
前者针对的是不可变文本,而后者则时针对可变文本

SpannableString可以使用的API:
BackgroundColorSpan				背景色
ClickableSpan					文本可点击,有点击事件
ForegroundColorSpan				文本颜色(前景色)
MaskFilterSpan					修饰效果,如模糊(BlurMaskFilter),浮雕(EmbossMaskFilter)
MetricAffectingSpan				父类,一般不用
RasterizerSpan					光栏效果
StrikethroughSpan				删除线(中间线)
SuggestionSpan 					相当于占位符
UnderlineSpan 					下划线
AbsoluteSizeSpan 				绝对大小（文本字体）
DynamicDrawableSpan 			设置图片，基于文本基线或底部对齐。
ImageSpan 						图片
RelativeSizeSpan				相对大小（文本字体）
ReplacementSpan 				父类，一般不用
ScaleXSpan 						基于x轴缩放
StyleSpan 						字体样式：粗体、斜体等
SubscriptSpan 					下标（数学公式会用到）
SuperscriptSpan 				上标（数学公式会用到）
TextAppearanceSpan 				文本外貌（包括字体、大小、样式和颜色）
TypefaceSpan 					文本字体
URLSpan 						文本超链接


8.实现部分可点击的TextView
例如:QQ控件和微信朋友圈的点赞列表可以点击进去查看用户信息
主要用到一个TextView 跟  SpannableStringBuilder类 


9.实现跑马灯效果的TextView (就是会自动滚动的字符串)

10.设置TextView字间距和行间距
字间距
	android:textScaleX:	控制字体水平方向的缩放,默认值1.0f,值是float
java中使用setScaleX(2.0f)

行间距
	android:lineSpacingExtra:		设置行间距 如"3dp" 
	android:lineSpacingMultiplier:	设置行间距的倍数
java代码中可以通过:setLineSpacing方法来设置

11.自动换行
自动换行通过android:singleLine设置,默认为false.
需要自动换行:		android:singleLine = "false"
反之				android:singleLine = "true"
