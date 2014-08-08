RecyclineFactory
================

地址：
https://github.com/switch-st/RecyclineFactory.git

说明：
 * 可回收产品的工厂类 v0.11
 * 1. 重复利用产品
 * 2. 仅支持单一产品
 * 应用场景：
 * 应用于一个类在初始化之后可以多次使用的场景。
 * 比如：我们公司做的一个产品需要保存动态库的运行时状态，我们有一个STAT的类，
 * 针对不同的动态库初始成不同的内容，动态库调用结束了，STAT类就不需要了，此时
 * 可以将其回收(回收时状态标志清空)，以供重复利用，减少初始化的次数和内存开销。
 *  
 * v0.11 增加产品复制的功能。
 *  
 * 欢迎补充！

调用：
	调用方法详见test.cpp。


	            by switch
				switch.st@gmail.com

